#pragma once
#include "common.h"

/* nw::gfx::Result: the result of a NintendoWare gfx setup step (Fog::Initialize, the resource setup and
 * binding functions). The top bit marks failure; results accumulate with |=, and armcc keeps those ORs
 * even where the value so far is known to be zero (retail's `orr r4, r4, r0` with r4 = 0 in
 * resourceDispatchResolvePayload, where a plain u32 folds the OR away). */
struct GfxResult {
    GfxResult() : value(0) {}
    GfxResult(u32 code) : value(code) {}
    GfxResult &operator|=(GfxResult other)
    {
        value |= other.value;
        return *this;
    }
    bool isFailure() const { return (s32)(value & 0x80000000) < 0; }
    /* 0x00 */ u32 value;
};
typedef char GfxResultSizeCheck[sizeof(GfxResult) == 4 ? 1 : -1];
