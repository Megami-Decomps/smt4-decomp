#include "classes/Obj557b08.h"

extern "C" void gfxResourceTableReleaseTexturesAndBuffers(void *table);

/* Releases the resource table's textures and buffers. */
Obj557b08::~Obj557b08()
{
    gfxResourceTableReleaseTexturesAndBuffers(this);
}
