#include "common.h"

struct IfRecord {
    u8 active;      // 0x00
    u8 unk01[3];
    s32 state;      // 0x04
    u8 unk08[0xc];
    s32 type;       // 0x14
    u8 unk18[0x17c];
};

struct IfBlock {
    u8 unk000[0x1dc];
    IfRecord records[128]; // 0x1dc
};

extern "C" {

extern IfBlock *g_mapIf; /* 0x58103c */

// Records of the listed types that are active and in state 8 are switched to state 6.
void FUN_00378a1c(void)
{
    for (s32 i = 0; i < 128; i++) {
        IfRecord *record = &g_mapIf->records[i];
        if (record->active != 0) {
            if (record->type == 0x1d || record->type == 0x31 || record->type == 0x1e || record->type == 0x1f || record->type == 0x30 || record->type == 0x22 ||
                record->type == 0x23) {
                if (record->state == 8) {
                    record->state = 6;
                }
            }
        }
    }
}

} /* extern "C" */
