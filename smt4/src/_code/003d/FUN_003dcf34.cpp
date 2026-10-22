/* NON_MATCHING: Retail ldr r1, [r5] differs from recovered ldr r0, [r5]. */
#include "common.h"

struct EffectNameEntryView {
    char name[0x10];
    s16 unk10;             // 0x10
    u8 unk12[0x04];        // 0x12
};

struct EffectNameTableView {
    u8 unk00[0x1cfc];      // 0x0000
    EffectNameEntryView* entries; // 0x1cfc
};

struct BattleEffectView {
    u8 unk00[0x14];        // 0x00
    const char* name;      // 0x14
};

extern "C" {
s32 btlGetMainState(void);
s32 FUN_00293230(s32 mainState);
s32 libc_strcmp(const char* left, const char* right);
extern BattleEffectView g_btlEffect;
}

// Find the current battle effect's name among four entries and return its signed value.
extern "C" s32 FUN_003dcf34(EffectNameTableView* table)
{
    if (FUN_00293230(btlGetMainState()) != 0) {
        return -1;
    }

    s32 result = -1;
    if (table->entries != 0) {
        for (s32 index = 0; index < 4; ++index) {
            EffectNameEntryView* entry = table->entries + index;
            if (entry != 0 && libc_strcmp(entry->name, g_btlEffect.name) == 0) {
                entry = table->entries + index;
                if (entry != 0) {
                    result = entry->unk10;
                }
                break;
            }
        }
    }
    return result;
}
