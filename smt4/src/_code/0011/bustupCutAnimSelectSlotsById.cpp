#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

extern BustupCutAnim *g_bustupCutAnim;

s32 jobIsValid(u32 job);
s32 jobWorkGetFirstWord(u32 job);
void FUN_002b7160(u32 job, s32 on);
s32 jobRecordGetTableValue(u32 job, u32 index);
void FUN_002bff38(u8 value);

/* Marks the cut slots whose job carries `id` (applying its table value as the message display mode) and clears the rest; returns 1 when one matched. */
u32 bustupCutAnimSelectSlotsById(s32 id)
{
    BustupCutAnim *anim = g_bustupCutAnim;
    u32 found;
    s32 i;

    if (anim == NULL) {
        return 0;
    }
    found = 0;
    for (i = 1; i < BUSTUP_CUT_SLOTS; i++) {
        if (jobIsValid(anim->slots[i]) != 0) {
            if (jobWorkGetFirstWord(anim->slots[i]) == id) {
                u32 column;

                FUN_002b7160(anim->slots[i], 1);
                column = 1;
                if (anim->unk604 <= 14) {
                    column = 2;
                }
                FUN_002bff38(jobRecordGetTableValue(anim->slots[i], column));
                found = 1;
            } else {
                FUN_002b7160(anim->slots[i], 0);
            }
        }
    }
    return found;
}

} /* extern "C" */
