//
//  GameLevel.hpp
//  Breakout
//
//  Created by mac on 2019/4/24.
//  Copyright © 2019年 cc. All rights reserved.
//

#ifndef GameLevel_hpp
#define GameLevel_hpp
#include <GL/glew.h>
#include <glm/glm.hpp>

#include <stdio.h>
#include <vector>
#include "GameObject.hpp"
#include "SpriteRenderer.hpp"
#include "ResourceManager.hpp"

class GameLevel
{
public:
    std::vector<GameObject>Bricks;
    
    GameLevel(){}
    //从文件中加载关卡
    void Load(const GLchar *file,GLuint levelWidth,GLuint levelHeight);
    //渲染关卡
    void Draw(SpriteRenderer &renderer);
    //检查一个关卡是否已完成（所有非坚硬的z瓷砖均被摧毁）
    GLboolean IsCompleted();
private:
    //由砖块数据初始化关卡
    void init(std::vector<std::vector<GLuint>>tileData,GLuint levelWidth,GLuint levelHeight);
};

#endif /* GameLevel_hpp */
