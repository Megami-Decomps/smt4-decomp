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

extern MenuBlock DAT_0057f588;

GameData *FUN_0014af84(void);
int FUN_001846d0(u8 *panel, int arg);

/* Starts the menu panel animation 7 when the game data flag is set; always reports success. */
u32 FUN_0039a638(void)
{
    Menu *menu = DAT_0057f588.menu;

    if (FUN_0014af84()->flag == 0) {
        return 1;
    }
    FUN_001846d0(menu->panel, 7);
    return 1;
}

} /* extern "C" */
