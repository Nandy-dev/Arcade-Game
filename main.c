/**
 * \file main.c
 * \brief Programme principal initial du niveau 1
 * \author Mathieu Constant
 * \version 1.0
 * \date 18 mars 2021
 */

#include "constantes.h"
#include "world.h"
#include "graphiques.h"
#include "sdl2-light.h"
#include <stdio.h>
#include "sdl2-ttf-light.h"

/**
 *  \brief programme principal qui implémente la boucle du jeu
 */
int main( int argc, char* args[] ){
    
    // déclaration des différentes variables
    SDL_Event event;
    world_t world;
    ressources textures;
    SDL_Renderer *renderer;
    SDL_Window *window;
 
    //initialisation du jeu
    init(&window,&renderer,&textures,&world);

    // Afficher un message ou écran de démarrage ici si tu veux
    apply_text(renderer, SCREEN_WIDTH / 2 - 100, SCREEN_HEIGHT / 2 - 50, 200, 75, "Get Ready!", textures.font);

    update_screen(renderer);
    
    // Pause de 3 secondes avant de démarrer le jeu
    pause(3000);

    //la boucle du jeu 
    while(!is_game_over(&world)){ //tant que le jeu n'est pas fini
        
        //gestion des évènements
        handle_events(&event,&world);
        
        if (world.stop == 1){
            //mise à jour des données liée à la physique du monde
            update_data(&world);
        }
        
        //rafraichissement de l'écran
        refresh_graphics(renderer,&world,&textures);

        if (world.stop == 0) {
            apply_text(renderer, SCREEN_WIDTH / 2 - 100, SCREEN_HEIGHT / 2 - 50, 200, 75, "Pause", textures.font);
            update_screen(renderer);
        }

        // pause de 10 ms pour controler la vitesse de rafraichissement
        pause(10);
    }

    //nettoyage final
    clean(window,renderer,&textures,&world);
    
    
    return 0;
}
