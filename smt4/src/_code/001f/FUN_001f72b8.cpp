#include "common.h"

extern "C" s32 effGetFrameCounter(void);

struct Object {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 frames;
};

extern "C" void FUN_001f72b8(Object *object)
{
    object->frames += effGetFrameCounter();
}
