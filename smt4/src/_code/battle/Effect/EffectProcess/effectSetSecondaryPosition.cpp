#include "common.h"
extern "C" {
struct Position { u32 x,y,z; };
struct EffectPositionWork { u8 unk00[0x514]; Position position; };
extern EffectPositionWork *g_effectProcessActive;
/* Store all three words of the active effect position. */
void effectSetSecondaryPosition(const Position *position) { g_effectProcessActive->position=*position; }
}
