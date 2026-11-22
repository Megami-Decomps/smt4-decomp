/* NON_MATCHING: retail keeps the right-eye pointer's NULL in r3 from the loop head, keeps the format and pixel size
 * apart in the RGBA8 and default cases, computes the colour flags (|0x40 hoisted) before the mode test and places the
 * stereo block inline; registers differ. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
void FUN_0017e1a0(s32 screen, u32 index, const void *left, const void *right,
    u32 stride, u32 format, u32 active);

void FUN_00161694(s32 requestedScreen)
{
    AsdGfxContext *state = &g_asdGfxContext;
    for (s32 screen = 0; screen < 2; ++screen) {
        if (requestedScreen == screen + 0x400 || requestedScreen == 0x402) {
            AsdGfxTarget *buffer = state->targets[screen];
            u32 format, bytesPerPixel;
            switch (buffer->format) {
            case 0x8051: bytesPerPixel = 3; format = 1; break; // RGB8
            case 0x8056: bytesPerPixel = 2; format = 4; break; // RGBA4
            case 0x8057: bytesPerPixel = 2; format = 3; break; // RGB5A1
            case 0x8058: bytesPerPixel = 4; format = 0; break; // RGBA8
            case 0x8d62: bytesPerPixel = 2; format = 2; break; // RGB565
            default: bytesPerPixel = 0; format = 0; break;
            }
            format |= buffer->heap == 0x10000 ? 0x100 : 0x300;
            const u8 *left = buffer->pixels + bytesPerPixel *
                (buffer->width * (buffer->height - state->screenWidths[screen] - state->targetY[screen]) + state->targetX[screen]);
            const u8 *right = NULL;
            u32 flags = format;
            if (screen == 0) {
                switch (state->topScreenMode) {
                case 0x700:
                    flags = format | 0x40;
                    break;
                case 0x701:
                    break;
                case 0x702: {
                    AsdGfxTarget *stereo = state->targets[2];
                    right = stereo->pixels + bytesPerPixel *
                        (stereo->width * (stereo->height - state->screenWidths[0] - state->targetY[2]) + state->targetX[2]);
                    flags = format | 0x20;
                    break;
                }
                default:
                    flags = format | 0x40;
                    break;
                }
            }
            FUN_0017e1a0(screen, state->swapIndices[screen], left, right,
                buffer->width * bytesPerPixel, flags, state->swapIndices[screen]);
            state->swapIndices[screen] = state->swapIndices[screen] == 0;
        }
    }
}
}
