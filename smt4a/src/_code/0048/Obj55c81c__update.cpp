/* NON_MATCHING: timer-path branch layout and flags reloads have not been matched. */
#include "classes/Obj55c81c.h"
struct Obj55c81cGameState { u8 unk00[0x21]; s8 paused; };
extern "C" Obj55c81cGameState g_gameState;

void Obj55c81c::update()
{
    if (g_gameState.paused == 0) {
        if ((flags & 0x10) != 0 && mode == 3) {
            if (state != 1) {
                flags &= ~1;
            }
        } else {
            if ((flags & 0x10) != 0 && frames > 0) {
                --frames;
            }
            if (frames == 0) {
                flags &= ~1;
            }
        }
    }
    if (child != NULL) {
        child->update();
    }
    vfunc18();
}
