#include <stdio.h>

#include <cglm/cglm.h>

int main()
{
    vec2 test;
    glm_vec2_copy( GLM_VEC2_ZERO, test );
    printf("Hello %f\n", test[0]);
}