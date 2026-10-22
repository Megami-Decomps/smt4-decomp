/* NON_MATCHING: viewport commands and GPU float encodings are recovered; helper inlining produces different predication, register allocation, and packing stores. */
#include "common.h"

struct ViewportBindingState {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 x;
    /* 0x24 */ u32 y;
    /* 0x28 */ s32 width;
    /* 0x2C */ s32 height;
    /* 0x30 */ u8 initialized;
};

extern "C" {
extern ViewportBindingState *g_textureBindingState;
extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;
}

static __inline u32 viewportFloatBits(f32 value)
{
    union { f32 value; u32 bits; } representation;
    representation.value = value;
    return representation.bits;
}

static __inline u32 viewportFloat24(f32 value)
{
    u32 bits = viewportFloatBits(value);
    u32 magnitude = bits & 0x7fffffff;
    s32 exponent = magnitude ? (s32)(magnitude >> 23) - 64 : 0;
    u32 sign = (bits >> 31) << 23;
    if (exponent < 0)
        return sign;
    return sign | ((u32)exponent << 16) | ((bits & 0x7fffff) >> 7);
}

static __inline u32 viewportFloat31(f32 value)
{
    u32 bits = viewportFloatBits(value);
    u32 magnitude = bits & 0x7fffffff;
    s32 exponent = magnitude ? (s32)(magnitude >> 23) - 64 : 0;
    u32 sign = (bits >> 31) << 30;
    if (exponent < 0)
        return sign;
    return sign | ((u32)exponent << 23) | (bits & 0x7fffff);
}

static __inline void viewportWriteCommand(u32 value, u32 header)
{
    u32 *cursor = g_commandBufferCursor;
    if (cursor < g_commandBufferEnd) {
        cursor[0] = value;
        cursor[1] = header;
        g_commandBufferCursor = cursor + 2;
    }
}

// Emit viewport scale/reciprocal/origin registers and remember the current viewport.
extern "C" void FUN_00195d0c(u32 x, u32 y, s32 width, s32 height)
{
    ViewportBindingState *state = g_textureBindingState;
    viewportWriteCommand(viewportFloat24((f32)width * 0.5f), 0xf0041);
    viewportWriteCommand(viewportFloat24((f32)height * 0.5f), 0xf0043);
    if (width != 0 && height != 0) {
        u32 dimensions[2] = { (u32)width, (u32)height };
        for (s32 index = 0; index < 2; ++index) {
            switch ((s32)dimensions[index]) {
            case 240: dimensions[index] = 0x38111111; break;
            case 320: dimensions[index] = 0x37999999; break;
            case 400: dimensions[index] = 0x3747ae14; break;
            case 480: dimensions[index] = 0x37111111; break;
            case 600: dimensions[index] = 0x36b4e81b; break;
            case 640: dimensions[index] = 0x36999999; break;
            case 800: dimensions[index] = 0x3647ae14; break;
            case 1024: dimensions[index] = 0x36000000; break;
            case 1200: dimensions[index] = 0x35b4e81b; break;
            case 1280: dimensions[index] = 0x35999999; break;
            default:
                dimensions[index] = viewportFloat31(2.0f / (f32)dimensions[index]) << 1;
                break;
            }
            viewportWriteCommand(dimensions[index], 0xf0000 | (0x42 + index * 2));
        }
    }
    viewportWriteCommand(x | (y << 16), 0xf0068);
    state->x = x;
    state->y = y;
    state->width = width;
    state->height = height;
    if (!state->initialized)
        state->initialized = 1;
}
