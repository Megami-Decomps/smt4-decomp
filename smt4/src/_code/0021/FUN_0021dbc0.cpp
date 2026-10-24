/* NON_MATCHING: register assignment (retail keeps map/area in r7/r9 and the -1 spawn mode in sl; built uses r8/sl/r7) and the stack-argument store order (187 vs 186 rows); the placement logic is the same. */
#include "common.h"

extern "C" {

/* A map effect placement (only the fields read here). */
typedef struct MapEffectEntry {
    /* 0x00 */ s8 map;                  /* -1: unused */
    /* 0x01 */ s8 area;
    /* 0x02 */ s16 horizontal;
    /* 0x04 */ s16 vertical;
    /* 0x06 */ s16 z;
    /* 0x08 */ s16 y;
    /* 0x0A */ s16 x;
    /* 0x0C */ u8 unk0c[4];
    /* 0x10 */ s16 flag;                /* a story flag that changes the spawn chance */
    /* 0x12 */ s8 chanceUnflagged;
    /* 0x13 */ s8 chance;
} MapEffectEntry;

/* The map block's effect list (only the fields used here). */
typedef struct MapEffectBlock {
    /* 0x000 */ u8 unk000[0xDE3];
    /* 0xDE3 */ s8 count;
    /* 0xDE4 */ u8 kind[8];
    /* 0xDEC */ s8 entry[8];
    /* 0xDF4 */ u16 flag[8];
    /* 0xE04 */ u16 token[8];
} MapEffectBlock;

MapEffectBlock *gameGetMapBlock(void);
s32 FUN_00323538(void);
MapEffectEntry *dataTable29GetEntryWithAoc(s32 index);
s32 gameFlagIsSet(s32 flag);
s32 randNextInRange(u32 limit);
void FUN_0024f24c(u32 resource, u32 kind, u32 owner, u32 appearance, u32 spawnGroup, u32 spawnMode, u8 color0, u8 color1,
                  u8 color2, u8 color3, u8 color4, u8 color5, u8 channel, u8 mode, u8 flags, u32 scaleX, u32 scaleY,
                  u32 scaleZ, u32 spawnArgument, f32 x, f32 y, f32 z, f32 vertical, f32 horizontal, f32 heading);

/* Starts the map effect for placement `entry` (its index is also the effect's scale token). */
static __inline void spawnEntryEffect(MapEffectEntry *entry, s32 index)
{
    FUN_0024f24c(5, 0, (u32) "POLY", 0x3A, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, index, index + 0x1300, 0, 0, entry->x,
                 entry->y, entry->z, entry->vertical, entry->horizontal, 200.0f);
}

/* With `replay` set, restarts the effects already registered in the map block; otherwise rolls
 * every placement of the current map/area, spawning those that succeed and registering them. */
void FUN_0021dbc0(s32 map, s32 area, s32 replay)
{
    MapEffectBlock *block = gameGetMapBlock();

    if (replay != 0) {
        for (s32 i = 0; i < block->count; i++) {
            if (block->kind[i] == 2) {
                s32 index = block->entry[i];

                spawnEntryEffect(dataTable29GetEntryWithAoc(index), index);
            }
        }
        return;
    }
    for (s32 i = 0; i < FUN_00323538(); i++) {
        MapEffectEntry *entry = dataTable29GetEntryWithAoc(i);
        u16 flag = 0;

        if (entry->map == -1 || entry->map != map || entry->area != area) {
            continue;
        }
        if (entry->flag != 0) {
            if (gameFlagIsSet(entry->flag) != 0) {
                if (randNextInRange(99) > entry->chance) {
                    continue;
                }
            } else {
                if (randNextInRange(99) > entry->chanceUnflagged) {
                    continue;
                }
                flag = entry->flag;
            }
        } else if (randNextInRange(99) > entry->chance) {
            continue;
        }
        spawnEntryEffect(entry, i);
        block->kind[block->count] = 2;
        block->entry[block->count] = i;
        block->flag[block->count] = flag;
        block->token[block->count] = i + 0x1300;
        block->count++;
    }
}

}
