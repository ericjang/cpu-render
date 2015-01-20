
#include "render.h"

// implement this function
vec4 getRGBA(vec2 iResolution, vec2 gl_FragCoord) {
    // TODO - fill in this function
    vec2 uv = gl_FragCoord.xy() / iResolution.xy(); // swizzling works kinda funny
    return vec4(uv,0.5,1);
}


