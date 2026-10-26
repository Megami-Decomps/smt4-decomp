#include "common.h"
#include "util/MemoryHelpers.h"

extern "C" {

int asdMemFree(u32 ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 buffer;
} Obj;

void objectBufferFree(void *object)
{
    asdMemFree(static_cast<Obj *>(object)->buffer);
}

} /* extern "C" */
