/* NON_MATCHING: retail writes the three vectors through a walking pointer (vstmia + add) and clears the counters with STM from a zeroed register pair; ours addresses them at fixed offsets and uses separate stores. */
#include "common.h"

struct InitializationArguments {
    u32 unk00[2]; // 0x00
    u32 first;    // 0x08
    u32 second;   // 0x0c
};
struct InitializationCounters {
    u32 first;
    u32 second;
};
struct Vec3f {
    f32 x, y, z;
};
struct ElementSlot {
    u32 storage[0x544 / 4];
};
/* The scene's camera block: nine floats, a cookie word and two 0x544-byte elements. */
struct SceneCameraBlock {
    Vec3f position;       // 0x00
    Vec3f offset;         // 0x0C
    Vec3f up;             // 0x18
    u32 unk24;            // 0x24
    ElementSlot elements[2]; // 0x28
};

extern "C" {
extern InitializationCounters DAT_0044ea68;
extern SceneCameraBlock DAT_004d4924;
extern u8 entry;
void FUN_0033b5a0(void *element);
void vecContainerDestroy(void *container);
void *__aeabi_vec_ctor_nocookie_nodtor(void *elements, void (*constructor)(void *), u32 stride, u32 count);
s32 __aeabi_atexit(void *object, void (*destructor)(void *), void *module);

// Initializes the scene camera block and registers its destructor.
s32 FUN_003ed6c0(u32 first, u32 second, InitializationArguments *arguments)
{
    arguments->first = first;
    arguments->second = second;
    DAT_0044ea68.first = 0;
    DAT_0044ea68.second = 0;
    DAT_004d4924.position.x = 0.0f;
    DAT_004d4924.position.y = 100.0f;
    DAT_004d4924.position.z = 1280.0f;
    DAT_004d4924.offset.x = 0.0f;
    DAT_004d4924.offset.y = 0.0f;
    DAT_004d4924.offset.z = 0.0f;
    DAT_004d4924.up.x = 0.0f;
    DAT_004d4924.up.y = 1.0f;
    DAT_004d4924.up.z = 0.0f;
    u8 *elements = static_cast<u8 *>(
        __aeabi_vec_ctor_nocookie_nodtor(DAT_004d4924.elements, FUN_0033b5a0, sizeof(ElementSlot), 2));
    return __aeabi_atexit(elements - 4, vecContainerDestroy, &entry);
}
}
