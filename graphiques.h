/**
 * \file graphiques.h
 * \brief en-tête de la partie graphique des données du monde
 * \author Jules Hinson / Ahoomey-Zunu Nandi
 * \version 0.2
 * \date 5 avril 2025
*/

#ifndef GRAPHIQUES_H
#define GRAPHIQUES_H
#include "constantes.h"
#include "world.h"
#include "sdl2-light.h"
#include "sdl2-ttf-light.h"
#include <SDL2/SDL_mixer.h>


/**
 * \brief Représentation pour stocker les textures nécessaires à l'affichage graphique
*/
struct textures_s{

    SDL_Texture* background; /*!< Texture liée à l'image du fond de l'écran. */

    SDL_Texture* spaceship;     /*!< Texture liée à l'image du vaisseau. */

    SDL_Texture* finish;        /*!< Texture liée à l'image de la ligne d'arrivée. */

    SDL_Texture* meteorite;     /*!< Texture liée à l'image de la météorite. */

    TTF_Font* font;            /*!< Texture liée à l'affichage du texte sur l'écran. */

    SDL_Texture* missile;     /*!< Texture liée à l'image de la missile. */

    Mix_Music* music;

    Mix_Chunk* sound_win;

    Mix_Chunk* sound_lose;

    Mix_Chunk* sound_explosion;

    Mix_Chunk* sound_mini_explosion;

};


/**
 * \brief Type qui correspond aux textures du jeu
*/
typedef struct textures_s ressources;


/**
 * \brief La fonction nettoie les textures
 * \param textures les textures
*/
void clean_textures(ressources *textures);


/**
 * \brief La fonction initialise les textures nécessaires à l'affichage graphique du jeu
 * \param renderer la surface correspondant à l'écran de jeu
 * \param textures les textures du jeu
*/
void  init_textures(SDL_Renderer *renderer, ressources *textures);


/**
 * \brief La fonction applique la texture du fond sur le renderer lié à l'écran de jeu
 * \param renderer le renderer
 * \param texture la texture liée au fond
*/
void apply_background(SDL_Renderer *renderer, SDL_Texture *texture);


/**
 * \brief La fonction applique la texture du fond sur le renderer lié au sprite
 * \param renderer le renderer
 * \param texture la texture liée au fond
 * \param sprite un élément du monde du jeu
*/
void apply_sprite(SDL_Renderer *renderer,SDL_Texture *texture,sprite_t * sprite);


/**
 *\brief La fonction applique la texture des murs sur le renderer lié au jeu 
 *\param renderer le renderer
 *\param texture la texture liée au fond
 *\param sprite un mur
*/
void apply_walls(SDL_Renderer *renderer,SDL_Texture *texture,sprite_t * sprite);


/**
 *\brief La fonction applique la texture des murs sur le renderer lié au jeu si ce mur ne cogne pas un missile
 *\param renderer le renderer
 *\param texture la texture liée au fond
 *\param world le monde
*/
void if_apply_walls(SDL_Renderer *renderer,SDL_Texture *texture,world_t * world);

/**
 * \brief La fonction rafraichit l'écran en fonction de l'état des données du monde
 * \param renderer le renderer lié à l'écran de jeu
 * \param world les données du monde
 * \param textures les textures
 */
void refresh_graphics(SDL_Renderer *renderer, world_t *world,ressources *textures);


/**
 * \brief fonction qui initialise le jeu: initialisation de la partie graphique (SDL), chargement des textures, initialisation des données
 * \param window la fenêtre du jeu
 * \param renderer le renderer
 * \param textures les textures
 * \param world le monde
 */
void init(SDL_Window **window, SDL_Renderer ** renderer, ressources *textures, world_t * world);

/**
* \brief fonction qui nettoie le jeu: nettoyage de la partie graphique (SDL), nettoyage des textures, nettoyage des données
* \param window la fenêtre du jeu
* \param renderer le renderer
* \param textures les textures
* \param world le monde
*/
void clean(SDL_Window *window, SDL_Renderer * renderer, ressources *textures, world_t * world);


#endif