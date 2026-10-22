/* NON_MATCHING: The explicit controller-array initialization retains the owner instead of recovering it from the runtime helper result. */
#include "classes/Obj557ae8.h"
struct ControllerState;
struct ModelList;
extern "C" {
void controllerInitState(ControllerState*);
void* __aeabi_vec_ctor_nocookie_nodtor(void*, void (*)(ControllerState*), u32, u32);
void* FUN_00178b04(u32, const char*, u32);
ModelList* modelListInit(ModelList*);
}

Obj557ae8::Obj557ae8()
{
    __aeabi_vec_ctor_nocookie_nodtor(slots, controllerInitState, sizeof(Obj557ae8Slot), 3);
    unk04 = 0;
    owned = NULL;
    unk18 = 1;
    void* storage = FUN_00178b04(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\player_model\\playerModel.cpp", 24);
    owned = storage != NULL ? (Obj557ae8Child*)modelListInit((ModelList*)storage) : NULL;
    for (s32 index = 0; index < 3; ++index) {
        storage = FUN_00178b04(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\player_model\\playerModel.cpp", 27);
        slots[index].child = storage != NULL ? (Obj557ae8Child*)modelListInit((ModelList*)storage) : NULL;
    }
}
