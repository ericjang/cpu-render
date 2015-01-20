cpu-render
==============

This is a simple implementation of a render() function that uses GLM vector
types and operators to mimic the syntax of a GLSL shader. This is useful when 
trying to figure out subtle problems.

Features:

+ clicking on a pixel prints the coordinates to the console.

## Translating GLSL to C++

GLM fortunately implements many of the native functions of GLSL, so porting GLSL code to C++ is easy. A good strategy is to copy-paste your shader code as-is into C++, and then fix each individual compile error (there shouldn't be too many).

Some common translation tasks:

+ float literals in GLSL are specified like `float x = 2.0`, but in C++ they have to be specified as 2.0f or else they will be treated as doubles and won't mix with glm `vec2`,`vec3`, and `vec4` types, which are based on floats.

+ swizzling in GLM works like that of GLSL, but you need to add `()` after:
`myvec.xyzz` in GLSL becomes `myvec.xyzz()` in C++.

If you have suggestions for how this tool can be improved,feel free to share.
