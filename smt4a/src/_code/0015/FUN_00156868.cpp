#include "common.h"

struct Object {
    u8 unk00[0x40]; // 0x00
    u8 unk40;       // 0x40
};

extern "C" Object* FUN_001ad9b4(void);

extern "C" u8* FUN_00156868(void)
{
    Object* object = FUN_001ad9b4();
    return object ? &object->unk40 : 0;
}
