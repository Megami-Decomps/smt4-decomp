/* NON_MATCHING: retail copies the 16-byte stock id table with a single ldm and hoists the player-name string pointer above the player-record setup; the new-game setup is otherwise the same (202 vs 204 rows). */
#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {

/* The player record (only the fields initialised here). */
typedef struct NewGamePlayer {
    /* 0x00 */ u16 stock[7];            /* the starting demon ids */
    /* 0x0E */ u8 unk0e[0x0E];
    /* 0x1C */ u16 hpMax;
    /* 0x1E */ u16 mpMax;
    /* 0x20 */ u8 unk20[0x0A];
    /* 0x2A */ u16 hp;
    /* 0x2C */ u16 mp;
    /* 0x2E */ u8 unk2e[0x1E];
    /* 0x4C */ char name[0x12];
    /* 0x5E */ u8 unk5e[0xFFFF];
} NewGamePlayer;

typedef struct NewGameSlotTable {
    /* 0x0000 */ u32 unk0000;
    /* 0x0004 */ u8 unk0004[0x1C9F];
    /* 0x1CA3 */ u8 stockCount;
} NewGameSlotTable;

extern const char DAT_005311fc[];

void FUN_0022838c(void);
NewGameSlotTable *gameGetSlotTable(void);
void flagValueAdd(s32 flag, s32 amount);
void *gameGetPlayerData(void);
void sysMemClear(void *block, u32 size);
char *strncpy(char *destination, const char *source, u32 count);
void FUN_004ccf78(s32 arg);
void FUN_003df7c4(s32 arg);
void FUN_00284fdc(void);
void gameDataBlocksClearSlots(void);
void *gameDataGetPlayerName(void);
void textFormatBuffer(void *buffer, const char *format);
void FUN_00417b70(s32 arg);
void FUN_00417e08(s32 arg);
void saveNameBlockReset(void);

void FUN_003e45bc(s32 a, s32 b, s32 c);
void FUN_00353b00(s32 arg);

/* Sets up a new game when `loaded` is zero: the starting demon stock, the player record and name,
 * the opening story flags and the starting unlocks. */
void FUN_00283d74(s32 loaded)
{
    FUN_0022838c();
    NewGameSlotTable *slots = gameGetSlotTable();

    if (loaded != 0) {
        return;
    }
    slots->unk0000 = 0;
    slots->stockCount = 8;
    u16 stockIds[8] = {0x3D, 0xBA, 0x30D, 0x1A1, 0x219, 0x291, 0x295, 0xFFFF};

    for (u32 i = 0; i < 7; i++) {
        if (stockIds[i] != 0) {
            flagValueAdd(stockIds[i], 1);
        }
    }
    u8 *player = (u8 *)gameGetPlayerData();
    NewGamePlayer *record = (NewGamePlayer *)player;

    sysMemClear(player, 100);
    *(u16 *)(player + 0x62) = 1;
    *(u16 *)(player + 0x60) = 0;
    strncpy(record->name, DAT_005311fc, 0x12);
    player[0x5D] = 0;
    FUN_004ccf78(0);
    for (u32 i = 0; i < 7; i++) {
        record->stock[i] = stockIds[i];
    }
    FUN_003df7c4(0);
    record->hp = record->hpMax;
    record->mp = record->mpMax;
    FUN_00284fdc();
    gameDataBlocksClearSlots();
    textFormatBuffer(gameDataGetPlayerName(), DAT_005311fc + 15);
    flagValueAdd(0x33F, 1);
    FUN_00417b70(1);
    FUN_00417e08(1);
    saveNameBlockReset();
    gameFlagSetValue(0x52B, 1, 1);
    gameFlagSetValue(0x418, 0, 1);
    gameFlagSetValue(0x416, 1, 1);
    gameFlagSetValue(0x48E, 1, 1);
    gameFlagSetValue(0x556, 1, 1);
    gameFlagSetValue(0x557, 1, 1);
    gameFlagSetValue(0x555, 1, 1);
    gameFlagSetValue(0x4CA, 1, 1);
    gameFlagSetValue(0x49A, 1, 1);
    for (s32 flag = 0x400; flag <= 0x417; flag++) {
        gameFlagSetValue(flag, 1, 1);
    }
    gameFlagSetValue(0x403, 0, 1);
    gameFlagSetValue(0x401, 0, 1);
    gameFlagSetValue(0x406, 0, 1);
    gameFlagSetValue(0x40A, 0, 1);
    gameFlagSetValue(0x40B, 0, 1);
    gameFlagSetValue(0x40D, 0, 1);
    gameFlagSetValue(0x40E, 0, 1);
    gameFlagSetValue(0x40F, 0, 1);
    gameFlagSetValue(0x408, 0, 1);
    gameFlagSetValue(0x464, 0, 1);
    FUN_003e45bc(0x18, 1, 0);
    FUN_003e45bc(0x2E, 1, 0);
    FUN_003e45bc(0x76, 1, 0);
    FUN_00353b00(1);
}

}
