#include "common.h"

namespace {

struct BtlMainStateView;

struct EffectEntryView {
    char name[0x10];
    s16 unk10;                  // 0x10
    u8 unk12[0x04];             // 0x12
};

struct EffectTableView {
    u8 unk00[0x58];             // 0x00
    EffectEntryView entries[4]; // 0x58
};

struct EffectOwnerView {
    u8 unk00[0x1f54];           // 0x00
    EffectTableView *unk1F54;   // 0x1f54
};

struct BtlEffectView {
    u8 unk00[0x0c];             // 0x00
    const char *unk0C;          // 0x0c
};

}

extern "C" {
BtlMainStateView *btlGetMainState(void);
s32 btlScriptUnitHasFlags(BtlMainStateView *state);
u32 wstrlen(const char *text);
s32 libc_strncmp(const char *left, const char *right, u32 length);
extern BtlEffectView g_btlEffect;

// Find the first matching effect-name prefix and return its signed entry value.
s32 btlFindEffectValueByNamePrefix(EffectOwnerView *owner)
{
    if (owner->unk1F54 != 0) {
        if (btlScriptUnitHasFlags(btlGetMainState()) == 0) {
            for (s32 index = 0; index < 4; ++index) {
                EffectEntryView *entry = &owner->unk1F54->entries[index];
                if (entry != 0) {
                    u32 length = wstrlen(g_btlEffect.unk0C);
                    if (libc_strncmp(entry->name, g_btlEffect.unk0C, length) == 0) {
                        return entry->unk10;
                    }
                }
            }
        }
    }
    return -1;
}
}
