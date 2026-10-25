#include "shard/Shard0033.h"
#include "util/FUN_003799d0.h"

struct AreaTimerRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 area;
    /* 0x22 */ u8 unk22[4];
    /* 0x26 */ s16 duration;
    /* 0x28 */ s16 timerIndex;
};
struct AreaFlagRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 id;
    /* 0x24 */ s16 flag;
    /* 0x26 */ s8 area;
};
struct AreaTimerFlags {
    /* 0x000 */ u8 unk000[0xe94];
    /* 0xE94 */ s32 timers[1];
};
struct CurrentAreaState {
    /* 0x00 */ s32 area;
};
extern "C" {
Flags0C0C *gameFlagsGetBlock();
s32 dataTable2ECount();
AreaTimerRecord *dataTable2EGetEntry(s32 index);
s32 dataTableGetRecordFortyEight();
void FUN_003b9720(s32 area, s32 index);
void gameClearMapGroupFlags(s32 area);
void FUN_002ba544(s32 area);
extern CurrentAreaState g_gameState;
}

/* Related flag variants share the same persistent completion bit. */
static inline s32 canonicalAreaFlag(u32 flag)
{
    if (flag == 23 || flag == 24) return 14;
    if (flag == 25 || flag == 26) return 18;
    if (flag == 73 || flag == 77) return 65;
    if (flag == 74 || flag == 78) return 66;
    if (flag == 75 || flag == 79) return 67;
    if (flag == 76 || flag == 80) return 68;
    if (flag == 148 || flag == 158) return 141;
    if (flag == 149 || flag == 159) return 142;
    if (flag == 150 || flag == 160) return 145;
    if (flag == 166 || flag == 167) return 164;
    return flag;
}

/* Start unused timers for the current area, mark its records, and reset its slots. */
extern "C" void FUN_0037723c(s32 immediate)
{
    AreaTimerFlags *timers = reinterpret_cast<AreaTimerFlags *>(gameFlagsGetBlock());
    for (s32 i = 0; i < dataTable2ECount(); ++i) {
        const AreaTimerRecord *entry = dataTable2EGetEntry(i);
        s32 area = entry->area;
        if (area == -1) {
            return;
        }
        if (area != g_gameState.area || timers->timers[entry->timerIndex] != 0) {
            continue;
        }
        timers->timers[entry->timerIndex] = entry->duration * 1800;
        for (s32 j = 0; j < dataTableGetRecordFortyEight(); ++j) {
            const AreaFlagRecord *record = reinterpret_cast<AreaFlagRecord *>(FUN_003799d0(j));
            if (record->id != -1 && record->area == area) {
                s32 flag = record->flag;
                Flags0C0C *flags = gameFlagsGetBlock();
                flag = canonicalAreaFlag(flag);
                s32 word = flag / 32;
                s32 bit = flag % 32;
                flags->bits[word] |= 1u << bit;
            }
        }
        for (s32 j = 0; j < 21; ++j) {
            FUN_003b9720(area, j);
        }
        if (immediate != 0) {
            gameClearMapGroupFlags(area);
        } else {
            FUN_002ba544(area);
        }
    }
}
