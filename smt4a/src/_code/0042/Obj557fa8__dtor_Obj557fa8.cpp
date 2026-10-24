#include "classes/Obj557fa8.h"

extern "C" void handleObjectRelease(void *handle);

/* Releases the handle object. */
Obj557fa8::~Obj557fa8()
{
    handleObjectRelease(handle);
}
