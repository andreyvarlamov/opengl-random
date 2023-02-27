#include <stdio.h>

#include <cglm/cglm.h>

#include <glad/glad.h>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#define SCR_WIDTH  800
#define SCR_HEIGHT 600

static void _framebuffer_size_callback(
    GLFWwindow* window,
    int width,
    int height
);

static void _mouse_callback(
    GLFWwindow* window,
    double xpos,
    double ypos
);

static void _scroll_callback(
    GLFWwindow* window,
    double xoffset,
    double yoffset
);

int main()
{
    glfwInit();
    glfwWindowHint( GLFW_CONTEXT_VERSION_MAJOR, 3                        );
    glfwWindowHint( GLFW_CONTEXT_VERSION_MINOR, 3                        );
    glfwWindowHint( GLFW_OPENGL_PROFILE,        GLFW_OPENGL_CORE_PROFILE );

    GLFWwindow* window = glfwCreateWindow(
        SCR_WIDTH,
        SCR_HEIGHT,
        "og-framebuffer",
        NULL,
        NULL
    );
    if ( window == NULL )
    {
        printf( "Failed to create GLFW window\n" );
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent( window );
    glfwSetFramebufferSizeCallback( window, _framebuffer_size_callback );
    glfwSetCursorPosCallback( window, _mouse_callback );
    glfwSetScrollCallback( window, _scroll_callback );
}

static void _framebuffer_size_callback(
    GLFWwindow* window,
    int width,
    int height
)
{
    glViewport( 0, 0, width, height );
}

// static void _mouse_callback(
//     GLFWwindow* window,
//     double xpos,
//     double ypos
// )
// {
//     float x = ( float ) xpos;
//     float y = ( float ) ypos;

//     if( first_mouse )
//     {
//         last_x = x;
//         last_y = y;
//         first_mouse = false;
//     }

//     float xoffset = x - last_x;
//     float yoffset = last_y - y;

//     last_x = x;
//     last_y = y;

    
// }

static void _scroll_callback(
    GLFWwindow* window,
    double xoffset,
    double yoffset
);