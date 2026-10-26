#include "classes/Obj4206f8.h"

extern "C" void textureContentRelease(Obj4206f8 *content);

/* Releases the content's textures. */
Obj4206f8::~Obj4206f8()
{
    textureContentRelease(this);
}
