//
//  PostProcessor.hpp
//  Breakout
//
//  Created by mac on 2019/4/24.
//  Copyright © 2019年 cc. All rights reserved.
//

#ifndef PostProcessor_hpp
#define PostProcessor_hpp

#include <stdio.h>

#include <GL/glew.h>
#include <glm/glm.hpp>

#include "Shader.hpp"
#include "Texture2D.hpp"
#include "SpriteRenderer.hpp"

class PostProcessor
{
public:
    // State
    Shader PostProcessingShader;
    Texture2D Texture;
    GLuint Width, Height;
    // Options
    GLboolean Confuse, Chaos, Shake;
    // Constructor
    PostProcessor(Shader shader, GLuint width, GLuint height);
    // Prepares the postprocessor's framebuffer operations before rendering the game
    void BeginRender();
    // Should be called after rendering the game, so it stores all the rendered data into a texture object
    void EndRender();
    // Renders the PostProcessor texture quad (as a screen-encompassing large sprite)
    void Render(GLfloat time);
private:
    // Render state
    GLuint MSFBO, FBO; // MSFBO = Multisampled FBO. FBO is regular, used for blitting MS color-buffer to texture
    GLuint RBO; // RBO is used for multisampled color buffer
    GLuint VAO;
    // Initialize quad for rendering postprocessing texture
    void initRenderData();
};

#endif /* PostProcessor_hpp */
