#include "common.h"

extern "C" {

struct ResourceSlots {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 flags;
    /* 0x18 */ void **entries;
    /* 0x1C */ void **end;
};
void resourceSlotsClearEntry(void *object, ResourceSlots *slots)
{
    if ((slots->flags & 1) == 0) {
        return;
    }
    void **entry = slots->entries;
    while (entry != slots->end) {
        if (*entry != NULL && *entry == object) {
            *entry = NULL;
            return;
        }
        entry++;
    }
}

} /* extern "C" */
