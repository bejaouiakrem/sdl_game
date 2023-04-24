#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "fonction.h"

void initialiser_imageBACK(image *imge)
{
   imge->url = "Capture1.bmp";
   imge->img = SDL_LoadBMP(imge->url);
   if (imge->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imge->pos_img_ecran.x = 0;
   imge->pos_img_ecran.y = 0;
   imge->pos_img_affiche.x = 0;
   imge->pos_img_affiche.y = 0;
   imge->pos_img_affiche.h = SCREEN_H;
   imge->pos_img_affiche.w = SCREEN_W;
}
void initialiser_imageBACK1(image *imge)
{
   imge->url = "1.jpg";
   imge->img = IMG_Load(imge->url);
   if (imge->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imge->pos_img_ecran.x = 0;
   imge->pos_img_ecran.y = 0;
   imge->pos_img_affiche.x = 0;
   imge->pos_img_affiche.y = 0;
   imge->pos_img_affiche.h = SCREEN_H;
   imge->pos_img_affiche.w = SCREEN_W;
}
void initialiser_imageBACK2(image *imge)
{
   imge->url = "nouv_background.png";
   imge->img = IMG_Load(imge->url);
   if (imge->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imge->pos_img_ecran.x = 0;
   imge->pos_img_ecran.y = 0;
   imge->pos_img_affiche.x = 0;
   imge->pos_img_affiche.y = 0;
   imge->pos_img_affiche.h = SCREEN_H;
   imge->pos_img_affiche.w = SCREEN_W;
}
void initialiser_imageBOUTONquit(image *imgbtn)
{
   imgbtn->url = "Quit-v2.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 346;
   imgbtn->pos_img_ecran.y = 330;
}
void initialiser_imageBOUTONquit1(image *imgbtn)
{
   imgbtn->url = "Quit-v3.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 346;
   imgbtn->pos_img_ecran.y = 330;
}
void initialiser_imageBOUTONplay(image *imgbtn)
{
   imgbtn->url = "PLAY_V2.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 346;
   imgbtn->pos_img_ecran.y = 150;
}
void initialiser_imageBOUTONplay1(image *imgbtn)
{
   imgbtn->url = "PLAY_V3.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 346;
   imgbtn->pos_img_ecran.y = 150;
}
void initialiser_imageBOUTONsetting(image *imgbtn)
{
   imgbtn->url = "option-v2.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 346;
   imgbtn->pos_img_ecran.y = 240;
}
void initialiser_imageBOUTONsetting1(image *imgbtn)
{
   imgbtn->url = "option-v3.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 346;
   imgbtn->pos_img_ecran.y = 240;
}
void initialiser_image_mosquito(image *imgbtn)
{
   imgbtn->url = "mosquito.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 1000;
   imgbtn->pos_img_ecran.y = 205;
}
void initialiser_image_bossmosquito(image *imgbtn)
{
   imgbtn->url = "bossmosquito.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = -200;
   imgbtn->pos_img_ecran.y = 85;
}
void initialiser_image_logo(image *imgbtn)
{
   imgbtn->url = "logo.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 0;
   imgbtn->pos_img_ecran.y = 380;
}
void initialiser_image_smoke1(image *imgbtn)
{
   imgbtn->url = "do5an1.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 617;
   imgbtn->pos_img_ecran.y = 5;
}
void initialiser_image_smoke2(image *imgbtn)
{
   imgbtn->url = "do5an2.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 617;
   imgbtn->pos_img_ecran.y = 22;
}
void initialiser_image_smoke3(image *imgbtn)
{
   imgbtn->url = "do5an3.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 518;
   imgbtn->pos_img_ecran.y = 8;
}
void initialiser_image_smoke4(image *imgbtn)
{
   imgbtn->url = "do5an4 .png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 518;
   imgbtn->pos_img_ecran.y = 25;
}
void initialiser_image_smoke5(image *imgbtn)
{
   imgbtn->url = "do5an5.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 403;
   imgbtn->pos_img_ecran.y = 25;
}
void initialiser_image_smoke6(image *imgbtn)
{
   imgbtn->url = "do5an6.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 403;
   imgbtn->pos_img_ecran.y = 39;
}
void initialiser_imageVOLUMEaudio1(image *imgbtn)
{
   imgbtn->url = "volume1.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 389;
   imgbtn->pos_img_ecran.y = 147;
}
void initialiser_imageVOLUMEaudio2(image *imgbtn)
{
   imgbtn->url = "volume2.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 434;
   imgbtn->pos_img_ecran.y = 150;
}
void initialiser_imageVOLUMEaudio3(image *imgbtn)
{
   imgbtn->url = "volume3.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 434;
   imgbtn->pos_img_ecran.y = 150;
}
void initialiser_imageVOLUMEaudio4(image *imgbtn)
{
   imgbtn->url = "volume4.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 434;
   imgbtn->pos_img_ecran.y = 150;
}
void initialiser_imageVOLUMEaudio5(image *imgbtn)
{
   imgbtn->url = "volume5.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 434;
   imgbtn->pos_img_ecran.y = 150;
}
void initialiser_imageVOLUMEaudio6(image *imgbtn)
{
   imgbtn->url = "volume6.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 434;
   imgbtn->pos_img_ecran.y = 150;
}
void initialiser_imageVOLUMEaudio7(image *imgbtn)
{
   imgbtn->url = "volume7.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 500;
   imgbtn->pos_img_ecran.y = 111;
}
void initialiser_imageVOLUMEaudio8(image *imgbtn)
{
   imgbtn->url = "volume8.png";
   imgbtn->img = IMG_Load(imgbtn->url);
   if (imgbtn->img == NULL)
   {
      printf("unable to load background image %s \n", SDL_GetError());
      return;
   }
   imgbtn->pos_img_affiche.x = 0;
   imgbtn->pos_img_affiche.y = 0;
   imgbtn->pos_img_affiche.w = 310;
   imgbtn->pos_img_affiche.h = 58;
   imgbtn->pos_img_ecran.x = 500;
   imgbtn->pos_img_ecran.y = 111;
}
void initialiser_imageBOUTONvolumeup(image *imgbtn){
imgbtn->url="up.png";
imgbtn->img=IMG_Load(imgbtn->url);
if(imgbtn->img == NULL){
   printf("unable to load background image %s \n",SDL_GetError());
   return ; }
imgbtn->pos_img_affiche.x=0;
imgbtn->pos_img_affiche.y=0;
imgbtn->pos_img_affiche.w=310;
imgbtn->pos_img_affiche.h=58;
imgbtn->pos_img_ecran.x=716;
imgbtn->pos_img_ecran.y=168;
}
void initialiser_imageBOUTONvolumeup1(image *imgbtn){
imgbtn->url="upcolor.png";
imgbtn->img=IMG_Load(imgbtn->url);
if(imgbtn->img == NULL){
   printf("unable to load background image %s \n",SDL_GetError());
   return ; }
imgbtn->pos_img_affiche.x=0;
imgbtn->pos_img_affiche.y=0;
imgbtn->pos_img_affiche.w=310;
imgbtn->pos_img_affiche.h=58;
imgbtn->pos_img_ecran.x=716;
imgbtn->pos_img_ecran.y=168;
}
void initialiser_imageBOUTONvolumedown(image *imgbtn){
imgbtn->url="down.png";
imgbtn->img=IMG_Load(imgbtn->url);
if(imgbtn->img == NULL){
   printf("unable to load background image %s \n",SDL_GetError());
   return ; }
imgbtn->pos_img_affiche.x=0;
imgbtn->pos_img_affiche.y=0;
imgbtn->pos_img_affiche.w=310;
imgbtn->pos_img_affiche.h=58;
imgbtn->pos_img_ecran.x=395;
imgbtn->pos_img_ecran.y=168;
}
void initialiser_imageBOUTONvolumedown1(image *imgbtn){
imgbtn->url="downcolor.png";
imgbtn->img=IMG_Load(imgbtn->url);
if(imgbtn->img == NULL){
   printf("unable to load background image %s \n",SDL_GetError());
   return ; }
imgbtn->pos_img_affiche.x=0;
imgbtn->pos_img_affiche.y=0;
imgbtn->pos_img_affiche.w=310;
imgbtn->pos_img_affiche.h=58;
imgbtn->pos_img_ecran.x=395;
imgbtn->pos_img_ecran.y=168;
}
void initialiser_imageBOUTONRETOUR(image *imgbtn){
imgbtn->url="back.png";
imgbtn->img=IMG_Load(imgbtn->url);
if(imgbtn->img == NULL){
   printf("unable to load background image %s \n",SDL_GetError());
   return ; }
imgbtn->pos_img_affiche.x=0;
imgbtn->pos_img_affiche.y=0;
imgbtn->pos_img_affiche.w=310;
imgbtn->pos_img_affiche.h=58;
imgbtn->pos_img_ecran.x=60;
imgbtn->pos_img_ecran.y=85;
}
void initialiser_imageBOUTONRETOUR1(image *imgbtn){
imgbtn->url="backcolor.png";
imgbtn->img=IMG_Load(imgbtn->url);
if(imgbtn->img == NULL){
   printf("unable to load background image %s \n",SDL_GetError());
   return ; }
imgbtn->pos_img_affiche.x=0;
imgbtn->pos_img_affiche.y=0;
imgbtn->pos_img_affiche.w=310;
imgbtn->pos_img_affiche.h=58;
imgbtn->pos_img_ecran.x=60;
imgbtn->pos_img_ecran.y=85;
}
void init_hero(hero *h)
{
   int i, j;
   char file_name[20];
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 4; j++)
      {
         sprintf(file_name, "hero%d.%d.png", i, j);
         h->img[i][j] = IMG_Load(file_name);
         if (h->img[i][j] == NULL)
         {
            printf("Failed to load image %s\n", file_name);
            exit(1);
         }
      }
   }
   h->direction = 0;
   h->num = 0;
   h->deplacement = 0;
   h->up = 0;
   h->pos_img_ecran.x = 0;
   h->pos_img_ecran.y = 370;
}
void init_hero2(hero *h)
{
   int i, j;
   char file_name[20];
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 4; j++)
      {
         sprintf(file_name, "hero%d.%d.%d.png", i, j, j);
         h->img[i][j] = IMG_Load(file_name);
         if (h->img[i][j] == NULL)
         {
            printf("Failed to load image %s\n", file_name);
            exit(1);
         }
      }
   }
   h->direction = 0;
   h->num = 0;
   h->deplacement = 0;
   h->up = 0;
   h->pos_img_ecran.x = 0;
   h->pos_img_ecran.y = 370;
}

void afficher_imageBACK(SDL_Surface *screen, image imge)
{
   SDL_BlitSurface(imge.img, &imge.pos_img_affiche, screen, &imge.pos_img_ecran);
}
void afficher_imageBTN(SDL_Surface *screen, image imge)
{
   SDL_BlitSurface(imge.img, NULL, screen, &imge.pos_img_ecran);
}
void afficher_hero(SDL_Surface *screen, hero h)
{
   SDL_BlitSurface(h.img[h.direction][h.num], NULL, screen, &h.pos_img_ecran);
}

void animer_hero(hero *h)
{
   h->num++;
   if (h->num == 3)
   {
      h->num = 0;
   }
}
void move_perso(hero *h, int *run)
{
   switch (h->direction)
   {
   case 0:
      if ((*run) == 0)
      {
         if (h->deplacement > 1)
         {
            h->deplacement--;
         }
         h->pos_img_ecran.x += h->deplacement;
      }
      else
      {
         if (h->deplacement < 3)
         {
            h->deplacement++;
         }
         h->pos_img_ecran.x += h->deplacement;
      }
      break;
   case 1:
      if ((*run) == 0)
      {
         if (h->deplacement > 1)
         {
            h->deplacement--;
         }
         h->pos_img_ecran.x -= h->deplacement;
      }
      else
      {
         if (h->deplacement < 3)
         {
            h->deplacement++;
         }
         h->pos_img_ecran.x -= h->deplacement;
      }
      break;
   }
}
void saut_perso(hero *h, int *saut)
{
   if (h->up == 1)
   {
      if (h->deplacement == 1)
      {
         h->pos_img_ecran.y--;
      }
      else
      {
         h->pos_img_ecran.y -= 3;
      }
      if (h->pos_img_ecran.y <= 300)
      {
         h->up = 0;
      }
   }
   else
   {
      h->pos_img_ecran.y += 3;
      if (h->pos_img_ecran.y >= 370)
      {
         (*saut) = 0;
      }
   }
}
void scrolling(image *imge, hero *h, int right, int run)
{
   switch (h->direction)
   {
   case 0:
      if (right == 1)
      {
         if (h->pos_img_ecran.x >= SCREEN_W / 2)
         {
            switch (run)
            {
            case 0:
               h->deplacement = 0;
               imge->pos_img_ecran.x--;
               imge->pos_img_affiche.w--;
               break;
            case 1:
               h->deplacement = 0;
               imge->pos_img_ecran.x -= 3;
               imge->pos_img_affiche.w -= 3;
            }
            if (imge->pos_img_ecran.x <= 1500 - 2747)
            {
               imge->pos_img_ecran.x = 0;
               imge->pos_img_affiche.w = 0;
            }
            if (h->pos_img_ecran.x >= 954)
            {
               h->pos_img_ecran.x = 954;
            }
         }
      }
      break;
   case 1:
      if (h->pos_img_ecran.x <= SCREEN_W / 2)
      {
         if (h->pos_img_ecran.x <= 0)
         {
            h->pos_img_ecran.x = 0;
         }
      }
      break;
   }

   /*if(h->up==1){
      imge->pos_img_ecran.y++;
   }
   if(h->up==0){
      if(h->pos_img_ecran.y<370)
      imge->pos_img_ecran.y--;
   }*/
}

void liberer_hero_image(hero *h)
{
   int i, j;
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 4; j++)
      {
         SDL_FreeSurface(h->img[i][j]);
      }
   }
}

void liberer_image(image imge)
{
   SDL_FreeSurface(imge.img);
}
