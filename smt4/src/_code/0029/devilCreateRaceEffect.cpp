/* NON_MATCHING: retail keeps the default record index in a callee-saved register across devilGetRecord, adding one saved register and four frame bytes. */
#include "common.h"

struct DevilEffectRecord {
    /* 0x00 */ u16 race;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ s32 first[8];
    /* 0x24 */ s32 second[8];
    /* 0x44 */ s32 third[5];
    /* 0x58 */ s32 fourth[3];
};

struct DevilRaceRecord {
    /* 0x00 */ u8 unk00[0x92];
    /* 0x92 */ u8 race;
};

extern "C" {
extern u32 g_devilRaceEffectCounts[4];
void dataTableGet(s32 table, s32 index);
DevilEffectRecord *dataTableGetEntries(void);
s32 dataTableGetCount(void);
DevilRaceRecord *devilGetRecord(u16 id);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
s32 randRange(u16 maximum);
u32 FUN_002bfdc4(void);
void FUN_002bfc24(s32 group, s32 effect, u32 context, s32 mode, f32 xScale, f32 yScale);

// Select a nonzero race-specific effect from one of four lists.
void devilCreateRaceEffect(u32 devilId, s32 group)
{
    dataTableGet(0x3f, 0);
    DevilEffectRecord *records = dataTableGetEntries();
    if (group < 4) {
        dataTableGet(0x3f, 0);
        s32 count = dataTableGetCount();
        DevilRaceRecord *devil = devilGetRecord(static_cast<u16>(devilId));
        if (devil != NULL) {
            s32 selected = 0;
            for (s32 i = 0; i < count; ++i) {
                if (records[i].race == devil->race) {
                    selected = i;
                    break;
                }
            }
            DevilEffectRecord record;
            __aeabi_memcpy4(&record, &records[selected], sizeof(record));
            s32 *effects = NULL;
            s32 last = -1;
            if (group == 0)
                effects = record.first;
            else if (group == 1)
                effects = record.second;
            else if (group == 2)
                effects = record.third;
            else if (group == 3)
                effects = record.fourth;
            for (u32 i = 0; i < g_devilRaceEffectCounts[group]; ++i) {
                if (effects[i] != 0)
                    last = static_cast<s8>(i);
            }
            if (last >= 0) {
                s8 index = randRange(static_cast<u16>(last));
                s32 effect = effects[index];
                u32 context = FUN_002bfdc4();
                FUN_002bfc24(1, effect, context, 4, 0.707000017f, 0.707000017f);
            }
        }
    }
}
}
