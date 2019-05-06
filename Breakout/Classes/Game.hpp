//
//  Game.hpp
//  Breakout
//
//  Created by mac on 2019/4/23.
//  Copyright © 2019年 cc. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <tuple>

#include "GameLevel.hpp"
#include "BallObject.hpp"
#include "PowerUp.hpp"

enum GameState{
    GAME_ACTIVE,
    GAME_MENU,
    GAME_WIN
};
enum Direction {
    UP,
    RIGHT,
    DOWN,
    LEFT
};  

typedef std::tuple<GLboolean, Direction, glm::vec2> Collision;

const glm::vec2 PLAYER_SIZE(100, 20);
// 初始化当班的速率
const GLfloat PLAYER_VELOCITY(500.0f);
// 初始化球的速度
const glm::vec2 INITIAL_BALL_VELOCITY(100.0f, -350.0f);
// 球的半径
const GLfloat BALL_RADIUS = 12.5f;

class Game
{
    public:
        //游戏状态
        GameState State;
        GLboolean Keys[1024];
        GLuint Width,Height;
    
        std::vector<GameLevel> Levels;
        GLuint Level;
        std::vector<PowerUp>  PowerUps;
    
        //构造函数/析构函数
        Game(GLuint width,GLuint height);
        ~Game();
        void Init();
        void ProcessInput(GLfloat dt);
        void Update(GLfloat dt);
        void Render();
        void DoCollisions();
        // Reset
        void ResetLevel();
        void ResetPlayer();
        void SpawnPowerUps(GameObject &block);
        void UpdatePowerUps(GLfloat dt);
};




#endif /* Game_hpp */
