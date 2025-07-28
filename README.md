# Arcade-Game# 🚀 Space Arcade Game

## 📸 Visuals & Demo


## 🎮 Game Description

This arcade game features a spaceship navigating through walls of meteorites.  

- The game starts with a countdown to prepare the player.  
- Once started, the spaceship and meteorite walls appear, accompanied by background music.  
- Press **"P"** to pause or resume the game.  
- Press **Spacebar** to launch missiles.  
- If a missile hits a wall, both disappear with a collision sound, and an encouraging message is displayed.  
- The player starts with 4 missiles and can earn 2 bonus missiles by reaching a goal, accompanied by a victory sound and message.  
- Collision of the spaceship with a wall ends the game with a defeat message and sound.  
- Reaching the finish line triggers a victory message showing the time in seconds and plays a victory sound.  
- The game closes 2 seconds after either victory or defeat.

---

## 💻 Code Structure

The code is divided into modules:  

- `world` (world.h and world.c): Handles game world elements like sprites and walls.  
- `graphics` (graphics.h and graphics.c): Manages display elements such as textures and sounds.  
- `constantes.h`: Contains all game constants.  
- `main.c`: Main file containing the game loop and integrating all modules.

---

## ✅ Features

- Player movement with arrow keys  
- Dynamic addition of walls to extend the path  
- Background music  
- Sound effects for defeat, victory, and collisions  
- On-screen messages for defeat, victory, and encouragement  
- Pause and resume functionality  
- Missile launching and bonus missile pickups  

---

## 📁 Files

world.h
world.c
graphics.h
graphics.c
constantes.h
main.c

---




