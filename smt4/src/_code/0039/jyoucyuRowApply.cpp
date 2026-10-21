/* NON_MATCHING: register allocation only: retail starts the row index with moveq r1,#0 (the build reuses r0, known to be 0 there) */
#include "common.h"

extern "C" {

typedef struct Row00394750 {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 value;
    /* 0x08 */ u8 unk08[8];
} Row00394750;

s32 jyoucyuGetTableEntry(s32 index);
void asdSoundSelectSlotB(s32 value);
void asdSndEnsureCurrentSlotData(u32 value);

extern Row00394750 DAT_0043988c[3]; /* 0x43988c */

/* Looks id up in the three-row table; when the row has a value and entry 1 is clear, passes the value on. */
void jyoucyuRowApply(u32 id)
{
    s32 i;

    if (jyoucyuGetTableEntry(1) == 0) {
        for (i = 0; i < 3; i++) {
            Row00394750 *row = &DAT_0043988c[i];

            if (row->id == id) {
                if (row != NULL) {
                    id = row->value;
                }
                if (row == NULL || id == 0) {
                    return;
                }
                if (jyoucyuGetTableEntry(1) != 0) {
                    return;
                }
                asdSoundSelectSlotB(2);
                asdSndEnsureCurrentSlotData(id);
                return;
            }
        }
    }
}

} /* extern "C" */
