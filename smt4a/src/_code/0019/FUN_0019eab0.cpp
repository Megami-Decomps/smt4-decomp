/* NON_MATCHING: compiler combines the range pointer loads into LDRD and predicates the empty-range check. */
#include "common.h"

extern "C" {

struct ResourceSlots {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 flags;
    /* 0x18 */ void **entries;
    /* 0x1C */ void **end;
};
void FUN_0019eab0(void *object, ResourceSlots *slots)
{
    if ((slots->flags & 1) == 0) {
        return;
    }
    for (void **entry = slots->entries; entry != slots->end; ++entry) {
        if (*entry != NULL && *entry == object) {
            *entry = NULL;
            return;
        }
    }
}

} /* extern "C" */
