/* NON_MATCHING: register allocation: retail uses r4 for the loaded id in the unrolled search loop; armcc here reuses ip. */
#include "common.h"

struct IdList {
    /* 0x0000 */ u8 unk0000[0x4bc4];
    /* 0x4bc4 */ u32 ids[42];
};

extern "C" {

/* Adds the id to the list unless it is already in it (into the first empty slot). */
void FUN_003ec9c0(IdList *list, u32 id)
{
    s32 i;
    for (i = 0; i < 42; i++) {
        if (list->ids[i] == id) {
            return;
        }
    }
    for (i = 0; i < 42; i++) {
        if (list->ids[i] == 0) {
            list->ids[i] = id;
            return;
        }
    }
}

} /* extern "C" */
