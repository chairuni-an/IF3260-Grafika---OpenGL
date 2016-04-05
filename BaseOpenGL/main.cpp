//
//  main.cpp
//  BaseOpenGL
//
//  Created by Chairuni Aulia Nusapati on 4/5/16.
//  Copyright © 2016 Chairuni Aulia Nusapati. All rights reserved.
//

#include <iostream>
//GLEW
#include <GL/glew.h>
//GLFW
#include <GLFW/glfw3.h>

void render(void){
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
    {
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0, .5);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-.5, -.5);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(.5, -.5);
    }
    glEnd();
}

int main(int argc, const char * argv[]) {
    GLFWwindow *win;
    
    if(!glfwInit()){
        return -1;
    }
    
    win = glfwCreateWindow(640, 480, "OpenGL Base Project", NULL, NULL);
    if(!win){
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    
    if(!glewInit()){
        return -1;
    }
    
    glfwMakeContextCurrent(win);
    
    while(!glfwWindowShouldClose(win)){
        render();
        
        glfwSwapBuffers(win);
        glfwPollEvents();
    }
    
    glfwTerminate();
    exit(EXIT_SUCCESS);
    
    return 0;
}