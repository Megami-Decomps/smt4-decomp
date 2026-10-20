#include "common.h"

extern "C" {

void linkHolderSetFlag(void);
void linkHolderClearFlag(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 value;
} Holder;

/* Runs linkHolderClearFlag (when `flag` is set) or linkHolderSetFlag; does nothing when the word at 0x1C is 0. */
void FUN_00281720(Holder *object, s32 flag)
{
    if (object->value == 0) {
        return;
    }
    if (flag != 0) {
        linkHolderClearFlag();
        return;
    }
    linkHolderSetFlag();
}

} /* extern "C" */
