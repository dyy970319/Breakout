//
//  PowerUp.hpp
//  Breakout
//
//  Created by mac on 2019/4/25.
//  Copyright © 2019年 cc. All rights reserved.
//

#ifndef PowerUp_hpp
#define PowerUp_hpp

#include <stdio.h>
#include <GL/glew.h>
#include <glm/glm.hpp>
#include "GameObject.hpp"
#include <iostream>

const glm::vec2 SIZE(60, 20);
const glm::vec2 VELOCITY(0.0f, 150.0f);

class PowerUp : public GameObject
{
public:
    // 道具类型
    std::string Type;
    GLfloat     Duration;
    GLboolean   Activated;
    // 构造函数
    PowerUp(std::string type, glm::vec3 color, GLfloat duration,
            glm::vec2 position, Texture2D texture)
    : GameObject(position, SIZE, texture, color, VELOCITY),
    Type(type), Duration(duration), Activated()
    {std::cout<<"powerup construct"<<std::endl; }
};

#endif /* PowerUp_hpp */
