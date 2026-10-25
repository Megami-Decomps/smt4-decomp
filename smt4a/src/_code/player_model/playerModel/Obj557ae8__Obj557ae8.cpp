#include "classes/Obj557ae8.h"
struct ModelList;
extern "C" {
void* FUN_00178b04(u32, const char*, u32);
ModelList* modelListInit(ModelList*);
}

Obj557ae8::Obj557ae8()
{
    unk04 = 0;
    owned = NULL;
    unk18 = 1;
    void* storage = FUN_00178b04(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\player_model\\playerModel.cpp", 24);
    owned = storage != NULL ? (Obj557ae8Child*)modelListInit((ModelList*)storage) : NULL;
    for (s32 index = 0; index < 3; ++index) {
        storage = FUN_00178b04(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\player_model\\playerModel.cpp", 27);
        Obj557ae8Child *child = storage != NULL ? (Obj557ae8Child*)modelListInit((ModelList*)storage) : NULL;
        slots[index].child = child;
    }
}
