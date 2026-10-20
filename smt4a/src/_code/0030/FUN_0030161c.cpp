#include "common.h"

extern "C" {

void widthToBucketSize(s32 value);
s32 FUN_00124034(void);
s32 FUN_0030eeb0(s32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 value;
} Holder;

/* Passes FUN_00124034's result through FUN_0030eeb0 and, when the word at 0x18 is set, on to widthToBucketSize. */
void FUN_0030161c(Holder *object)
{
    s32 result;

    result = FUN_00124034();
    if (object->value != 0) {
        result = FUN_0030eeb0(result);
        widthToBucketSize(result);
        return;
    }
    FUN_0030eeb0(result);
}

} /* extern "C" */
