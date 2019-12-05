#ifdef __EMSCRIPTEN__
#include <GL/gl.h>
typedef void* (* GLADloadproc)(const char *name);
inline int gladLoadGLES2Loader(GLADloadproc proc)
{
	return 1;
}
#define GLAD_GL_VERSION_4_3 0
#define GLAD_GL_VERSION_3_3 0
#define GLAD_GL_NV_framebuffer_multisample_coverage 0
#define GLAD_GL_ARB_depth_buffer_float 0
#else
#include "glad/include/KHR/khrplatform.h"
#include "glad/include/glad/glad.h"
#endif
