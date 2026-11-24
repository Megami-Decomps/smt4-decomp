/* NON_MATCHING: 31 lines, all in the command words: retail post-increments the cursor over the first three words,
 * stores 0xF0042 with the half height in one strd and derives 0x70043, 0xF0044 and 0xF0068 from the two headers it
 * loads; this build stores the first pair at [0]/[4] and loads 0xF0044 itself. Written `*cursor++` (as retail's first
 * stores suggest), the build loads all four headers and swaps the width/height VFP registers (45 lines). */
#include "gfx/ViewportEncoding.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match5_ShaderBinding.h"

extern "C" {

/* Sets the GPU viewport origin and scale for the given pixel rectangle. */
void asdGxSetViewport(u32 x, s32 y, s32 width, s32 height)
{
    f32 widthValue = (f32)width;
    f32 heightValue = (f32)height;
    u32 halfWidth = gpuViewportEncode<16>(widthValue * 0.5f);
    u32 inverseWidth = gpuViewportEncodeInverse(2.0f / widthValue) << 1;
    u32 halfHeight = gpuViewportEncode<16>(heightValue * 0.5f);
    u32 inverseHeight = gpuViewportEncodeInverse(2.0f / heightValue) << 1;
    u32 *begin = (u32 *)asdGxGetCommandCursor();
    u32 *cursor = begin;
    cursor[0] = halfWidth;
    cursor[1] = GPU_VIEWPORT_CMD_HALF_WIDTH;
    cursor += 2;
    cursor[0] = inverseWidth;
    cursor[1] = GPU_VIEWPORT_CMD_INVERSE_WIDTH;
    cursor += 2;
    cursor[0] = halfHeight;
    cursor[1] = GPU_VIEWPORT_CMD_HALF_HEIGHT;
    cursor += 2;
    cursor[0] = inverseHeight;
    cursor[1] = GPU_VIEWPORT_CMD_INVERSE_HEIGHT;
    cursor += 2;
    cursor[0] = x | ((u32)y << 16);
    cursor[1] = GPU_VIEWPORT_CMD_ORIGIN;
    cursor += 2;
    asdModelCommitCommandRange((u32)begin, (u32)cursor);
}

} /* extern "C" */
