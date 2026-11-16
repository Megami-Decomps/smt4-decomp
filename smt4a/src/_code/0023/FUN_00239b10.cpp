/* NON_MATCHING: the save-block pointer and the &g_gameDataBlocks base swap sl/fp, and retail addresses the 0x21e14 float from the save block (0x21c00 + 0x214) where the build goes through the game data (+0x88, +0x18c). */
#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {

/* The game data region of the save block (0x2a71c bytes). */
typedef struct GameData {
    /* 0x00000 */ u8 unk00[4];
    /* 0x00004 */ f32 unk04;
    /* 0x00008 */ u8 unk08[0x21d8c - 8];
    /* 0x21d8c */ f32 unk21d8c;
    /* 0x21d90 */ u8 unk21d90[0x27e3d - 0x21d90];
    /* 0x27e3d */ u8 unk27e3d;
    /* 0x27e3e */ u8 remaining[0x2a71c - 0x27e3e];
} GameData;

typedef struct SaveBlock {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ GameData gameData;
} SaveBlock;
typedef char GameDataCopyExtent[sizeof(GameData) == 0x2a71c ? 1 : -1];

typedef struct GameDataBlocks {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SaveBlock *saveBlock;
    /* 0x08 */ void *workBlock;
} GameDataBlocks;
extern GameDataBlocks g_gameDataBlocks;

void asdMemFree(void *p);
void *FUN_003fd478(void);
void partyCopyRecord100(void *record);
s32 gameFlagIsSet(u32 id);

void __aeabi_memcpy4(void *dst, void *src, u32 size);

/* Copies the work block over the save data's game data, keeping the party record and the
 * values at 0x8c, 0x21e14 and 0x27ec5; when keep is 1, those and flags 0x556/0x557/0x421 are restored. */
void FUN_00239b10(s32 keep)
{
    GameData *data = &g_gameDataBlocks.saveBlock->gameData;
    u8 saved27e3d = data->unk27e3d;
    f32 saved04 = data->unk04;
    s32 flag556 = gameFlagIsSet(0x556);
    s32 flag557 = gameFlagIsSet(0x557);
    s32 flag421 = gameFlagIsSet(0x421);
    f32 saved21e14 = data->unk21d8c;
    void *record = FUN_003fd478();

    __aeabi_memcpy4(data, g_gameDataBlocks.workBlock, 0x2a71c);
    data->unk21d8c = saved21e14;
    partyCopyRecord100(record);
    if (keep == 1) {
        g_gameDataBlocks.saveBlock->gameData.unk04 = saved04;
        data->unk27e3d = saved27e3d;
        if (flag556 != 0) {
            gameFlagSetValue(0x556, 1, 1);
        }
        if (flag557 != 0) {
            gameFlagSetValue(0x557, 1, 1);
        }
        if (flag421 != 0) {
            gameFlagSetValue(0x421, 1, 1);
        }
    }
    asdMemFree(record);
}

} /* extern "C" */
