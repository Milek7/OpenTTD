add_files(
    include/KHR/khrplatform.h
    src/glad.c
)

add_files(
    wglext.h
    CONDITION WIN32
)
