#pragma once //Ensures that this header file is only included once in a compilation unit to avoid duplicate definitions.
#include "raylib.h"

class Dino{
    public:
        Dino();
        ~Dino();
        void Draw();
        void Update();
        Rectangle GetRect();
        void DrawHitBox(bool isColliding);
    private:
        Texture2D image;
        Vector2 position;  // Represents a vector in a 2D space. X and y coordinates
        int speed;
        
};