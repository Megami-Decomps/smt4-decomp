#include "common.h"

extern "C" {

/* Menu object with a panel at 0xb00. */
typedef struct {
    u8 unk00[0xb00];
    u8 panel[1];        /* 0xb00 */
} Menu;

/* Global block: the menu pointer sits at +8. */
typedef struct {
    u8 unk00[8];
    Menu *menu;         /* 0x08 */
} MenuBlock;

/* Game data with a flag word at 0x21d8c. */
typedef struct {
    u8 unk00[0x21d8c];
    u32 flag;           /* 0x21d8c */
} GameData;

extern MenuBlock g_messageMain;

GameData *gameDataBlocksGetSaveData(void);
int uiSpriteSelectAnim(u8 *panel, int arg);

/* Starts the menu panel animation 7 when the game data flag is set; always reports success. */
u32 FUN_0039a638(void)
{
    Menu *menu = g_messageMain.menu;

    if (gameDataBlocksGetSaveData()->flag == 0) {
        return 1;
    }
    uiSpriteSelectAnim(menu->panel, 7);
    return 1;
}

} /* extern "C" */
