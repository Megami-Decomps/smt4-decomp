#include "shard/W5_W5Match2_FrameTextureQuery.h"
extern "C" {
extern FrameTextureQuery *g_frameTex;
/* Read the frame texture state, or zero while absent. */
s32 frameTextureGetState(void) { return g_frameTex != NULL ? g_frameTex->state : 0; }
}
