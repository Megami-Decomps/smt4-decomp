#include "common.h"
#include "code/Code001a_Smt4a.h"

extern "C" {

void FUN_001af4dc(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 member18[0x3C];
    /* 0x54 */ s32 count;
} Holder;

/* Runs FUN_001af4dc on the member at 0x18 and decrements `count`. */
void FUN_001a1244(Holder *object)
{
    FUN_001af4dc(object->member18);
    object->count = object->count - 1;
}

} /* extern "C" */
