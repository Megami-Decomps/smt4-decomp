#include "common.h"

extern "C" {

void FUN_001737b8(void *object, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u32 second;
    /* 0x64 */ u32 first;
    /* 0x68 */ u8 unk68[0x1D];
    /* 0x85 */ u8 started;
    /* 0x86 */ u8 flag;
} Holder;

/* Starts the object once: runs FUN_001737b8 on `first` and records both values. */
void FUN_0015e158(Holder *object, u32 first, u32 second)
{
    if (object->started == 0) {
        FUN_001737b8(object, first);
        object->started = 1;
        object->second = second;
        object->flag = 0;
        object->first = first;
    }
}

} /* extern "C" */
