/* NON_MATCHING: readable rewrite compiles (212 vs 175 rows); retail unrolls the grouping loop by two and keeps the key comparisons paired, which this natural loop does not reproduce */
#include "battle/ActorCardAnimations.h"

extern "C" {

void qsort(void* base, u32 count, s32 size, s32 (*compare)(const void*, const void*));
s32 FUN_001d1d34(const void* a, const void* b);

// Sorts the rows, splits them into two groups where the key rises and assigns each row
// the icon ids that centre it in its group.
void FUN_001990d4(ActorCardAnimations* screen)
{
    qsort(screen->targets, screen->targetCount, sizeof(ActorCardTarget), FUN_001d1d34);
    s32 groupCount[2] = { 0, 0 };
    s32 count = screen->targetCount;
    s32 group = 0;
    for (s32 i = 0; i < count; i++) {
        if (i > 0 && screen->targets[i - 1].sortKey < screen->targets[i].sortKey && group < 1) group++;
        groupCount[group]++;
    }

    if (screen->targetLayoutChosen == 0) {
        if (groupCount[0] < 1) {
            if (groupCount[1] >= 1) {
                screen->targetSingleGroup = 1;
                screen->targetLayoutChosen = 1;
            }
        } else {
            screen->targetSingleGroup = (groupCount[1] >= 1) ? 0 : 1;
            screen->targetLayoutChosen = 1;
        }
    }

    for (s32 i = 0; i < count; i++) {
        ActorCardTarget* row = &screen->targets[i];
        if (screen->targetSingleGroup != 0) {
            u32 size = (groupCount[0] <= i) ? groupCount[1] : groupCount[0];
            if ((size & 1) != 0) {
                s32 base = i + (5 - (s32)size) / 2;
                row->touchImage = base + 0x1a1;
                row->markImage = base + 0x1aa;
            } else {
                s32 base = i + (4 - (s32)size) / 2;
                row->touchImage = base + 0x1a6;
                row->markImage = base + 0x1af;
            }
        } else if (i < groupCount[0]) {
            if ((groupCount[0] & 1) != 0) {
                s32 base = i + (5 - groupCount[0]) / 2;
                row->touchImage = base + 0x14a;
                row->markImage = base + 0x154;
            } else {
                s32 base = i + (4 - groupCount[0]) / 2;
                row->touchImage = base + 0x165;
                row->markImage = base + 0x16d;
            }
        } else if ((groupCount[1] & 1) != 0) {
            s32 base = (i - groupCount[0]) + (5 - groupCount[1]) / 2;
            row->touchImage = base + 0x13b;
            row->markImage = base + 0x145;
        } else {
            s32 base = (i - groupCount[0]) + (4 - groupCount[1]) / 2;
            row->touchImage = base + 0x159;
            row->markImage = base + 0x161;
        }
    }
}

} /* extern "C" */
