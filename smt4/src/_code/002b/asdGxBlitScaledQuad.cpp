/* Submits the default GPU packet, runs gpuSubmitColoredTexturedQuad with all four ids unset (-1) and the nine float parameters, then
 * submitDefaultFloatParameters (placed right after, so the last call is a linker NOP). */
#include "common.h"

extern "C" {
void gpuSubmitDefaultPacket(void);
void submitDefaultFloatParameters(void);
void gpuSubmitColoredTexturedQuad(s32 first, s32 second, s32 third, s32 fourth, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f, f32 g,
                  f32 h, f32 i);

void asdGxBlitScaledQuad(f32 a, f32 b, f32 c, f32 d, f32 e, f32 f, f32 g, f32 h, f32 i)
{
    gpuSubmitDefaultPacket();
    gpuSubmitColoredTexturedQuad(-1, -1, -1, -1, a, b, c, d, e, f, g, h, i);
    submitDefaultFloatParameters();
}
}
