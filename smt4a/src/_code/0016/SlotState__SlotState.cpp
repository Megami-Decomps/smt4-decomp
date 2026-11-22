/* NON_MATCHING: 114 lines; the member constructors give retail's store order (each block's owner pointer after its fields), but the constants and the owner live in other registers (retail: 0 in r3, 6 in r1 copied to r5 for the logic operation, the depth block's owner through a copy in r1) */
#include "common.h"
#include <stddef.h>

class SlotState;

/* unit-local: the cached GPU draw settings, one block per command group, each pointing back at its owner */
struct SlotBlendState {
    u8 enabled, unk01, unk02, sourceFactor, destinationFactor;
    u8 colorEquation, alphaEquation, red, green, blue, alpha, unk0B;
    SlotState *owner;
    SlotBlendState(SlotState *o) : enabled(0), unk01(0), unk02(0), sourceFactor(6), destinationFactor(6),
        colorEquation(7), alphaEquation(7), red(255), green(255), blue(255), alpha(255), owner(o) {}
};
struct SlotLogicState {
    u8 enabled, operation, unk02[2];
    SlotState *owner;
    SlotLogicState(SlotState *o) : enabled(0), operation(6), owner(o) {}
};
struct SlotAccessState {
    u8 override, enabled, unk02[2];
    f32 colorMinimum, colorMaximum, alphaMinimum, alphaMaximum;
    SlotState *owner;
    SlotAccessState(SlotState *o) : override(0), enabled(1), colorMinimum(0.0f), colorMaximum(1.0f),
        alphaMinimum(0.0f), alphaMaximum(1.0f), owner(o) {}
};
struct SlotAlphaState {
    u8 enabled, reference, function, unk03;
    SlotState *owner;
    SlotAlphaState(SlotState *o) : enabled(0), reference(0), function(0), owner(o) {}
};
struct SlotStencilState {
    u8 enabled, write, unk02[2], function, unk05[3];
    u32 reference, mask;
    u8 fail, depthFail, pass, unk13;
    SlotState *owner;
    SlotStencilState(SlotState *o) : enabled(0), write(255), function(1), reference(0), mask(255), fail(0),
        depthFail(0), pass(0), owner(o) {}
};
struct SlotDepthState {
    u8 colorWriteMask, unk01[3];
    u8 enabled, write, function, unk07;
    SlotState *owner;
    SlotDepthState(SlotState *o) : colorWriteMask(15), enabled(1), write(1), function(4), owner(o) {}
};
struct SlotOutputState {
    u8 enabled, color, depth, unk03;
    SlotState *owner;
    SlotOutputState(SlotState *o) : enabled(1), color(1), depth(1), owner(o) {}
};
struct SlotDepthRangeState {
    f32 polygonOffset;
    u8 polygonOffsetEnabled, unk05[3];
    f32 offset, minimum, maximum;
    u8 bits, unk15[3];
    SlotState *owner;
    SlotDepthRangeState(SlotState *o) : polygonOffset(0.0f), polygonOffsetEnabled(0), offset(0.0f),
        minimum(0.0f), maximum(1.0f), bits(24), owner(o) {}
};

class SlotState {
public:
    SlotState();
    SlotBlendState blend;
    SlotLogicState logic;
    SlotAccessState access;
    SlotAlphaState alpha;
    SlotStencilState stencil;
    SlotDepthState depth;
    SlotOutputState output;
    SlotDepthRangeState depthRange;
};
typedef char SlotStateLayout[sizeof(SlotState) == 0x80 && offsetof(SlotState, stencil) == 0x38 &&
    offsetof(SlotState, depthRange) == 0x64 ? 1 : -1];

/* Initializes the cached GPU draw settings and their owner back-pointers. */
SlotState::SlotState()
    : blend(this), logic(this), access(this), alpha(this), stencil(this), depth(this), output(this), depthRange(this)
{
}
