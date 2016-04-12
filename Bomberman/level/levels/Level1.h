//Unik för varje level
//Här använder man gamecontroller för att säga vilken level som är igång
//Och vi anvönder funktionerna i gameController för att hantera lvln


// Load() -> start värden

// Unload() -> när lvln är klar ta bort allt som finns så det inte ligger i bakgrunden hela tiden

// Render() -> Definiera vad som ritas till skärmen, rita leveln

// Update() -> Vad som ska ske i leveln defenieras i update, ska något röra sig osv

#ifndef LEVEL1_H
#define LEVEL1_H

#include "../../GameLevel.h"

#include <SDL_render.h>



int InitLevel1(SDL_Renderer *renderer);

#endif