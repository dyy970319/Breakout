//
//  BallObject.hpp
//  Breakout
//
//  Created by mac on 2019/4/24.
//  Copyright © 2019年 cc. All rights reserved.
//

#ifndef BallObject_hpp
#define BallObject_hpp

#include <stdio.h>
#include <GL/glew.h>
#include <glm/glm.hpp>

#include "Texture2D.hpp"
#include "SpriteRenderer.hpp"
#include "GameObject.hpp"
#include "PowerUp.hpp"

class BallObject : public GameObject
{
public:
    // 球的状态
    GLfloat   Radius;
    GLboolean Stuck;
    GLboolean Sticky, PassThrough;
    
    BallObject();
    BallObject(glm::vec2 pos, GLfloat radius, glm::vec2 velocity, Texture2D sprite);
    
    glm::vec2 Move(GLfloat dt, GLuint window_width);
    void      Reset(glm::vec2 position, glm::vec2 velocity);
}; 

#endif /* BallObject_hpp */
