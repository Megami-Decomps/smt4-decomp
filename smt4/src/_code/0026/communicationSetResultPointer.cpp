#include "common.h"
extern "C" {
struct CommandWindow { u8 unk00[0x14]; u32 value; };
extern CommandWindow *g_comWin;

static __inline void commandWindowSetValue(CommandWindow *window, u32 value)
{
    window->value = value;
}

/* Clear the command window's stored value. */
void communicationSetResultPointer(void) { commandWindowSetValue(g_comWin, 0); }
}
