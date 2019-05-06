//
//  SpriteRenderer.hpp
//  Breakout
//
//  Created by mac on 2019/4/24.
//  Copyright © 2019年 cc. All rights reserved.
//

#ifndef SpriteRenderer_hpp
#define SpriteRenderer_hpp

#include <stdio.h>
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "Texture2D.hpp"
#include "Shader.hpp"

class SpriteRenderer
{
    public:
        SpriteRenderer(Shader &shader);
        ~SpriteRenderer();
    
        void DrawSprite(Texture2D &texture,glm::vec2 position,glm::vec2 size = glm::vec2(10,10),GLfloat rotate = 0.0f,glm::vec3 color = glm::vec3(1.0f));
    private:
        Shader shader;
        GLuint quadVAO;
    
        void initRenderData();
};

#endif /* SpriteRenderer_hpp */
