/* NON_MATCHING: the per-slot field stores are written in field order rather than retail's interleaved order, and the record layouts are named by offset only (their meaning is not yet known); the stores compile with different grouping and register use than retail (228 vs 237 rows). */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

/* One enemy slot (0x188 bytes); fields are named by their offset inside the slot. */
typedef struct EnemySlot {
    /* 0x000 */ u8 f000;
    /* 0x001 */ u8 unk001[0x3];
    /* 0x004 */ u32 f004;
    /* 0x008 */ u32 f008;
    /* 0x00C */ u32 f00C;
    /* 0x010 */ u32 f010;
    /* 0x014 */ u32 f014;
    /* 0x018 */ u32 f018;
    /* 0x01C */ u32 f01C;
    /* 0x020 */ u32 f020;
    /* 0x024 */ u32 f024;
    /* 0x028 */ u32 f028;
    /* 0x02C */ u32 f02C;
    /* 0x030 */ u32 f030;
    /* 0x034 */ u32 f034;
    /* 0x038 */ u32 f038;
    /* 0x03C */ f32 f03C;
    /* 0x040 */ u8 unk040[0x10];
    /* 0x050 */ u8 f050;
    /* 0x051 */ u8 unk051[0x3];
    /* 0x054 */ u32 f054;
    /* 0x058 */ u32 f058;
    /* 0x05C */ u32 f05C;
    /* 0x060 */ u32 f060;
    /* 0x064 */ u32 f064;
    /* 0x068 */ u32 f068;
    /* 0x06C */ u32 f06C;
    /* 0x070 */ u32 f070;
    /* 0x074 */ u32 f074;
    /* 0x078 */ u32 f078;
    /* 0x07C */ u8 f07C;
    /* 0x07D */ u8 f07D;
    /* 0x07E */ u8 f07E;
    /* 0x07F */ u8 unk07F[0x5];
    /* 0x084 */ u32 f084;
    /* 0x088 */ u32 f088;
    /* 0x08C */ u32 f08C;
    /* 0x090 */ u32 f090;
    /* 0x094 */ u8 unk094[0xA4];
    /* 0x138 */ u16 f138;
    /* 0x13A */ u16 f13A;
    /* 0x13C */ u8 f13C;
    /* 0x13D */ u8 f13D;
    /* 0x13E */ u8 f13E;
    /* 0x13F */ u8 f13F;
    /* 0x140 */ u8 f140;
    /* 0x141 */ u8 f141;
    /* 0x142 */ u8 unk142[0x2];
    /* 0x144 */ u32 f144;
    /* 0x148 */ u8 f148;
    /* 0x149 */ u8 unk149[0x3];
    /* 0x14C */ u32 f14C;
    /* 0x150 */ u8 unk150[0x20];
    /* 0x170 */ u32 f170;
    /* 0x174 */ u16 f174;
    /* 0x176 */ u16 f176;
    /* 0x178 */ u8 unk178[0x2];
    /* 0x17A */ u8 f17A;
    /* 0x17B */ u8 f17B;
    /* 0x17C */ u32 f17C;
    /* 0x180 */ u32 f180;
    /* 0x184 */ u8 f184;
    /* 0x185 */ u8 f185;
    /* 0x186 */ u8 unk186[0x2];
} EnemySlot;

/* A small record (8 bytes). */
typedef struct EnemyPair {
    /* 0x000 */ u32 f000;
    /* 0x004 */ u8 f004;
    /* 0x005 */ u8 f005;
    /* 0x006 */ u8 unk006[0x2];
} EnemyPair;

/* A cleared block (0xC4 bytes). */
typedef struct EnemyBlock {
    /* 0x000 */ u32 f000;
    /* 0x004 */ u32 f004;
    /* 0x008 */ u32 f008;
    /* 0x00C */ u32 f00C;
    /* 0x010 */ u32 f010;
    /* 0x014 */ u32 f014;
    /* 0x018 */ u32 f018;
    /* 0x01C */ u32 f01C;
    /* 0x020 */ u32 f020;
    /* 0x024 */ u32 f024;
    /* 0x028 */ u32 f028;
    /* 0x02C */ u32 f02C;
    /* 0x030 */ u32 f030;
    /* 0x034 */ u32 f034;
    /* 0x038 */ u32 f038;
    /* 0x03C */ u32 f03C;
    /* 0x040 */ u32 f040;
    /* 0x044 */ u32 f044;
    /* 0x048 */ u32 f048;
    /* 0x04C */ u32 f04C;
    /* 0x050 */ u32 f050;
    /* 0x054 */ u32 f054;
    /* 0x058 */ u32 f058;
    /* 0x05C */ u32 f05C;
    /* 0x060 */ u32 f060;
    /* 0x064 */ u32 f064;
    /* 0x068 */ u32 f068;
    /* 0x06C */ u32 f06C;
    /* 0x070 */ u32 f070;
    /* 0x074 */ u32 f074;
    /* 0x078 */ u32 f078;
    /* 0x07C */ u32 f07C;
    /* 0x080 */ u32 f080;
    /* 0x084 */ u32 f084;
    /* 0x088 */ u32 f088;
    /* 0x08C */ u32 f08C;
    /* 0x090 */ u32 f090;
    /* 0x094 */ u32 f094;
    /* 0x098 */ u32 f098;
    /* 0x09C */ u32 f09C;
    /* 0x0A0 */ u32 f0A0;
    /* 0x0A4 */ u32 f0A4;
    /* 0x0A8 */ u32 f0A8;
    /* 0x0AC */ u32 f0AC;
    /* 0x0B0 */ u32 f0B0;
    /* 0x0B4 */ u32 f0B4;
    /* 0x0B8 */ u32 f0B8;
    /* 0x0BC */ u32 f0BC;
    /* 0x0C0 */ u32 f0C0;
} EnemyBlock;

/* A four-word reference record. */
typedef struct EnemyRef {
    /* 0x000 */ u32 f000;
    /* 0x004 */ u32 f004;
    /* 0x008 */ u32 f008;
    /* 0x00C */ u32 f00C;
} EnemyRef;

/* The map enemy block (0x4D84 bytes). */
typedef struct MapEnemy {
    /* 0x0000 */ u32 task;
    /* 0x0004 */ u32 f0004;
    /* 0x0008 */ u32 f0008;
    /* 0x000C */ u32 f000C;
    /* 0x0010 */ u32 f0010;
    /* 0x0014 */ u8 unk0014[0x20];
    /* 0x0034 */ EnemySlot slots[40];
    /* 0x3D74 */ u32 f3D74;
    /* 0x3D78 */ u32 f3D78;
    /* 0x3D7C */ u32 f3D7C;
    /* 0x3D80 */ u32 f3D80;
    /* 0x3D84 */ u8 unk3d84[4];
    /* 0x3D88 */ u8 f3D88;
    /* 0x3D89 */ u8 f3D89;
    /* 0x3D8A */ u8 unk3d8a[2];
    /* 0x3D8C */ EnemyPair pairs[21];
    /* 0x3E34 */ EnemyBlock blocks[16];
    /* 0x4A74 */ u32 f4A74;
    /* 0x4A78 */ EnemyRef refsA[16];
    /* 0x4B78 */ u32 f4B78;
    /* 0x4B7C */ EnemyRef refsB[16];
    /* 0x4C7C */ u32 f4C7C;
    /* 0x4C80 */ EnemyRef refsC[16];
    /* 0x4D80 */ u32 f4D80;
} MapEnemy;

extern MapEnemy *g_mapEnemy;

void *asdMemoryAllocTracked(u32 size, u32 alignment, u32 a, u32 b, u32 c);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc draw, AsdProcFunc release, u32 work, void *owner);
s32 randRange(u32 limit);
s32 mapEnemyCleanupUpdate(u32 job);
void mapEnemyRelease(u32 job);

/* Creates the map enemy manager: allocates its block, starts the draw task and resets the 40
 * enemy slots, the small and cleared record tables and the reference tables. */
void FUN_00232d58(u32 parent)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp", 519);
    MapEnemy *enemy = (MapEnemy *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x4D84, 1);

    g_mapEnemy = enemy;
    enemy->task = taskCreateDraw(reinterpret_cast<const s8 *>("MENEMY"), 4, 0, 0, mapEnemyCleanupUpdate, mapEnemyRelease, 0,
                                 reinterpret_cast<void *>(parent));
    enemy->f0004 = 0;
    enemy->f0008 = 0;
    enemy->f000C = 0;
    enemy->f0010 = 0;
    enemy->f3D74 = 0;
    enemy->f3D78 = 0;
    enemy->f3D7C = 0;
    enemy->f3D80 = 0;
    enemy->f3D88 = 0;
    enemy->f3D89 = 0;
    for (s32 index = 0; index < 40; index++) {
        EnemySlot *slot = &enemy->slots[index];

        slot->f000 = 0;
        slot->f004 = index;
        slot->f008 = 0;
        slot->f00C = 0;
        slot->f010 = 0;
        slot->f014 = slot->f008;
        slot->f018 = slot->f00C;
        slot->f01C = 0;
        slot->f020 = 0;
        slot->f024 = 0;
        slot->f028 = 0;
        slot->f02C = 0;
        slot->f030 = 0;
        slot->f034 = 0xFFFFFFFF;
        slot->f038 = 1;
        slot->f03C = 100000.0f;
        slot->f050 = 0;
        slot->f054 = 0;
        slot->f058 = 0;
        slot->f05C = 0;
        slot->f060 = 0;
        slot->f064 = 0;
        slot->f068 = 0;
        slot->f06C = 0;
        slot->f070 = 0;
        slot->f074 = 0;
        slot->f078 = 1;
        slot->f07C = 0;
        slot->f07D = 0;
        slot->f07E = 0;
        slot->f084 = 0;
        slot->f088 = 0;
        slot->f08C = randRange(200) + 0x3C;
        slot->f090 = 0;
        slot->f138 = 0;
        slot->f13A = 0;
        slot->f13C = 0;
        slot->f13D = 0;
        slot->f13E = 0;
        slot->f13F = 0;
        slot->f140 = 0;
        slot->f141 = 0;
        slot->f144 = 0;
        slot->f148 = 0;
        slot->f14C = 0;
        slot->f170 = 0;
        slot->f174 = 999;
        slot->f176 = 0;
        slot->f17A = 0;
        slot->f17B = 1;
        slot->f17C = 0;
        slot->f180 = 0;
        slot->f184 = 0;
        slot->f185 = 0;
    }
    for (s32 index = 0; index < 21; index++) {
        EnemyPair *pair = &enemy->pairs[index];

        pair->f000 = 0;
        pair->f004 = 0;
        pair->f005 = 0;
    }
    for (s32 index = 0; index < 16; index++) {
        EnemyBlock *block = &enemy->blocks[index];

        block->f000 = 0xFFFFFFFF;
        block->f004 = 0;
        block->f008 = 0;
        block->f00C = 0;
        block->f010 = 0;
        block->f014 = 0;
        block->f018 = 0;
        block->f01C = 0;
        block->f020 = 0;
        block->f024 = 0;
        block->f028 = 0;
        block->f02C = 0;
        block->f030 = 0;
        block->f034 = 0;
        block->f038 = 0;
        block->f03C = 0;
        block->f040 = 0;
        block->f044 = 0;
        block->f048 = 0;
        block->f04C = 0;
        block->f050 = 0;
        block->f054 = 0;
        block->f058 = 0;
        block->f05C = 0;
        block->f060 = 0;
        block->f064 = 0;
        block->f068 = 0;
        block->f06C = 0;
        block->f070 = 0;
        block->f074 = 0;
        block->f078 = 0;
        block->f07C = 0;
        block->f080 = 0;
        block->f084 = 0;
        block->f088 = 0;
        block->f08C = 0;
        block->f090 = 0;
        block->f094 = 0;
        block->f098 = 0;
        block->f09C = 0;
        block->f0A0 = 0;
        block->f0A4 = 0;
        block->f0A8 = 0;
        block->f0AC = 0;
        block->f0B0 = 0;
        block->f0B4 = 0;
        block->f0B8 = 0;
        block->f0BC = 0;
        block->f0C0 = 0;
    }
    enemy->f4A74 = 0;
    for (s32 index = 0; index < 16; index++) {
        EnemyRef *ref = &enemy->refsA[index];

        ref->f000 = 0xFFFFFFFF;
        ref->f004 = 0;
        ref->f008 = 0;
        ref->f00C = 0;
    }
    enemy->f4B78 = 0;
    for (s32 index = 0; index < 16; index++) {
        EnemyRef *ref = &enemy->refsB[index];

        ref->f000 = 0xFFFFFFFF;
        ref->f004 = 0;
        ref->f008 = 0;
        ref->f00C = 0;
    }
    enemy->f4C7C = 0;
    for (s32 index = 0; index < 16; index++) {
        EnemyRef *ref = &enemy->refsC[index];

        ref->f000 = 0xFFFFFFFF;
        ref->f004 = 0;
        ref->f008 = 0;
        ref->f00C = 0;
    }
    enemy->f4D80 = 0;
}

}
