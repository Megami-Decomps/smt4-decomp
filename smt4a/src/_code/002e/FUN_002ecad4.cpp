#include "common.h"

extern "C" {

u32 bufAllocateStorage(void);

typedef struct Object {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 handle;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 arg;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 flagA;
    /* 0x1D */ u8 flagB;
    /* 0x1E */ u8 flagC;
} Object;

/* Initialises the object with `arg` and `flagA`, clears the other fields and obtains a handle from bufAllocateStorage. */
void FUN_002ecad4(Object *object, u32 arg, u8 flagA)
{
    u32 handle;

    object->arg = arg;
    object->flagA = flagA;
    object->unk10 = 0;
    object->unk18 = 0;
    handle = bufAllocateStorage();
    object->handle = handle;
    object->flagB = 0;
    object->flagC = 0;
}

} /* extern "C" */
