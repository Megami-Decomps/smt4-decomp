#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

/* Main game data block: only the field read here is described. */
typedef struct {
    u8 unk00[0x12e8];
    s32 unk12e8;    /* 0x12e8 */
} GameData;

/* Global holder: the game data pointer sits at +4. */
typedef struct {
    u8 unk00[4];
    GameData *data; /* 0x04 */
} GameGlobals;

extern GameGlobals g_gameGlobals;

/* Returns the low byte of the game data's field at 0x12e8, sign-extended. */
s8 gameGetFlagByte12e8(void)
{
    return (s8)g_gameGlobals.data->unk12e8;
}

} /* extern "C" */
