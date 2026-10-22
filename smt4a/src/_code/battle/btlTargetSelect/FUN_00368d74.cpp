/* NON_MATCHING: Retail cmp r0, #5 differs from recovered cmp r0, #5. */
#include "common.h"

struct TargetWordsView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

struct TargetValueView {
    TargetWordsView unk00; // 0x00
    u32 unk08; // 0x08
};

struct TargetEntryView {
    TargetWordsView unk00; // 0x00
    u8 unk08; // 0x08
    u8 unk09; // 0x09
    u8 unk0A; // 0x0A
    u8 unk0B; // 0x0B
    u8 unk0C; // 0x0C
    u8 unk0D; // 0x0D
    u8 unk0E; // 0x0E
    u8 unk0F; // 0x0F
};

struct TargetEntryStorageView {
    u32 unk00; // 0x00
    TargetEntryView entries[5]; // 0x04
};

struct TargetSelectView {
    u32 unk00; // 0x00
    TargetEntryStorageView* unk04; // 0x04
};

extern "C" {
extern TargetSelectView* g_btlTargetSelect;
u8 FUN_0026264c(u32 value);
u32 obj80Select(u32 index);
s32 FUN_002a1850(TargetValueView* value, s32 mode, u32 context);

// Populate a target entry and copy the leading record of its transformed value.
void FUN_00368d74(s32 entryIndex, const TargetValueView* source, u32 target,
                  u8 field09, u8 field0A, u8 field0B, u8 field0C,
                  u8 field0D, u8 field0E)
{
    if (entryIndex < 5) {
        TargetEntryView* entry = &g_btlTargetSelect->unk04->entries[entryIndex];
        entry->unk0F = 1;
        entry->unk08 = FUN_0026264c(target);
        entry->unk09 = field09;
        entry->unk0A = field0A;
        entry->unk0B = field0B;
        entry->unk0C = field0C;
        entry->unk0D = field0D;
        entry->unk0E = field0E;

        u32 context = obj80Select(0);
        TargetValueView value = *source;
        FUN_002a1850(&value, 0, context);
        entry->unk00 = value.unk00;
    }
}
}
