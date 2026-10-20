#include "common.h"

extern "C" {

/* Game data with a flag word at 0x21e14. */
typedef struct {
    u8 unk00[0x21e14];
    u32 flag;           /* 0x21e14 */
} GameData;

/* Global holder: the game data pointer sits at +4. */
typedef struct {
    u8 unk00[4];
    GameData *data;     /* 0x04 */
} GameGlobals;

extern GameGlobals g_gameDataBlocks;

int FUN_0018719c(u32 id);

/* True when the data flag is set or FUN_0018719c(0x528) succeeds. */
u32 FUN_0031d230(void)
{
    if (g_gameDataBlocks.data->flag != 0) {
        return 1;
    }
    if (FUN_0018719c(0x528) == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
