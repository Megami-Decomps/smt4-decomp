/* NON_MATCHING: native deleting destructor is the right size; owner/part/slot use r8/r6/r7 instead of retail r7/r8/r6. */
#include "classes/Obj4209cc.h"


/* Destroys the part and hands its memory back to the allocator it came from. */
static void releasePart(Obj4209ccPart **slot)
{
    Obj4209ccPart *part = *slot;

    if (part != NULL) {
        part->~Obj4209ccPart();
        part->allocator->release(part);
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
        asdMdlManagerDestroy(handle);
        handle = 0;
    }
    if (buffer != NULL) {
        asdMemFree(buffer);
        buffer = NULL;
    }
}

Obj4209cc::Obj4209cc()
{
    unk04 = 0;
    handle = 0;
    buffer = NULL;
    unk28 = 0;
    unk2C = 0;
    scale = 1.0f;
    unk34[0] = 0.0f;
    unk34[1] = 0.0f;
    unk34[2] = 0.0f;
    unk40 = 7;
    for (int i = 0; i < 3; i++) {
        rowA[i] = NULL;
        rowB[i] = NULL;
    }
}
