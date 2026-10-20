#include "common.h"

extern "C" {

typedef struct NameBuffer {
    /* 0x00 */ u32 w0;
    /* 0x04 */ u32 w1;
    /* 0x08 */ u32 w2;
    /* 0x0C */ u32 w3;
    /* 0x10 */ u16 w4;
} NameBuffer;

typedef struct NameEntryMenu {
    /* 0x000 */ u8 unk000[0x261];
    /* 0x261 */ s8 target;         /* which buffer to clear: 0/-1 first, 1 player name, 2 and 4 area */
    /* 0x262 */ u8 unk262[0x14A];
    /* 0x3AC */ u8 ui[0x20];
} NameEntryMenu;

extern s32 FUN_00163aa4(u8 *ui, f32 speed);
extern NameBuffer *FUN_0015687c(void);
extern NameBuffer *gameDataGetPlayerName(void);
extern NameBuffer *gameBlockGetArea221AA(void);
extern void FUN_00484264(NameEntryMenu *menu, NameBuffer *buffer);
extern void stateSetterEnterState(NameEntryMenu *menu, s32 state);

static __inline void nameBufferClear(NameBuffer *buffer)
{
    buffer->w0 = 0;
    buffer->w1 = 0;
    buffer->w2 = 0;
    buffer->w3 = 0;
    buffer->w4 = 0;
}

/* When the confirm animation finishes, clears the name buffer selected by the menu's target and moves to state 8. */
void nameEntryMenuClearTarget(NameEntryMenu *menu)
{
    NameBuffer *buffer;

    if (FUN_00163aa4(menu->ui, 1.0f) != 0) {
        if (menu->target == 0 || menu->target == -1) {
            buffer = FUN_0015687c();
            nameBufferClear(buffer);
            FUN_00484264(menu, buffer);
        }
        if (menu->target == 1) {
            buffer = gameDataGetPlayerName();
            nameBufferClear(buffer);
            FUN_00484264(menu, buffer);
        }
        if (menu->target == 2) {
            buffer = gameBlockGetArea221AA();
            nameBufferClear(buffer);
            FUN_00484264(menu, buffer);
        }
        if (menu->target == 4) {
            buffer = gameBlockGetArea221AA();
            nameBufferClear(buffer);
            FUN_00484264(menu, buffer);
        }
        stateSetterEnterState(menu, 8);
    }
}

} /* extern "C" */
