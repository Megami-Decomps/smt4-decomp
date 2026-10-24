/* NON_MATCHING: near (208 rows against 210): same virtual calls, float24/float31 packing (sign, 7-bit exponent, mantissa clamp rules from the asm), command-word layout, clamp and constants; retail copies the two viewport words through VFP registers (vldr/vstr) and loads the rect x/y pair with vldmia where ours uses plain word copies and separate loads, and keeps the conversion helpers' intermediates in r6-r8 differently */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

/* Render target as the model code sees it (observed virtual slots only). */
class AsdRenderTarget {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual const f32 *getViewportInfo();   /* 0x0C */
    virtual void begin();                   /* 0x10 */
};

struct AsdModelRenderer {
    u8 pad00[0x18];
    AsdRenderTarget *target;                /* 0x18 */
};

union FloatBits {
    f32 value;
    u32 bits;
};

extern f32 DAT_00472094;                    /* 0x472094: viewport x of the current target */
extern f32 DAT_00472098;                    /* 0x472098: viewport y of the current target */
extern f32 DAT_004720f4;                    /* 0x4720f4: depth range start */
extern f32 DAT_004720f8;                    /* 0x4720f8: depth range end */
extern u32 DAT_004720a0;                    /* 0x4720a0: depth range as a float24 */
extern u32 DAT_004720ec;                    /* 0x4720ec: target format */
extern u32 *g_commandBufferCursor;          /* 0x4652a0 */

s32 FUN_003e3494(void);
u32 *nw_gfx_internal_FastWordCopyAsm_8(u32 *destination, const u32 *source);

/* Converts a float to the GPU's 24-bit float format (sign, 7-bit exponent, 16-bit mantissa). */
static u32 floatToFloat24(f32 value)
{
    FloatBits v;
    v.value = value;
    u32 out = 0;
    if ((v.bits & 0x80000000) != 0) {
        out = 0x800000;
    }
    u32 mantissa = (v.bits & 0x7FFFFF) >> 7;
    if ((v.bits & 0x7FFFFFFF) == 0) {
        return mantissa | out;
    }
    s32 exponent = (s32)((v.bits & 0x7FFFFFFF) >> 23) - 0x40;
    if (exponent < 0) {
        return out;
    }
    if (exponent > 127) {
        return 0x7F0000;
    }
    return mantissa | out | ((u32)(exponent & 0x7F) << 16);
}

/* Converts a float to the GPU's 31-bit float format (sign, 7-bit exponent, 23-bit mantissa). */
static u32 floatToFloat31(f32 value)
{
    FloatBits v;
    v.value = value;
    u32 out = 0;
    if ((v.bits & 0x80000000) != 0) {
        out = 0x40000000;
    }
    u32 mantissa = v.bits & 0x7FFFFF;
    if ((v.bits & 0x7FFFFFFF) == 0) {
        return mantissa | out;
    }
    s32 exponent = (s32)((v.bits & 0x7FFFFFFF) >> 23) - 0x40;
    if (exponent < 0) {
        return out;
    }
    if (exponent > 127) {
        return 0x3F800000;
    }
    return mantissa | out | ((u32)(exponent & 0x7F) << 23);
}

static f32 clamp01(f32 value)
{
    f32 result = 0.0f;
    if (value > 1.0f) {
        result = 1.0f;
    } else if (value >= result) {
        result = value;
    }
    return result;
}

/* Binds `target` to the model renderer and writes its viewport (x, y, width, height of `rect`) and
 * depth range to the GPU command buffer. `rect` is {left, top, right, bottom, near, far}. */
void FUN_00364ebc(AsdModelRenderer *renderer, AsdRenderTarget *target, const f32 *rect)
{
    renderer->target = target;
    if (target == 0) {
        return;
    }
    target->begin();
    FUN_003e3494();

    DAT_00472094 = renderer->target->getViewportInfo()[0];
    DAT_00472098 = renderer->target->getViewportInfo()[1];

    u32 x = (u32)rect[0];
    u32 y = (u32)rect[1];
    u32 words[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    words[0] = floatToFloat24((rect[2] - rect[0]) * 0.5f);
    words[1] = 0x803F0041;
    words[2] = floatToFloat31(2.0f / (rect[2] - rect[0])) << 1;
    words[3] = floatToFloat24((rect[3] - rect[1]) * 0.5f);
    words[4] = floatToFloat31(2.0f / (rect[3] - rect[1])) << 1;
    words[6] = (x & 0xFFFF) | ((y & 0xFFFF) << 16);
    words[7] = 0xF0068;
    g_commandBufferCursor = nw_gfx_internal_FastWordCopyAsm_8(g_commandBufferCursor, words);

    DAT_004720f4 = clamp01(rect[4]);
    DAT_004720f8 = clamp01(rect[5]);
    DAT_004720a0 = floatToFloat24(DAT_004720f4 - DAT_004720f8);
    DAT_004720ec = *(const u16 *)((const u8 *)renderer->target->getViewportInfo() + 10);
}

} /* extern "C" */
