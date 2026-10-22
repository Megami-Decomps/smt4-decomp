#include "common.h"

// Private views of the script context and its trailing value storage.
union ScriptValueView {
    s32 integer;
    f32 real;
};

struct ScriptStackView {
    u8 unk00[0x1c];       // 0x00
    s32 valueCount;       // 0x1c
    u8 valueTypes[0x1c];  // 0x20
    ScriptValueView values[1]; // 0x3c: trailing storage, extent unknown
};

struct ScriptContextView {
    u8 unk00[0x20];       // 0x00
    ScriptStackView* stack; // 0x20
};

extern "C" {
extern ScriptContextView g_scrContext;
extern s32 g_scrIntVars[];
extern f32 g_scrFloatVars[];

// Read a stack value relative to the top and convert it to a float.
f32 scriptReadStackValueAsFloat(s32 depth)
{
    ScriptStackView* stack = g_scrContext.stack;
    s32 index = stack->valueCount - depth - 1;

    switch (stack->valueTypes[index]) {
    case 0:
    case 4:
        return static_cast<f32>(stack->values[index].integer);
    case 1:
        return stack->values[index].real;
    case 2:
        return static_cast<f32>(g_scrIntVars[stack->values[index].integer]);
    case 3:
        return g_scrFloatVars[stack->values[index].integer];
    default:
        return 0.0f;
    }
}
}
