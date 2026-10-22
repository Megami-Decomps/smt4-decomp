/* NON_MATCHING: indexed record addressing and independent state writes replace retail's countdown and paired store. */
#include "map/mapIf.h"

struct MapIfResetState {
    /* 0x00 */ u8 unk00[0x17];
    /* 0x17 */ u8 unk17;
};
struct MapIfResetRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
};

extern "C" {
extern MapIfState *g_mapIf;

void FUN_0021dfbc()
{
    MapIfState *state = g_mapIf;
    ((MapIfResetState *)state)->unk17 = 0;
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *record = &state->records[index];
        if (record->active && record->display.category != 0x1d &&
            record->display.category != 0x26 && record->display.category != 0x1e &&
            record->display.category != 0x1f && record->display.category != 0x25) {
            if (record->state == 8 || record->state == 10 ||
                record->state == 12 || record->state == 14 || record->state == 16) {
                record->state = 6;
                ((MapIfResetRecord *)record)->unk08 = 1;
            }
        }
    }
}
}
