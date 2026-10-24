/* NON_MATCHING: readable rewrite compiles (212 vs 155 rows); retail unrolls the grouping loop by two and keeps the key comparisons paired, which this natural loop does not reproduce */
#include "common.h"

// One sorted entry of the list (0x2c bytes).
struct RankRow {
    u8 unk00[0x10];
    f32 key;            // 0x10: sort key, descending
    u8 unk14[0x0c];
    s32 firstIcon;      // 0x20
    s32 secondIcon;     // 0x24
    u8 unk28[4];
};

// Two-column ranking screen: only the members this layout pass uses.
struct RankScreen {
    u8 unk0000[0x5758];
    s32 count;              // 0x5758
    u8 unk575c[4];
    RankRow rows[1];        // 0x5760
};

extern "C" {

void FUN_002b7bca(void* base, u32 count, s32 size, s32 (*compare)(const void*, const void*));
s32 FUN_001d1d34(const void* a, const void* b);

// Sorts the rows, splits them into two groups where the key rises and assigns each row
// the icon ids that centre it in its group.
void FUN_001990d4(RankScreen* screen)
{
    FUN_002b7bca(screen->rows, screen->count, 0x2c, FUN_001d1d34);
    s32 groupCount[2] = { 0, 0 };
    s32 count = screen->count;
    s32 group = 0;
    for (s32 i = 0; i < count; i++) {
        if (i > 0 && screen->rows[i - 1].key < screen->rows[i].key && group < 1) group++;
        groupCount[group]++;
    }

    u8* flags = reinterpret_cast<u8*>(screen);
    if (flags[0x575e] == 0) {
        if (groupCount[0] < 1) {
            if (groupCount[1] >= 1) {
                flags[0x575f] = 1;
                flags[0x575e] = 1;
            }
        } else {
            flags[0x575f] = (groupCount[1] >= 1) ? 0 : 1;
            flags[0x575e] = 1;
        }
    }

    for (s32 i = 0; i < count; i++) {
        RankRow* row = &screen->rows[i];
        if (flags[0x575f] != 0) {
            u32 size = (groupCount[0] <= i) ? groupCount[1] : groupCount[0];
            if ((size & 1) != 0) {
                s32 base = i + (5 - (s32)size) / 2;
                row->firstIcon = base + 0x1a1;
                row->secondIcon = base + 0x1aa;
            } else {
                s32 base = i + (4 - (s32)size) / 2;
                row->firstIcon = base + 0x1a6;
                row->secondIcon = base + 0x1af;
            }
        } else if (i < groupCount[0]) {
            if ((groupCount[0] & 1) != 0) {
                s32 base = i + (5 - groupCount[0]) / 2;
                row->firstIcon = base + 0x14a;
                row->secondIcon = base + 0x154;
            } else {
                s32 base = i + (4 - groupCount[0]) / 2;
                row->firstIcon = base + 0x165;
                row->secondIcon = base + 0x16d;
            }
        } else if ((groupCount[1] & 1) != 0) {
            s32 base = (i - groupCount[0]) + (5 - groupCount[1]) / 2;
            row->firstIcon = base + 0x13b;
            row->secondIcon = base + 0x145;
        } else {
            s32 base = (i - groupCount[0]) + (4 - groupCount[1]) / 2;
            row->firstIcon = base + 0x159;
            row->secondIcon = base + 0x161;
        }
    }
}

} /* extern "C" */
