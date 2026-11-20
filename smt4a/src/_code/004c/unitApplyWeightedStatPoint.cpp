/* NON_MATCHING: all 94 instructions match retail (including interleaved weight sum and u8 return); only register allocation swaps strength/dexterity (r6/sl) and zero/total (r1/r2). */
#include "gamedata/UnitStats.h"
#include "util/Random.h"

extern "C" {
void clearWordAndByte(void *buffer);

/* Zero capped-stat weights, then apply one point using the remaining weighted distribution. */
u8 unitApplyWeightedStatPoint(StatBlock *unit, u8 *weights)
{
    s16 stats[5];
    clearWordAndByte(stats);
    s16 strength = stats[0] = (s16)unit->summary.stats[0];
    s16 dexterity = stats[1] = (s16)unit->summary.stats[1];
    s16 magic = stats[2] = (s16)unit->summary.stats[2];
    s16 agility = stats[3] = (s16)unit->summary.stats[3];
    s16 luck = stats[4] = (s16)unit->summary.stats[4];
    u32 total = 0;
    if (strength >= 999) {
        weights[0] = 0;
    }
    total += weights[0];
    if (dexterity >= 999) {
        weights[1] = 0;
    }
    total += weights[1];
    if (magic >= 999) {
        weights[2] = 0;
    }
    total += weights[2];
    if (agility >= 999) {
        weights[3] = 0;
    }
    total += weights[3];
    if (luck >= 999) {
        weights[4] = 0;
    }
    total += weights[4];
    u32 roll = randRange((u16)(total - 1));
    u32 cumulative = weights[0];
    s32 selected = 0;
    if (weights[0] && roll < cumulative) {
        stats[0] = strength + 1;
    } else {
        selected = 1;
        cumulative += weights[1];
        if (weights[1] && roll < cumulative) {
            stats[1] = dexterity + 1;
        } else {
            selected = 2;
            cumulative += weights[2];
            if (weights[2] && roll < cumulative) {
                stats[2] = magic + 1;
            } else {
                selected = 3;
                cumulative += weights[3];
                if (weights[3] && roll < cumulative) {
                    stats[3] = agility + 1;
                } else {
                    selected = 4;
                    cumulative += weights[4];
                    if (weights[4] && roll < cumulative) {
                        stats[4] = luck + 1;
                    } else {
                        selected = 5;
                    }
                }
            }
        }
    }
    for (u32 index = 0; index < 5; ++index) {
        unit->summary.stats[index] = stats[index];
    }
    return (u8)selected;
}

} /* extern "C" */
