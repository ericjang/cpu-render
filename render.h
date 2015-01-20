/*!
   @file   render.h
   @author evjang (eric_jang@brown.edu)
   @date   Spring 2015
*/

#ifndef RENDER
#define RENDER

#define GLM_SWIZZLE
#include <glm/glm.hpp>


using namespace glm;
vec4 getRGBA(vec2 iResolution,
             vec2 gl_FragCoord);

#endif // RENDER

