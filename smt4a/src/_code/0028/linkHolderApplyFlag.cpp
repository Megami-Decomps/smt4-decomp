#include "common.h"
#include <stddef.h>

extern "C" {

void linkHolderSetFlag(struct LinkHolder *holder);
void linkHolderClearFlag(struct LinkHolder *holder);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ LinkHolder *value;
} Holder;
typedef char HolderLinkPointerLayoutCheck[
    offsetof(Holder, value) == 0x1C && sizeof(Holder) == 0x20 ? 1 : -1];

/* Runs linkHolderClearFlag (when `flag` is set) or linkHolderSetFlag; does nothing when the word at 0x1C is 0. */
void linkHolderApplyFlag(Holder *object, s32 flag)
{
    if (object->value == 0) {
        return;
    }
    if (flag != 0) {
        linkHolderClearFlag(object->value);
        return;
    }
    linkHolderSetFlag(object->value);
}

} /* extern "C" */
