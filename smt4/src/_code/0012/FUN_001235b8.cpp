/* NON_MATCHING: format/byte-size registers, pixel-address scheduling and stereo branch placement differ. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
void gxSetBufferSwap(s32 screen, u32 index, const void *left, const void *right,
    u32 stride, u32 format, u32 active);

void FUN_001235b8(s32 requestedScreen)
{
    // Display presentation fields follow the shared graphics-context prefix.
    struct DisplayBuffer { u32 unk00; u8 *pixels; s32 format, width, height; u32 heap; };
    struct PresentationView {
        AsdGfxContext prefix;
        DisplayBuffer *buffers[2];
        DisplayBuffer *stereo;
        s32 x[2], stereoX;
        s32 y[2], stereoY;
        u32 indices[2];
        u8 unk154[0x10];
        s32 displayMode;
    };
    typedef char LayoutCheck[offsetof(PresentationView, buffers) == 0x128 &&
        offsetof(PresentationView, indices) == 0x14c &&
        offsetof(PresentationView, displayMode) == 0x164 ? 1 : -1];
    PresentationView *state = reinterpret_cast<PresentationView *>(&g_asdGfxContext);
    for (s32 screen = 0; screen < 2; ++screen) {
        if (requestedScreen == screen + 0x400 || requestedScreen == 0x402) {
            DisplayBuffer *buffer = state->buffers[screen];
            u32 format, bytesPerPixel;
            switch (buffer->format) {
            case 0x8051: format = 1; bytesPerPixel = 3; break; // RGB8
            case 0x8056: format = 4; bytesPerPixel = 2; break; // RGBA4
            case 0x8057: format = 3; bytesPerPixel = 2; break; // RGB5A1
            case 0x8058: format = 0; bytesPerPixel = 4; break; // RGBA8
            case 0x8d62: format = 2; bytesPerPixel = 2; break; // RGB565
            default: format = 0; bytesPerPixel = 0; break;
            }
            format |= buffer->heap == 0x10000 ? 0x100 : 0x300;
            const u8 *right = NULL;
            u32 flags = format;
            if (screen == 0) {
                switch (state->displayMode) {
                case 0x701:
                    break;
                case 0x702: {
                    DisplayBuffer *stereo = state->stereo;
                    right = stereo->pixels + bytesPerPixel *
                        (stereo->width * (stereo->height - state->prefix.presentation.croppedRows[0] - state->stereoY) + state->stereoX);
                    flags = format | 0x20;
                    break;
                }
                default:
                    flags = format | 0x40;
                    break;
                }
            }
            const u8 *left = buffer->pixels + bytesPerPixel *
                (buffer->width * (buffer->height - state->prefix.presentation.croppedRows[screen] - state->y[screen]) + state->x[screen]);
            gxSetBufferSwap(screen, state->indices[screen], left, right,
                buffer->width * bytesPerPixel, flags, state->indices[screen]);
            state->indices[screen] = state->indices[screen] == 0;
        }
    }
}
}
