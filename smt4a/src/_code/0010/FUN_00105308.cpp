#include "common.h"

extern "C" {

void FUN_002ea43c(void *object);
void FUN_002ea446(void *object);

typedef struct CountedObject {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s32 count;
} CountedObject;

/* Runs FUN_002ea446 when `count` is positive and FUN_002ea43c when it is not. */
void FUN_00105308(CountedObject *object)
{
    if (object->count > 0) {
        FUN_002ea446(object);
        return;
    }
    FUN_002ea43c(object);
}

} /* extern "C" */
