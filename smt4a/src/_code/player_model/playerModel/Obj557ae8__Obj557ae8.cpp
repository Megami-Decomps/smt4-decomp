#include "classes/Obj557ae8.h"
extern "C" {
void* asdMemoryAllocTraced(u32, const char*, u32);
}

Obj557ae8::Obj557ae8()
{
    unk04 = 0;
    owned = NULL;
    unk18 = 1;
    void* storage = asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\player_model\\playerModel.cpp", 24);
    owned = storage != NULL ? modelListInit(storage) : NULL;
    for (s32 index = 0; index < 3; ++index) {
        storage = asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\player_model\\playerModel.cpp", 27);
        MoriModelContent *child = storage != NULL ? modelListInit(storage) : NULL;
        slots[index].child = child;
    }
}
