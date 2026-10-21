#include "common.h"

extern "C" {

struct GameOptions {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ s16 value;
    /* 0x12E */ u16 selection;
};

struct OptionResult {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 flags;
};

GameOptions *gameGetOptions(void);
OptionResult *dataTableGetCategoryEntry(s32 value, u32 selection);
u32 gameOptionResourceId(u32 value);

u32 FUN_0022fcb8(void)
{
    u32 selection = gameGetOptions()->selection;
    s32 value = gameGetOptions()->value;
    return gameOptionResourceId((dataTableGetCategoryEntry(value, selection)->flags >> 26) & 31);
}

} /* extern "C" */
