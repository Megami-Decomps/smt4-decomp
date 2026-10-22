#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

extern BustupCutAnimA *g_bustupCutAnim;

s32 jobIsValid(u32 job);
s32 jobGetWorkId(u32 job);
void FUN_00164ce0(u32 job, u8 value);
u32 jobRecordGetTableValue(u32 job, u32 index);
void messageMainSetMode(u8 value);

/* Flags the bust-up slots whose work id is `workId` and applies their message mode; 1 if any matched. */
s32 bustupCutAnimSelectSlotsByWorkId(s32 workId)
{
    BustupCutAnimA *anim = g_bustupCutAnim;
    s32 found;
    s32 i;
    u32 index;

    if (anim == NULL) {
        return 0;
    }
    found = 0;
    for (i = 1; i < BUSTUP_CUT_SLOTS; i++) {
        if (jobIsValid(anim->slots[i]) != 0) {
            if (jobGetWorkId(anim->slots[i]) == workId) {
                FUN_00164ce0(anim->slots[i], 1);
                index = 1;
                if (anim->unk608 <= 14) {
                    index = 2;
                }
                messageMainSetMode(jobRecordGetTableValue(anim->slots[i], index));
                found = 1;
            } else {
                FUN_00164ce0(anim->slots[i], 0);
            }
        }
    }
    return found;
}

} /* extern "C" */
