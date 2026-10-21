/* NON_MATCHING: constructor requires native class recovery; member initialization and saved registers differ. */
#include "common.h"

struct RequestState {
    u8 unk00[0x6c]; // 0x00
    u32 first;       // 0x6c
    u32 second;      // 0x70
    s32 status;      // 0x74
    u32 unk78;       // 0x78
    u32 third;       // 0x7c
    u32 fourth;      // 0x80
    u32 parameter;   // 0x84
    u32 fifth;       // 0x88
    u32 context;     // 0x8c
};

struct RequestObject {
    const void* vtable; // 0x00
    RequestState state; // 0x04
};

extern "C" {
extern const u32 DAT_0055b2d0[];
RequestState* FUN_002fd5d4(RequestState* state, u32 first, u32 second, u32 parameter);
void FUN_002fe39c(RequestObject* object, u32 second);

// Initialize request state and bind its request-specific parameters.
RequestObject* FUN_002fe4f8(RequestObject* object, u32 first, u32 second, u32 parameter, u32 context)
{
    object->vtable = DAT_0055b2d0;
    FUN_002fd5d4(&object->state, first, second, parameter);
    object->state.second = 0;
    object->state.first = 0;
    object->state.status = -1;
    object->state.fourth = 0;
    object->state.third = 0;
    object->state.context = context;
    object->state.parameter = parameter;
    object->state.fifth = 0;
    FUN_002fe39c(object, second);
    return object;
}
}
