#include "common.h"

extern "C" {

int asdCecShutdown(void);
int asdMemFreeNonNull(void *object);
int asdMemFree(u32 ptr);

typedef struct Obj {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 bufferA;
    /* 0x8 */ u32 bufferB;
} Obj;

void FUN_003bbf0c(Obj *obj, u32 value)
{
    obj->unk0 = value;
    asdMemFree(obj->bufferA);
    asdMemFree(obj->bufferB);
    asdCecShutdown();
    asdMemFreeNonNull(obj);
}

} /* extern "C" */
