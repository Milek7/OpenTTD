#ifndef GL_H
#define GL_H
#ifdef __EMSCRIPTEN__
#include <GLES3/gl3.h>
#define gladLoadGLES2Loader(a) (1)
#define GLAD_GL_VERSION_4_3 0
#define GLAD_GL_VERSION_3_3 0
#define GLAD_GL_NV_framebuffer_multisample_coverage 0
#define GLAD_GL_ARB_depth_buffer_float 0
#define GL_CLAMP_TO_BORDER GL_CLAMP_TO_EDGE
#define glRenderbufferStorageMultisampleCoverageNV(a, b, c, d, e, f)
#define glVertexAttribBinding(a, b)
#define glVertexAttribFormat(a, b, c, d, e)
#define GL_MULTISAMPLE 0
#define GL_SAMPLE_ALPHA_TO_ONE 0
#define glBindVertexBuffer(a, b, c, d)
#define glVertexBindingDivisor(a, b)
#define glMultiDrawArrays(a, b, c, d)
#define glDrawElementsInstancedBaseVertex(a, b, c, d, e, f)
#define glDrawElementsInstancedBaseVertexBaseInstance(a, b, c, d, e, f, g)
#define GL_DEPTH_COMPONENT32 GL_DEPTH_COMPONENT32F
#else
#include "glad/include/KHR/khrplatform.h"
#include "glad/include/glad/glad.h"
#endif
#endif
