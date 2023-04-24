#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "fonction.h"

int main(int argc, char *args[])
{
       hero h, h2, h_yellow, h_pink;
       SDL_Surface *screen;
       image IMAGE, back, IMAGEBTNPLAY, IMAGEBTNQUIT, IMAGEBTNPLAY1, IMAGEBTNQUIT1, IMAGEOPTION, IMAGEOPTION1, nouv_back;
       image IMAGEBTNVOLUP, IMAGEBTNVOLUP1, IMAGEBTNVOLDOWN, IMAGEBTNVOLDOWN1, IMAGERETOUR, IMAGERETOUR1;
       image mosquito, bossmosquito, logo_image;
       image smoke1, smoke2, smoke3, smoke4, smoke5, smoke6;
       image VOLUME1, VOLUME2, VOLUME3, VOLUME4, VOLUME5, VOLUME6, VOLUME7, VOLUME8;
       Mix_Music *music, *music_level1;
       Mix_Chunk *mus;
       SDL_Event event;
       int boucle = 1, clicp = 0, clicq = 0, clics = 0, menu = 0, current_level = 0, level_change = 0;
       int right = 0, left = 0, run = 0, saut = 0, current_image = 0, choix_hero = 0, hero_yellow = 0, hero_pink = 0;
       int sound_volume = 128, tmp_sound_volume = 0;
       int music_volume = 128;
       int clicvdown = 0, clicvup = 0, clicretour = 0;
       if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER) == -1)
       {
              printf("could not initialize %s \n", SDL_GetError());
              return -1;
       }
       screen = SDL_SetVideoMode(SCREEN_W, SCREEN_H, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

       initialiser_imageBACK(&IMAGE);
       initialiser_imageBACK1(&back);
       initialiser_imageBACK2(&nouv_back);
       initialiser_imageBOUTONquit(&IMAGEBTNQUIT);
       initialiser_imageBOUTONplay(&IMAGEBTNPLAY);
       initialiser_imageBOUTONquit1(&IMAGEBTNQUIT1);
       initialiser_imageBOUTONplay1(&IMAGEBTNPLAY1);
       initialiser_imageBOUTONsetting(&IMAGEOPTION);
       initialiser_imageBOUTONsetting1(&IMAGEOPTION1);
       initialiser_image_mosquito(&mosquito);
       initialiser_image_bossmosquito(&bossmosquito);
       initialiser_image_logo(&logo_image);
       initialiser_image_smoke1(&smoke1);
       initialiser_image_smoke2(&smoke2);
       initialiser_image_smoke3(&smoke3);
       initialiser_image_smoke4(&smoke4);
       initialiser_image_smoke5(&smoke5);
       initialiser_image_smoke6(&smoke6);
       initialiser_imageVOLUMEaudio1(&VOLUME1);
       initialiser_imageVOLUMEaudio2(&VOLUME2);
       initialiser_imageVOLUMEaudio3(&VOLUME3);
       initialiser_imageVOLUMEaudio4(&VOLUME4);
       initialiser_imageVOLUMEaudio5(&VOLUME5);
       initialiser_imageVOLUMEaudio6(&VOLUME6);
       initialiser_imageVOLUMEaudio7(&VOLUME7);
       initialiser_imageVOLUMEaudio8(&VOLUME8);
       initialiser_imageBOUTONvolumeup(&IMAGEBTNVOLUP);
       initialiser_imageBOUTONvolumeup1(&IMAGEBTNVOLUP1);
       initialiser_imageBOUTONvolumedown(&IMAGEBTNVOLDOWN);
       initialiser_imageBOUTONvolumedown1(&IMAGEBTNVOLDOWN1);
       initialiser_imageBOUTONRETOUR1(&IMAGERETOUR1);
       initialiser_imageBOUTONRETOUR(&IMAGERETOUR);
       init_hero(&h);
       init_hero(&h_yellow);
       init_hero2(&h2);
       init_hero2(&h_pink);
       if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
       {
              printf("%s", SDL_GetError());
       }
       music = Mix_LoadMUS("music.mp3");
       music_level1 = Mix_LoadMUS("vent.mp3");
       if (!Mix_PlayingMusic())
       {
              // Stop any previously playing music
              Mix_HaltMusic();

              // Load music for current level
              if (current_level == 0)
              {
                     Mix_PlayMusic(music, -1);
              }
              else if (current_level == 1)
              {
                     Mix_PlayMusic(music_level1, -1);
              }
       }
       Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
       mus = Mix_LoadWAV("simple.wav");
       while (boucle)
       {

              if (level_change != 0)
              {
                     Mix_HaltMusic();
                     if (current_level == 0)
                     {
                            Mix_PlayMusic(music, -1);
                     }
                     else if (current_level == 1)
                     {
                            Mix_PlayMusic(music_level1, -1);
                     }
                     SDL_Delay(10);
                     level_change = 0;
              }
              Mix_VolumeChunk(mus, sound_volume);
              Mix_VolumeMusic(music_volume);
              switch (menu)
              {
              case 0:
                     afficher_imageBACK(screen, IMAGE);
                     // mosquito_animation
                     mosquito.pos_img_ecran.x--;
                     bossmosquito.pos_img_ecran.x++;
                     if (mosquito.pos_img_ecran.x == -200)
                     {
                            mosquito.pos_img_ecran.x = 1000;
                     }
                     if (bossmosquito.pos_img_ecran.x == 1000)
                     {
                            bossmosquito.pos_img_ecran.x = -200;
                     }
                     afficher_imageBTN(screen, mosquito);
                     afficher_imageBTN(screen, bossmosquito);
                     // end_mosquito_animation
                     // logo_animatio
                     if (logo_image.pos_img_ecran.x <= 1000 && logo_image.pos_img_ecran.y == 380)
                     {
                            logo_image.pos_img_ecran.x++;
                     }
                     if (logo_image.pos_img_ecran.x == 1000 && logo_image.pos_img_ecran.y == 380)
                     {
                            logo_image.pos_img_ecran.x = 0;
                            logo_image.pos_img_ecran.y = -150;
                     }
                     if (logo_image.pos_img_ecran.x == 0 && logo_image.pos_img_ecran.y <= 380)
                     {
                            logo_image.pos_img_ecran.y++;
                     }
                     afficher_imageBTN(screen, logo_image);
                     // end_logo_animation
                     // smoke_animation
                     current_image++;
                     if (current_image < 12)
                     {
                            afficher_imageBTN(screen, smoke1);
                            afficher_imageBTN(screen, smoke3);
                            afficher_imageBTN(screen, smoke5);
                     }
                     if (current_image >= 12)
                     {
                            afficher_imageBTN(screen, smoke2);
                            afficher_imageBTN(screen, smoke4);
                            afficher_imageBTN(screen, smoke6);
                     }
                     if (current_image == 24)
                     {
                            current_image = 0;
                     }
                     // end_smoke_animation

                     if (clicp == 0)
                     {
                            afficher_imageBTN(screen, IMAGEBTNPLAY);
                     }
                     else
                     {
                            afficher_imageBTN(screen, IMAGEBTNPLAY1);
                            Mix_PlayChannel(-1, mus, 0);
                     }
                     if (clicq == 0)
                     {
                            afficher_imageBTN(screen, IMAGEBTNQUIT);
                     }
                     else
                     {
                            afficher_imageBTN(screen, IMAGEBTNQUIT1);
                            Mix_PlayChannel(-1, mus, 0);
                     }
                     if (clics == 0)
                     {
                            afficher_imageBTN(screen, IMAGEOPTION);
                     }
                     else
                     {
                            afficher_imageBTN(screen, IMAGEOPTION1);
                            Mix_PlayChannel(-1, mus, 0);
                     }

                     break;
              case 1: // play
                     switch (choix_hero)
                     {
                     case 0:
                            afficher_imageBACK(screen, back);
                            h_yellow.pos_img_ecran.x = 200;
                            h_yellow.pos_img_ecran.y = 200;
                            h_pink.pos_img_ecran.x = 750;
                            h_pink.pos_img_ecran.y = 200;
                            afficher_hero(screen, h_yellow);
                            afficher_hero(screen, h_pink);
                            if (hero_yellow == 1)
                            {
                                   animer_hero(&h_yellow);
                                   Mix_PlayChannel(-1, mus, 0);
                            }
                            else if (hero_pink == 1)
                            {
                                   animer_hero(&h_pink);
                                   Mix_PlayChannel(-1, mus, 0);
                            }
                            break;
                     case 1:

                            afficher_imageBACK(screen, nouv_back);
                            // scrolling(&nouv_back,&h,right,run);
                            afficher_hero(screen, h);
                            if (right == 1)
                            {
                                   h.direction = 0;
                                   move_perso(&h, &run);
                                   animer_hero(&h);
                            }
                            if (left == 1)
                            {
                                   h.direction = 1;
                                   move_perso(&h, &run);
                                   animer_hero(&h);
                            }
                            if (saut == 1)
                            {
                                   saut_perso(&h, &saut);
                                   animer_hero(&h);
                            }
                            break;
                     case 2:

                            afficher_imageBACK(screen, nouv_back);
                            // scrolling(&nouv_back,&h2,right,run);
                            afficher_hero(screen, h2);
                            if (right == 1)
                            {
                                   h2.direction = 0;
                                   move_perso(&h2, &run);
                                   animer_hero(&h2);
                            }
                            if (left == 1)
                            {
                                   h2.direction = 1;
                                   move_perso(&h2, &run);
                                   animer_hero(&h2);
                            }
                            if (saut == 1)
                            {
                                   saut_perso(&h2, &saut);
                            }
                            break;
                     }
                     break;
              case 2: // option
                     afficher_imageBACK(screen, IMAGE);
                     // mosquito_animation
                     mosquito.pos_img_ecran.x--;
                     bossmosquito.pos_img_ecran.x++;
                     if (mosquito.pos_img_ecran.x == -200)
                     {
                            mosquito.pos_img_ecran.x = 1000;
                     }
                     if (bossmosquito.pos_img_ecran.x == 1000)
                     {
                            bossmosquito.pos_img_ecran.x = -200;
                     }
                     afficher_imageBTN(screen, mosquito);
                     afficher_imageBTN(screen, bossmosquito);
                     // end_mosquito_animation
                     // logo_animatio
                     if (logo_image.pos_img_ecran.x <= 1000 && logo_image.pos_img_ecran.y == 380)
                     {
                            logo_image.pos_img_ecran.x++;
                     }
                     if (logo_image.pos_img_ecran.x == 1000 && logo_image.pos_img_ecran.y == 380)
                     {
                            logo_image.pos_img_ecran.x = 0;
                            logo_image.pos_img_ecran.y = -150;
                     }
                     if (logo_image.pos_img_ecran.x == 0 && logo_image.pos_img_ecran.y <= 380)
                     {
                            logo_image.pos_img_ecran.y++;
                     }
                     afficher_imageBTN(screen, logo_image);
                     // end_logo_animation
                     // smoke_animation
                     current_image++;
                     if (current_image < 12)
                     {
                            afficher_imageBTN(screen, smoke1);
                            afficher_imageBTN(screen, smoke3);
                            afficher_imageBTN(screen, smoke5);
                     }
                     if (current_image >= 12)
                     {
                            afficher_imageBTN(screen, smoke2);
                            afficher_imageBTN(screen, smoke4);
                            afficher_imageBTN(screen, smoke6);
                     }
                     if (current_image == 24)
                     {
                            current_image = 0;
                     }
                     // end_smoke_animation
                     if (clicvup == 0)
                     {
                            afficher_imageBTN(screen, IMAGEBTNVOLUP);
                     }
                     else
                     {
                            afficher_imageBTN(screen, IMAGEBTNVOLUP1);
                            Mix_PlayChannel(-1, mus, 0);
                     }
                     if (clicvdown == 0)
                     {
                            afficher_imageBTN(screen, IMAGEBTNVOLDOWN);
                     }
                     else
                     {
                            afficher_imageBTN(screen, IMAGEBTNVOLDOWN1);
                            Mix_PlayChannel(-1, mus, 0);
                     }
                     if (clicretour == 0)
                     {
                            afficher_imageBTN(screen, IMAGERETOUR);
                     }
                     else
                     {
                            afficher_imageBTN(screen, IMAGERETOUR1);
                            Mix_PlayChannel(-1, mus, 0);
                     }
                     switch (sound_volume)
                     {
                     case 16:
                            afficher_imageBTN(screen, VOLUME1);

                            break;
                     case 32:
                            afficher_imageBTN(screen, VOLUME2);

                            break;
                     case 48:
                            afficher_imageBTN(screen, VOLUME3);
                            break;
                     case 64:
                            afficher_imageBTN(screen, VOLUME4);
                            break;
                     case 80:
                            afficher_imageBTN(screen, VOLUME5);
                            break;
                     case 96:
                            afficher_imageBTN(screen, VOLUME6);
                            break;
                     case 112:
                            afficher_imageBTN(screen, VOLUME7);
                            break;
                     case 128:
                            afficher_imageBTN(screen, VOLUME8);
                            break;
                     }
                     break;
              }
              while (SDL_PollEvent(&event))
              {
                     switch (event.type)
                     {
                     case SDL_QUIT:
                            boucle = 0;
                            break;
                     case SDL_MOUSEBUTTONDOWN:
                            if (event.button.button == SDL_BUTTON_LEFT && (event.motion.y <= 392 && event.motion.y >= 341 && event.motion.x <= 561 && event.motion.x >= 350))
                            {
                                   boucle = 0;
                            }
                            else if (event.button.button == SDL_BUTTON_LEFT && (event.motion.y <= 213 && event.motion.y >= 162 && (event.motion.x <= 561 && event.motion.x >= 350)))
                            {
                                   menu = 1;
                            }
                            else if (event.button.button == SDL_BUTTON_LEFT && (event.motion.y <= 302 && event.motion.y >= 253 && event.motion.x <= 561 && event.motion.x >= 350))
                            {
                                   menu = 2;
                            }
                            else if (event.button.button == SDL_BUTTON_LEFT && (event.motion.y <= 212 && event.motion.y >= 85 && event.motion.x <= 186 && event.motion.x >= 60))
                            {
                                   menu = 0;
                            }
                            else if (event.button.button == SDL_BUTTON_LEFT && (event.motion.y <= 260 && event.motion.y >= 200 && event.motion.x <= 240 && event.motion.x >= 200))
                            {
                                   choix_hero = 1;
                                   current_level = 1;
                                   level_change = 1;
                            }
                            else if (event.button.button == SDL_BUTTON_LEFT && (event.motion.y <= 260 && event.motion.y >= 200 && event.motion.x <= 790 && event.motion.x >= 750))
                            {
                                   choix_hero = 2;
                                   current_level = 1;
                                   level_change = 1;
                            }
                            else if (event.button.button == SDL_BUTTON_LEFT && (event.motion.y <= 269 && event.motion.y >= 193 && event.motion.x <= 829 && event.motion.x >= 725))
                            {
                                   sound_volume += 16;
                                   music_volume += 16;
                                   if (sound_volume > 128)
                                   {
                                          sound_volume = 128;
                                   }
                                   if (music_volume > 128)
                                   {
                                          music_volume = 128;
                                   }
                                   Mix_VolumeMusic(music_volume);
                            }
                            else if (event.button.button == SDL_BUTTON_LEFT && (event.motion.y <= 273 && event.motion.y >= 189 && event.motion.x <= 502 && event.motion.x >= 417))
                            {
                                   sound_volume -= 16;
                                   music_volume -= 16;
                                   if (sound_volume < 0)
                                   {
                                          sound_volume = 0;
                                   }
                                   if (music_volume < 0)
                                   {
                                          music_volume = 0;
                                   }
                                   Mix_VolumeMusic(music_volume);
                            }
                            break;
                     case SDL_MOUSEMOTION:
                            if (event.motion.y <= 213 && event.motion.y >= 162 && (event.motion.x <= 561 && event.motion.x >= 350))
                            {
                                   clicp = 1;
                            }
                            else if (event.motion.y <= 392 && event.motion.y >= 341 && event.motion.x <= 561 && event.motion.x >= 350)
                            {
                                   clicq = 1;
                            }
                            else if (event.motion.y <= 302 && event.motion.y >= 253 && event.motion.x <= 561 && event.motion.x >= 350)
                            {
                                   clics = 1;
                            }
                            else if (event.motion.y <= 269 && event.motion.y >= 193 && event.motion.x <= 830 && event.motion.x >= 770)
                            {
                                   clicvup = 1;
                            }
                            else if (event.motion.y <= 273 && event.motion.y >= 189 && event.motion.x <= 502 && event.motion.x >= 417)
                            {
                                   clicvdown = 1;
                            }
                            else if (event.motion.y <= 212 && event.motion.y >= 85 && event.motion.x <= 186 && event.motion.x >= 60)
                            {
                                   clicretour = 1;
                            }
                            else if (event.motion.y <= 260 && event.motion.y >= 200 && event.motion.x <= 240 && event.motion.x >= 200)
                            {
                                   hero_yellow = 1;
                            }
                            else if (event.motion.y <= 260 && event.motion.y >= 200 && event.motion.x <= 790 && event.motion.x >= 750)
                            {
                                   hero_pink = 1;
                            }
                            else
                            {
                                   clicp = 0;
                                   clicq = 0, clics = 0, clicvup = 0, clicvdown = 0, clicretour = 0, hero_yellow = 0, hero_pink = 0;
                            }
                            break;
                     case SDL_KEYDOWN:
                            switch (event.key.keysym.sym)
                            {
                            case SDLK_p:
                                   if (menu == 1)
                                   {
                                          menu = 0;
                                   }
                                   else
                                   {
                                          menu = 1;
                                   }
                                   break;
                            case SDLK_e:
                                   if (saut == 0)
                                   {
                                          saut = 1;
                                          h.up = 1;
                                          h2.up = 1;
                                   }
                                   break;
                            case SDLK_ESCAPE:
                                   if (choix_hero != 0)
                                   {
                                          choix_hero = 0;
                                          current_level = 0;
                                          level_change = 1;
                                   }
                                   else if (choix_hero == 0)
                                   {
                                          menu = 0;
                                   }
                                   break;
                            case SDLK_UP:
                                   sound_volume += 16;
                                   music_volume += 16;
                                   if (sound_volume > 128)
                                   {
                                          sound_volume = 128;
                                   }
                                   if (music_volume > 128)
                                   {
                                          music_volume = 128;
                                   }
                                   Mix_VolumeMusic(music_volume);
                                   break;
                            case SDLK_DOWN:
                                   sound_volume -= 16;
                                   music_volume -= 16;
                                   if (sound_volume < 0)
                                   {
                                          sound_volume = 0;
                                   }
                                   if (music_volume < 0)
                                   {
                                          music_volume = 0;
                                   }
                                   Mix_VolumeMusic(music_volume);
                                   break;
                            case SDLK_m:
                                   if (sound_volume != 0)
                                   {
                                          tmp_sound_volume = sound_volume;
                                          music_volume = 0;
                                          sound_volume = 0;
                                   }
                                   else
                                   {
                                          music_volume = tmp_sound_volume;
                                          sound_volume = tmp_sound_volume;
                                   }
                                   Mix_VolumeMusic(music_volume);
                                   break;
                            case SDLK_f:
                                   if (screen->flags & SDL_FULLSCREEN)
                                   {
                                          screen = SDL_SetVideoMode(1000, 550, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
                                   }
                                   else
                                   {
                                          screen = SDL_SetVideoMode(1000, 550, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_FULLSCREEN);
                                   }
                                   break;
                            case SDLK_o:
                                   if (menu == 2)
                                   {
                                          menu = 0;
                                   }
                                   else
                                   {
                                          menu = 0;
                                   }
                            }
                            break;
                     case SDL_KEYUP:
                            switch (event.key.keysym.sym)
                            {
                            case SDLK_d:
                                   if (right == 0)
                                   {
                                          right = 1;
                                          h.deplacement = 1;
                                          h2.deplacement = 1;
                                   }
                                   else
                                   {
                                          right = 0;
                                          h.deplacement = 0;
                                          h2.deplacement = 0;
                                   }
                                   break;
                            case SDLK_q:
                                   if (left == 0)
                                   {
                                          left = 1;
                                          h.deplacement = 1;
                                          h2.deplacement = 1;
                                   }
                                   else
                                   {
                                          left = 0;
                                          h.deplacement = 0;
                                          h2.deplacement = 0;
                                   }
                                   break;
                            case SDLK_a:
                                   if (run == 0)
                                   {
                                          run = 1;
                                   }
                                   else
                                   {
                                          run = 0;
                                   }
                                   break;
                            }
                            break;
                     }
              }
              printf("%d / %d\n", event.motion.x, event.motion.y);
              printf("%d %d\n", hero_pink, hero_yellow);
              // printf("%d\n",nouv_back.pos_img_ecran.x);
              // printf("%d\n",h.pos_img_ecran.x);
              SDL_Flip(screen);
       }

       liberer_image(IMAGE);
       liberer_image(IMAGEBTNPLAY);
       liberer_image(IMAGEBTNQUIT);
       liberer_image(IMAGEBTNPLAY1);
       liberer_image(IMAGEBTNQUIT1);
       liberer_image(IMAGEOPTION);
       liberer_image(IMAGEOPTION1);
       liberer_image(nouv_back);
       liberer_image(back);
       liberer_image(mosquito);
       liberer_image(bossmosquito);
       liberer_image(smoke1);
       liberer_image(smoke2);
       liberer_image(smoke3);
       liberer_image(smoke4);
       liberer_image(smoke5);
       liberer_image(smoke6);
       liberer_image(VOLUME1);
       liberer_image(VOLUME2);
       liberer_image(VOLUME3);
       liberer_image(VOLUME4);
       liberer_image(VOLUME5);
       liberer_image(VOLUME6);
       liberer_image(VOLUME7);
       liberer_image(VOLUME8);
       liberer_image(IMAGEBTNVOLUP);
       liberer_image(IMAGEBTNVOLUP1);
       liberer_image(IMAGEBTNVOLDOWN);
       liberer_image(IMAGEBTNVOLDOWN1);
       liberer_image(IMAGERETOUR);
       liberer_image(IMAGERETOUR1);
       liberer_image(logo_image);
       liberer_hero_image(&h);
       liberer_hero_image(&h2);
       liberer_hero_image(&h_pink);
       liberer_hero_image(&h_yellow);

       Mix_FreeMusic(music);
       Mix_FreeMusic(music_level1);
       Mix_FreeChunk(mus);
       Mix_CloseAudio();

       SDL_Quit();
       return 0;
}
