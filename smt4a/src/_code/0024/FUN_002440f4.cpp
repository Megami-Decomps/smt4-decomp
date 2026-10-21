/* NON_MATCHING: retail uses ldrne r4, [pc, #224] where the compiled block uses ldr r4, [pc, #204]. */
#include "common.h"

struct ResourceObject {
    u8 unknown_00[0x20]; // 0x00
};

struct ResourceState {
    u8 unknown_00[0x0C];       // 0x00
    ResourceObject* first;     // 0x0C
    ResourceObject* second;    // 0x10
    ResourceObject* third;     // 0x14
    u8 unknown_18[0xB0];       // 0x18
    ResourceObject* fourth;    // 0xC8
    ResourceObject* fifth;     // 0xCC
    ResourceObject* sixth;     // 0xD0
};

extern "C" {
extern ResourceState g_battleViewState;
extern const char DAT_00531448[];
extern const char DAT_00531478[];
extern const char DAT_0053148c[];
extern const char DAT_005314a4[];
extern const char DAT_005314bc[];
extern const char DAT_005314d4[];
extern const char DAT_005314ec[];

s32 gameFlagIsSet(u32 flag);
ResourceObject* FUN_00178b04(u32 size, const char* sourceFile, u32 sourceLine);
ResourceObject* FUN_0040ac08(ResourceObject* storage);
void FUN_001cd3ec(ResourceObject* object, const char* name);

void FUN_002440f4(void)
{
    if (gameFlagIsSet(0x4D0)) {
        ResourceObject* object = FUN_00178b04(0x20, DAT_00531448, 0x233);
        if (object) {
            object = FUN_0040ac08(object);
        }
        g_battleViewState.first = object;
        FUN_001cd3ec(object, DAT_00531478);

        object = FUN_00178b04(0x20, DAT_00531448, 0x236);
        if (object) {
            object = FUN_0040ac08(object);
        }
        g_battleViewState.second = object;
        FUN_001cd3ec(object, DAT_0053148c);

        object = FUN_00178b04(0x20, DAT_00531448, 0x239);
        if (object) {
            object = FUN_0040ac08(object);
        }
        g_battleViewState.third = object;
        FUN_001cd3ec(object, DAT_005314a4);

        object = FUN_00178b04(0x20, DAT_00531448, 0x23C);
        if (object) {
            object = FUN_0040ac08(object);
        }
        g_battleViewState.fourth = object;
        FUN_001cd3ec(object, DAT_005314bc);

        object = FUN_00178b04(0x20, DAT_00531448, 0x23F);
        if (object) {
            object = FUN_0040ac08(object);
        }
        g_battleViewState.fifth = object;
        FUN_001cd3ec(object, DAT_005314d4);

        object = FUN_00178b04(0x20, DAT_00531448, 0x242);
        if (object) {
            object = FUN_0040ac08(object);
        }
        g_battleViewState.sixth = object;
        FUN_001cd3ec(object, DAT_005314ec);
    }
}
}
