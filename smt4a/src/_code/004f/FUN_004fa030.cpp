#include "battle/BtlMainAccess.h"
#include "common.h"

namespace {

struct EffectEntryView {
    char name[0x10];
    s16 unk10; // 0x10
    u8 unk12[4]; // 0x12
};

struct EffectOwnerView {
    u8 unk00[0x1F58]; // 0x00
    EffectEntryView* unk1F58; // 0x1F58
};

struct BattleEffectView {
    u8 unk00[0x14]; // 0x00
    const char* unk14; // 0x14
};

}

extern "C" {
s32 btlScriptUnitHasFlags(void);
s32 libc_strcmp(const char* left, const char* right);
extern BattleEffectView g_btlEffect;
}

// Find the first matching effect's signed field, unless unit flags block the search.
extern "C" s32 FUN_004fa030(EffectOwnerView* owner)
{
    static_cast<void *>(btlGetMainState());
    if (btlScriptUnitHasFlags() != 0) {
        return -1;
    }

    s32 result = -1;
    if (owner->unk1F58 != 0) {
        for (s32 index = 0; index < 4; ++index) {
            EffectEntryView* entry = owner->unk1F58 + index;
            if (entry != 0 && libc_strcmp(entry->name, g_btlEffect.unk14) == 0) {
                entry = owner->unk1F58 + index;
                if (entry != 0) {
                    result = entry->unk10;
                }
                break;
            }
        }
    }
    return result;
}
