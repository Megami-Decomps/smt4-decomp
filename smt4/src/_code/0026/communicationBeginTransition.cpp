/* NON_MATCHING: compiler reorders the command state and transition-field address setup. */
#include "common.h"
extern "C" {
struct CommandWindow { u8 unk00[8]; u32 state; u8 unk0C[6]; u8 mode; u8 unk13[0x29]; u8 transition[1]; };
extern CommandWindow *g_comWin;
void FUN_002bee58(void *transition,u32 value);
/* Start the requested command-window mode with its transition reset. */
void communicationBeginTransition(u8 mode) { g_comWin->mode=mode; g_comWin->state=1; FUN_002bee58(g_comWin->transition,0); }
}
