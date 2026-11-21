/* NON_MATCHING: armcc pairs the access group's float stores (0x1c-0x28) and the stencil reference and mask with
   vstm/stm through an extra saved register where retail stores them one by one, and the placement new adds a
   NULL test retail's constructor does not have (the function is the render state's constructor, still named in C). */
#include "common.h"
#include <new>
#include <stddef.h>

struct ScreenElementStyle;

/* unit-local: the GPU render state this constructor builds (the CTR-SDK gr library's RenderState layout); each
 * group keeps a reference back to the whole state, set by its own constructor in member order. */
struct ScreenElementBlend {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 colorEquation;
    /* 0x02 */ u8 alphaEquation;
    /* 0x03 */ u8 colorSource;
    /* 0x04 */ u8 alphaSource;
    /* 0x05 */ u8 colorDestination;
    /* 0x06 */ u8 alphaDestination;
    /* 0x07 */ u8 red;
    /* 0x08 */ u8 green;
    /* 0x09 */ u8 blue;
    /* 0x0A */ u8 alpha;
    /* 0x0C */ const ScreenElementStyle &owner;

    ScreenElementBlend(const ScreenElementStyle &style)
        : enabled(0), colorEquation(0), alphaEquation(0), colorSource(6), alphaSource(6), colorDestination(7),
          alphaDestination(7), red(0xff), green(0xff), blue(0xff), alpha(0xff), owner(style)
    {
    }
};

struct ScreenElementLogicOp {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 operation;
    /* 0x04 */ const ScreenElementStyle &owner;

    ScreenElementLogicOp(const ScreenElementStyle &style) : enabled(0), operation(6), owner(style) {}
};

struct ScreenElementAccess {
    /* 0x00 */ u8 overrideAccess;
    /* 0x01 */ u8 enabled;
    /* 0x04 */ f32 colorMinimum;
    /* 0x08 */ f32 colorMaximum;
    /* 0x0C */ f32 alphaMinimum;
    /* 0x10 */ f32 alphaMaximum;
    /* 0x14 */ const ScreenElementStyle &owner;

    ScreenElementAccess(const ScreenElementStyle &style)
        : overrideAccess(0), enabled(1), colorMinimum(0.0f), colorMaximum(1.0f), alphaMinimum(0.0f),
          alphaMaximum(1.0f), owner(style)
    {
    }
};

struct ScreenElementAlphaTest {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 reference;
    /* 0x02 */ u8 function;
    /* 0x04 */ const ScreenElementStyle &owner;

    ScreenElementAlphaTest(const ScreenElementStyle &style) : enabled(0), reference(0), function(0), owner(style) {}
};

struct ScreenElementStencil {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 writeMask;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u8 function;
    /* 0x08 */ s32 reference;
    /* 0x0C */ u32 mask;
    /* 0x10 */ u8 failOperation;
    /* 0x11 */ u8 depthFailOperation;
    /* 0x12 */ u8 passOperation;
    /* 0x14 */ const ScreenElementStyle &owner;

    ScreenElementStencil(const ScreenElementStyle &style)
        : enabled(0), writeMask(0xff), function(1), reference(0), mask(0xff), failOperation(0),
          depthFailOperation(0), passOperation(0), owner(style)
    {
    }
};

struct ScreenElementDepth {
    /* 0x00 */ u8 colorWriteMask;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 write;
    /* 0x06 */ u8 function;
    /* 0x08 */ const ScreenElementStyle &owner;

    ScreenElementDepth(const ScreenElementStyle &style)
        : colorWriteMask(0xf), enabled(1), write(1), function(4), owner(style)
    {
    }
};

struct ScreenElementOutput {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 color;
    /* 0x02 */ u8 depth;
    /* 0x04 */ const ScreenElementStyle &owner;

    ScreenElementOutput(const ScreenElementStyle &style) : enabled(1), color(1), depth(1), owner(style) {}
};

struct ScreenElementDepthRange {
    /* 0x00 */ f32 polygonOffset;
    /* 0x04 */ u8 polygonOffsetEnabled;
    /* 0x08 */ f32 depthOffset;
    /* 0x0C */ f32 depthMinimum;
    /* 0x10 */ f32 depthMaximum;
    /* 0x14 */ u8 depthBits;
    /* 0x18 */ const ScreenElementStyle &owner;

    ScreenElementDepthRange(const ScreenElementStyle &style)
        : polygonOffset(0.0f), polygonOffsetEnabled(0), depthOffset(0.0f), depthMinimum(0.0f), depthMaximum(1.0f),
          depthBits(0x18), owner(style)
    {
    }
};

/* Display style of one screen element: groups of fields that each point back at the owning style. */
struct ScreenElementStyle {
    /* 0x00 */ ScreenElementBlend blend;
    /* 0x10 */ ScreenElementLogicOp logicOp;
    /* 0x18 */ ScreenElementAccess access;
    /* 0x30 */ ScreenElementAlphaTest alphaTest;
    /* 0x38 */ ScreenElementStencil stencil;
    /* 0x50 */ ScreenElementDepth depth;
    /* 0x5C */ ScreenElementOutput output;
    /* 0x64 */ ScreenElementDepthRange depthRange;

    ScreenElementStyle()
        : blend(*this), logicOp(*this), access(*this), alphaTest(*this), stencil(*this), depth(*this),
          output(*this), depthRange(*this)
    {
    }
};
typedef char ScreenElementStyleLayout[sizeof(ScreenElementStyle) == 0x80 &&
    offsetof(ScreenElementStyle, logicOp) == 0x10 && offsetof(ScreenElementStyle, access) == 0x18 &&
    offsetof(ScreenElementStyle, alphaTest) == 0x30 && offsetof(ScreenElementStyle, stencil) == 0x38 &&
    offsetof(ScreenElementStyle, depth) == 0x50 && offsetof(ScreenElementStyle, output) == 0x5C &&
    offsetof(ScreenElementStyle, depthRange) == 0x64 ? 1 : -1];

/* Resets a screen element style to its defaults. */
extern "C" void gxDrawSettingsInitDefaults(ScreenElementStyle *style)
{
    new (style) ScreenElementStyle;
}
