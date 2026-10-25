#include "gamedata/SupportUnitRecord.h"
#include "shard/FUN_0022fcb8.h"

extern "C" {

struct GameOptions {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ s16 value;
    /* 0x12E */ u16 selection;
};


GameOptions *gameGetOptions(void);
SupportUnitRecordA *dataTableGetCategoryEntry(s32 value, u32 selection);
u32 gameOptionResourceId(u32 value);

u32 FUN_0022fcb8(void)
{
    u32 selection = gameGetOptions()->selection;
    s32 value = gameGetOptions()->value;
    return gameOptionResourceId((dataTableGetCategoryEntry(value, selection)->flags >> 26) & 31);
}

} /* extern "C" */
