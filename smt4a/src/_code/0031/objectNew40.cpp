#include "shard/Shard0031.h"

extern "C" {

extern void *_Znwj(u32 size);
extern s32 onlineSocketObjectConstruct(void *object);

/* Allocates a 0x40-byte object and initializes it. */
void objectNew40(void)
{
    void *object = _Znwj(0x40);

    if (object != NULL) {
        onlineSocketObjectConstruct(object);
    }
}

} /* extern "C" */
