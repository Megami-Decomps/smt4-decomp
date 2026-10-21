#include "common.h"
extern "C" {
struct GetterWork { u8 unk00[0x5C6]; s8 value; };
extern GetterWork *g_uiQuest;
/* Read the active work's signed state byte. */
s8 questGetSecondaryState(void) { return g_uiQuest->value; }
}
