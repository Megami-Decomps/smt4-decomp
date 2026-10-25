/* NON_MATCHING: readable rewrite with a per-slot roll helper compiles (218 vs 236 rows); the zone-to-slot assignment is inferred from the branch layout and retail shares the re-roll blocks differently */
#include "common.h"
#include "gamedata/GameFlags.h"

// Current map block header: kind 1 carries the (area, floor) pair of the player's position.
struct MapBlock {
    s8 kind;        // 0x00
    s8 area;        // 0x01
    s8 floor;       // 0x02
};

extern "C" {


s32 gameFlagIsSet(u32 flag);
s32 randNextInRange(s32 range);
MapBlock* gameGetMapBlock(void);

// Closes the slot's flag unless the roll hits 0 and the following flag is clear.
static void rollSlot(u32 flag, bool inZone)
{
    s32 roll = randNextInRange(0xff);
    if (inZone) roll = randNextInRange(0xff);
    if (roll != 0 || gameFlagIsSet(flag + 1) != 0) {
        gameFlagSetValue(flag, 0, 1);
    } else {
        gameFlagSetValue(flag, 1, 1);
    }
}

// Closes or opens each random encounter flag slot with a roll; the zone's own slot rolls twice.
void FUN_0026faa4(void)
{
    MapBlock* block = gameGetMapBlock();
    s8 area = 0;
    s8 floor = 0;
    for (s32 i = 0; i < 0x80; i++) randNextInRange(0xff);
    if (block->kind == 1) {
        area = block->area;
        floor = block->floor;
    }
    rollSlot(0x570, area == 0x0e && floor == 1);
    rollSlot(0x572, area == 3 && floor == 8);
    rollSlot(0x574, area == 5 && floor == 6);
    rollSlot(0x576, area == 7 && floor == 1);
    rollSlot(0x578, area == 8 && floor == 1);
    rollSlot(0x57a, area == 0x0c && floor == 1);

    s32 roll = randNextInRange(0xff);
    if (gameFlagIsSet(0x648) == 0) roll = 0xff;
    if (area == 0x0d && floor == 1) return;
    if (roll == 0 && gameFlagIsSet(0x57d) == 0) {
        gameFlagSetValue(0x57c, 1, 1);
        return;
    }
    gameFlagSetValue(0x57c, 0, 1);
}

} /* extern "C" */
