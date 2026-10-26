/* NON_MATCHING: saved stat registers (retail keeps stat 0 in sl, the others in r6-r9) and the interleaved weight-sum loads differ. */
#include "gamedata/UnitStats.h"

extern "C" {
void clearWordAndByte(void *);
u32 randRange(u16);

// Zero capped-stat weights, then apply one point using the remaining weighted distribution.
u32 FUN_004cd340(StatBlock *unit, u8 *weights)
{
    s16 stats[5];
    clearWordAndByte(stats);
    s16 strength = stats[0] = static_cast<s16>(unit->summary.stats[0]);
    s16 dexterity = stats[1] = static_cast<s16>(unit->summary.stats[1]);
    s16 magic = stats[2] = static_cast<s16>(unit->summary.stats[2]);
    s16 agility = stats[3] = static_cast<s16>(unit->summary.stats[3]);
    s16 luck = stats[4] = static_cast<s16>(unit->summary.stats[4]);
    if (strength >= 999) weights[0] = 0;
    if (dexterity >= 999) weights[1] = 0;
    if (magic >= 999) weights[2] = 0;
    if (agility >= 999) weights[3] = 0;
    if (luck >= 999) weights[4] = 0;
    u32 total = weights[0] + weights[1] + weights[2] + weights[3] + weights[4];
    u32 roll = randRange(static_cast<u16>(total - 1));
    u32 cumulative = weights[0];
    u8 selected = 0;
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
                    if (weights[4] && roll < cumulative)
                        stats[4] = luck + 1;
                    else
                        selected = 5;
                }
            }
        }
    }
    for (u32 index = 0; index < 5; ++index)
        unit->summary.stats[index] = stats[index];
    return selected;
}
}
