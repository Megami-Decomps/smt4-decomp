#include "classes/Obj4209cc.h"


/* The class's operator delete: the object came from the default heap. */
inline void Obj4209cc::operator delete(void *block)
{
    asdMemFreeNonNull(block);
}

/* Destroys the part in the slot, if any, and clears the slot. */
static void releasePart(Obj4209ccPart **slot)
{
    if (*slot != NULL) {
        (*slot)->destroy();
        *slot = NULL;
    }
}

/* Destroys and releases each part (two rows of three), then the handle and the block, and frees
 * the object. */
inline Obj4209cc::~Obj4209cc()
{
    unk04 = 0;
    for (int i = 0; i < 3; i++) {
        releasePart(&rowA[i]);
        releasePart(&rowB[i]);
        rowA[i] = NULL;
    }
    if (handle != 0) {
        asdMdlManagerDestroy(reinterpret_cast<AsdMdlObject *>(handle));
        handle = 0;
    }
    if (buffer != NULL) {
        asdMemFree(buffer);
        buffer = NULL;
    }
}

Obj4209cc::Obj4209cc()
{
    handle = 0;
    buffer = NULL;
    unk28 = 0;
    unk2C = 0;
    scale = 1.0f;
    for (int i = 0; i < 3; i++) {
        unk34[i] = 0.0f;
    }
    unk40 = 7;
    for (int i = 0; i < 3; i++) {
        rowA[i] = NULL;
        rowB[i] = NULL;
    }
}
