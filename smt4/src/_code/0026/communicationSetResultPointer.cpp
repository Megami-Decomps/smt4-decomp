/* NON_MATCHING: compiler keeps the communication-work pointer in r1 rather than retail r0. */
#include "common.h"
extern "C" {
struct CommandWindow { u8 unk00[0x14]; u32 value; };
extern CommandWindow *g_comWin;
/* Clear the command window's stored value. */
void communicationSetResultPointer(void) { g_comWin->value = 0; }
}
