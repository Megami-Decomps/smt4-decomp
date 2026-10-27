/* NON_MATCHING: retail reaches the world and demon-range pointers through one base symbol (+4/+0xc), does not unroll the 24-slot init loop and keeps its world pointer in r4/r5 around the demon-table rebuild; this version unrolls the loop and keeps the world in r5, so the instruction count differs. The stores, calls and loop bounds are the same. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

namespace {
/* The game world block: only the fields this reset writes are named by their offset. */
struct GameWorld {
    u8 pad00000[0x9194];
    u8 unk09194;
    u8 unk09195;
    u8 unk09196;
    u8 pad09197[0x6d5];
    u32 unk0986c;
    u32 unk09870;
    u8 pad09874[0x104c];
    u8 unk0a8c0;
    u8 unk0a8c1;
    u8 unk0a8c2;
    u8 unk0a8c3;
    f32 unk0a8c4;
    f32 unk0a8c8;
    f32 unk0a8cc;
    f32 unk0a8d0;
    f32 unk0a8d4;
    u32 unk0a8d8;
    u8 unk0a8dc;
    u8 unk0a8dd;
    u16 unk0a8de;
    u16 unk0a8e0;
    u16 unk0a8e2;
    u8 pad0a8e4[0x16];
    u8 unk0a8fa;
    u8 unk0a8fb;
    u8 pad0a8fc[0x708];
    u32 unk0b004;
    u32 unk0b008;
    u32 unk0b00c;
    u32 unk0b010;
    u32 unk0b014;
    u32 unk0b018;
    u32 unk0b01c;
    u32 unk0b020;
    u32 unk0b024;
    u32 unk0b028;
    u32 unk0b02c;
    u32 unk0b030;
    u32 unk0b034;
    u32 unk0b038;
    u32 unk0b03c;
    u32 unk0b040;
    u32 unk0b044;
    u32 unk0b048;
    u32 unk0b04c;
    u8 pad0b050[0x2];
    u8 unk0b052;
    u8 pad0b053[0x445];
    u32 unk0b498;
    u32 unk0b49c;
    u32 unk0b4a0;
    u32 unk0b4a4;
    u32 unk0b4a8;
    u32 unk0b4ac;
    u32 unk0b4b0;
    u32 unk0b4b4;
    u32 unk0b4b8;
    u32 unk0b4bc;
    u32 unk0b4c0;
    u32 unk0b4c4;
    u32 unk0b4c8;
    u32 unk0b4cc;
    u32 unk0b4d0;
    u32 unk0b4d4;
    u8 pad0b4d8[0x100];
    u32 unk0b5d8;
    u32 unk0b5dc;
    u32 unk0b5e0;
    u32 unk0b5e4;
    u32 unk0b5e8;
    u32 unk0b5ec;
    u32 unk0b5f0;
    u32 unk0b5f4;
    u32 unk0b5f8;
    u32 unk0b5fc;
    u32 unk0b600;
    u32 unk0b604;
    u32 unk0b608;
    u32 unk0b60c;
    u32 unk0b610;
    u32 unk0b614;
    u8 pad0b618[0x2];
    u8 unk0b61a;
    u8 unk0b61b;
    u32 unk0b61c;
    u32 unk0b620;
    u32 unk0b624;
    u32 unk0b628;
    u32 unk0b62c;
    u32 unk0b630;
    u32 unk0b634;
    u32 unk0b638;
    u8 pad0b63c[0x18];
    u32 unk0b654;
    u32 unk0b658;
    u32 unk0b65c;
    u32 unk0b660;
    u32 unk0b664;
    u32 unk0b668;
    u32 unk0b66c;
    u8 pad0b670[0x10];
    u32 unk0b680;
    f32 unk0b684;
    u8 unk0b688;
    u8 pad0b689[0x17];
    u8 unk0b6a0;
    u8 unk0b6a1;
    u8 unk0b6a2;
    u8 unk0b6a3;
    u8 pad0b6a4[0x70];
    u32 unk0b714;
};

/* The id range the summonable demons span. */
struct DemonRange {
    u32 unk00[2];
    u16 first;
    u16 last;
};

/* A per-demon row of the world (0x34 bytes, read as halfwords). */
struct DemonRow {
    u16 v[26];
};
}

extern "C" {
/* The pointer table of the game's data blocks (the unused slots are other blocks). */
struct GameDataBlocks {
    /* 0x00 */ void *unk00;
    /* 0x04 */ GameWorld *world;
    /* 0x08 */ void *unk08;
    /* 0x0c */ DemonRange *demonRange;
};
extern GameDataBlocks g_gameDataBlocks;
void rt_memclr(void *data, u32 size);
const u16 *devilGetRecord(u32 id);   /* a demon record, read as halfwords */
void FUN_0033f81c(void);
void FUN_002c4924(void);
void inventoryResetSavedTableEntries(void);
void FUN_003c25f0(void);
void FUN_002cf3b4(void);

/* Resets the whole game world for a new game: clears the main blocks, restores the party slot defaults, rebuilds
   the per-demon table from the demon records and zeroes the runtime state, then resets the dependent systems. */
void FUN_001a1110(void)
{
    GameWorld *world = g_gameDataBlocks.world;
    memClear(reinterpret_cast<u8 *>(world) + 0x88, 0x24d28);
    g_gameDataBlocks.demonRange->unk00[0] = 0;
    g_gameDataBlocks.demonRange->unk00[1] = 0;
    g_gameDataBlocks.demonRange->unk00[2] = 0;
    for (s32 i = 0; i < 0x18; i++) {
        reinterpret_cast<u8 *>(world)[0x8c + i + 0x90f0] = 0xff;
        reinterpret_cast<s8 *>(world)[0x8c + i * 0x604 + 0xda] = (s8)i;
    }
    world->unk09194 = 0xff;
    world->unk09195 = 0xff;
    world->unk09196 = 0xff;
    world->unk0986c = 0;
    world->unk09870 = 0;
    rt_memclr(reinterpret_cast<u8 *>(world) + 0x981e, 0x4c);
    g_gameDataBlocks.demonRange->first = 0;
    g_gameDataBlocks.demonRange->last = 0;
    DemonRow *row = reinterpret_cast<DemonRow *>(reinterpret_cast<u8 *>(world) + 0xc22c);
    for (s32 i = 0; i < 0x500; i++) {
        const u16 *record = devilGetRecord((u16)(i + 1));
        if (record != NULL) {
            if ((record[3] & 1) != 0) {
                if (g_gameDataBlocks.demonRange->first == 0) {
                    g_gameDataBlocks.demonRange->first = record[0];
                }
                g_gameDataBlocks.demonRange->last = record[0];
            }
            row->v[0] = reinterpret_cast<const u8 *>(record)[3];
            for (s32 k = 0; k < 5; k++) {
                row->v[1 + k] = record[0xd + k];
            }
            for (s32 k = 0; k < 5; k++) {
                row->v[6 + k] = record[0xd + k];
            }
            row->v[0xc] = record[10];
            row->v[0xd] = record[11];
            for (s32 k = 0; k < 8; k++) {
                row->v[0xe + k] = record[0x1e + k];
            }
            row->v[0x16] = 0;
            row->v[0x17] = row->v[0x17] & 0xff00;
            reinterpret_cast<u8 *>(&row->v[0xb])[0] = reinterpret_cast<u8 *>(&row->v[0xb])[0] & 0xc1;
        }
        row++;
    }
    world->unk0a8c0 = 0;
    world->unk0a8c1 = 0;
    world->unk0a8c2 = 0;
    world->unk0a8c3 = 0;
    world->unk0a8c4 = 0.0f;
    world->unk0a8c8 = 0.0f;
    world->unk0a8cc = 0.0f;
    world->unk0a8d0 = 0.0f;
    world->unk0a8d4 = 0.0f;
    world->unk0a8d8 = 0;
    world->unk0a8e0 = 0;
    world->unk0a8e2 = 0;
    world->unk0a8dc = 0;
    world->unk0a8de = 0xffff;
    world->unk0a8dd = 0;
    world->unk0b004 = 0;
    world->unk0b008 = 0;
    world->unk0b00c = 0;
    world->unk0b010 = 0;
    world->unk0b014 = 0;
    world->unk0b018 = 0;
    world->unk0b01c = 0;
    world->unk0b020 = 0;
    world->unk0b024 = 0;
    world->unk0b028 = 0;
    world->unk0b02c = 0;
    world->unk0b030 = 0;
    world->unk0b034 = 0;
    world->unk0b038 = 0;
    world->unk0b03c = 0;
    world->unk0b040 = 0;
    world->unk0b044 = 0;
    world->unk0b048 = 0;
    world->unk0b04c = 0;
    world->unk0b498 = 0;
    world->unk0b49c = 0;
    world->unk0b4a0 = 0;
    world->unk0b4a4 = 0;
    world->unk0b4a8 = 0;
    world->unk0b4ac = 0;
    world->unk0b4b0 = 0;
    world->unk0b4b4 = 0;
    world->unk0b4b8 = 0;
    world->unk0b4bc = 0;
    world->unk0b4c0 = 0;
    world->unk0b4c4 = 0;
    world->unk0b4c8 = 0;
    world->unk0b4cc = 0;
    world->unk0b4d0 = 0;
    world->unk0b4d4 = 0;
    memClear(reinterpret_cast<u8 *>(world) + 0xb4d8, 0x80);
    world->unk0b5d8 = 0;
    world->unk0b5dc = 0;
    world->unk0b5e0 = 0;
    world->unk0b5e4 = 0;
    world->unk0b5e8 = 0;
    world->unk0b5ec = 0;
    world->unk0b5f0 = 0;
    world->unk0b5f4 = 0;
    world->unk0b5f8 = 0;
    world->unk0b5fc = 0;
    world->unk0b600 = 0;
    world->unk0b604 = 0;
    world->unk0b608 = 0;
    world->unk0b60c = 0;
    world->unk0b610 = 0;
    world->unk0b614 = 0;
    world->unk0b61c = 0;
    world->unk0b620 = 0;
    world->unk0b624 = 0;
    world->unk0b628 = 0;
    world->unk0b62c = 0;
    world->unk0b630 = 0;
    world->unk0b634 = 0;
    world->unk0b638 = 0;
    world->unk0b65c = 0;
    world->unk0b660 = 0;
    world->unk0b664 = 0;
    world->unk0b668 = 0;
    world->unk0b66c = 0;
    world->unk0a8fa = 1;
    world->unk0a8fb = 1;
    world->unk0b052 = 0;
    memClear(reinterpret_cast<u8 *>(world) + 0xb720, 0xc0);
    world->unk0b6a0 = 0;
    world->unk0b6a1 = 0;
    world->unk0b6a2 = 0;
    world->unk0b6a3 = 0;
    world->unk0b714 = 0xffffffff;
    world->unk0b61a = 0xc;
    world->unk0b658 = 0xe10;
    world->unk0b654 = 0;
    world->unk0b61b = 0;
    world->unk0b680 = 0;
    world->unk0b684 = 0.0f;
    world->unk0b688 = 0;
    FUN_0033f81c();
    FUN_002c4924();
    inventoryResetSavedTableEntries();
    FUN_003c25f0();
    rt_memclr(reinterpret_cast<u8 *>(world) + 0x1ec18, 0x80);
    FUN_002cf3b4();
}

} /* extern "C" */
