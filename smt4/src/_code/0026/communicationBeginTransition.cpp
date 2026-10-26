#include "common.h"
struct CommandWindow { u8 unk00[8]; u32 state; u8 unk0C[6]; u8 mode; u8 unk13[0x29]; u8 transition[1]; };
extern "C" {
extern CommandWindow *g_comWin;
void spriteStartAnimationByIndex(void *transition,u32 value);
}
static void commandWindowBegin(CommandWindow *window, u8 mode)
{
    window->mode = mode;
    window->state = 1;
    spriteStartAnimationByIndex(window->transition, 0);
}
/* Start the requested command-window mode with its transition reset. */
extern "C" void communicationBeginTransition(u8 mode) { commandWindowBegin(g_comWin, mode); }
