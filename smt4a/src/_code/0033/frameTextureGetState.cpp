#include "frame_tex/FrameTexA.h"
extern "C" {
/* Whether the ENCEFF fade is active, or zero while the frame texture work is absent. */
s32 frameTextureGetState(void) { return g_frameTex != NULL ? g_frameTex->encEffFadeActive : 0; }
}
