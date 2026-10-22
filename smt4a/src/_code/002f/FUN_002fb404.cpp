#include "common.h"

extern "C" {

void FUN_0020ad6c(void *object, s32 a, s32 b);
void statusIconSetKind(void *object, s32 value);

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x387C];
    /* 0x387C */ s32 state;
} Holder;

/* When the state word is set, runs FUN_0020ad6c(object, 0x27, 1) and statusIconSetKind(object, 9). */
void FUN_002fb404(Holder *object)
{
    if (object->state != 0) {
        FUN_0020ad6c(object, 0x27, 1);
        statusIconSetKind(object, 9);
        return;
    }
}

} /* extern "C" */
