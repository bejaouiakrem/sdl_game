#ifndef FONCTION_H
#define FONCTION_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#define SCREEN_H 550
#define SCREEN_W 1000

typedef struct
{
    char *url;
    SDL_Rect pos_img_affiche;
    SDL_Rect pos_img_ecran;
    SDL_Surface *img;
} image;
typedef struct
{
    SDL_Surface *img[2][4];
    int direction;
    int num;
    int deplacement;
    SDL_Rect pos_img_ecran;
    int up;
} hero;

void initialiser_imageBACK(image *image);
void initialiser_imageBACK1(image *image);
void initialiser_imageBACK2(image *imge);
void initialiser_imageBOUTONplay(image *imgbtn);
void initialiser_imageBOUTONquit(image *imgbtn);
void initialiser_imageBOUTONplay1(image *imgbtn);
void initialiser_imageBOUTONquit1(image *imgbtn);
void initialiser_imageBOUTONsetting(image *imgbtn);
void initialiser_imageBOUTONsetting1(image *imgbtn);
void initialiser_image_mosquito(image *imgbtn);
void initialiser_image_bossmosquito(image *imgbtn);
void initialiser_image_logo(image *imgbtn);
void initialiser_image_smoke1(image *imgbtn);
void initialiser_image_smoke2(image *imgbtn);
void initialiser_image_smoke3(image *imgbtn);
void initialiser_image_smoke4(image *imgbtn);
void initialiser_image_smoke5(image *imgbtn);
void initialiser_image_smoke6(image *imgbtn);
void initialiser_imageVOLUMEaudio1(image *imgbtn);
void initialiser_imageVOLUMEaudio2(image *imgbtn);
void initialiser_imageVOLUMEaudio3(image *imgbtn);
void initialiser_imageVOLUMEaudio4(image *imgbtn);
void initialiser_imageVOLUMEaudio5(image *imgbtn);
void initialiser_imageVOLUMEaudio6(image *imgbtn);
void initialiser_imageVOLUMEaudio7(image *imgbtn);
void initialiser_imageVOLUMEaudio8(image *imgbtn);
void initialiser_imageBOUTONvolumeup(image *imgbtn);
void initialiser_imageBOUTONvolumeup1(image *imgbtn);
void initialiser_imageBOUTONvolumedown(image *imgbtn);
void initialiser_imageBOUTONvolumedown1(image *imgbtn);
void initialiser_imageBOUTONRETOUR1(image *imgbtn);
void initialiser_imageBOUTONRETOUR(image *imgbtn);
void init_hero(hero *h);
void init_hero2(hero *h);

void afficher_imageBACK(SDL_Surface *screen, image imge);
void afficher_imageBTN(SDL_Surface *screen, image imge);
void afficher_hero(SDL_Surface *screen, hero h);

void move_perso(hero *h, int *run);
void animer_hero(hero *h);
void saut_perso(hero *h, int *saut);
void scrolling(image *imge, hero *h, int right, int run);

void liberer_image(image imge);
void liberer_hero_image(hero *h);

#endif
