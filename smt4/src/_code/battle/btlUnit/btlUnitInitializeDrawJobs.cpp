/* NON_MATCHING: retail peels the first draw-callback allocation and pass initialization; typed two-pass loop and descriptor stores use different scheduling/registers; -O2 candidate. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct BattleUnitDrawWork {
    u32 owner;
    u8 unk04[0x30];
    u32 calculationJob;
};
struct BattleUnitDrawOwner {
    const void *vtable;
    BattleUnitDrawWork *work;
    u8 unk08[0xc];
};
struct BattleUnitDrawObject;
struct BattleUnitDrawCallback {
    const void *vtable;
    BattleUnitDrawObject *object;
    BattleUnitDrawOwner *owner;
};
struct BattleUnitDrawObject {
    u8 unk000[0x148];
    u8 mode, layer, pass, unk14b;
    BattleUnitDrawCallback *callback;
};
struct BattleUnitDrawDescription {
    u8 format, enabled;
    u8 unk02[2];
    u32 capacityA, capacityB, capacityC;
    u8 mode, layer, pass, unk13;
    BattleUnitDrawCallback *callback;
};
struct BattleUnitDrawGlobals { u32 unk00; BattleUnitDrawOwner *owner; };
struct BattleUnitDrawSlot { BattleUnitDrawObject *object; BattleUnitDrawCallback *callback; };
extern "C" {
extern BattleUnitDrawGlobals DAT_00439ce0;
extern BattleUnitDrawSlot DAT_0049356c[2];
extern const u8 _ZTV9Obj4209cc[];
extern const u8 DAT_00420774, DAT_004208ec;
u32 taskCreateDraw(const char *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, BattleUnitDrawWork *, u32);
s32 FUN_001b7a0c(u32);
void btlUnitDestroyDrawJobs(u32);
s32 jobFrameCounterAdvance(u32);
void *asdOperatorNew(u32);
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
void *asdMemoryGetAllocatorA();
BattleUnitDrawObject *_ZN9Obj4212b46createEPK16Obj4212b4RequestP18AsdAllocatorObject(const BattleUnitDrawDescription *, void *);
void FUN_001c0998(BattleUnitDrawObject *, u32);

void btlUnitInitializeDrawJobs(BattleUnitDrawWork *work)
{
    work->calculationJob = taskCreateDraw("btlUnit Calc", 2, 0, 0, FUN_001b7a0c, btlUnitDestroyDrawJobs, work, work->owner);
    taskCreateDraw("btlUnit Draw", 111, 0, 0, jobFrameCounterAdvance, NULL, work, work->calculationJob);
    BattleUnitDrawOwner *owner = (BattleUnitDrawOwner *)asdOperatorNew(sizeof(BattleUnitDrawOwner));
    if (owner) {
        owner->vtable = &_ZTV9Obj4209cc[0x18];
        owner->work = work;
    }
    DAT_00439ce0.owner = owner;
    for (s32 i = 0; i < 2; ++i) {
        if (i == 1)
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlUnit.cpp", 221);
        BattleUnitDrawCallback *callback = (BattleUnitDrawCallback *)asdMemoryAlloc(0x10000, 0x100, 0, sizeof(BattleUnitDrawCallback), 1);
        if (callback) {
            callback->vtable = i == 0 ? &DAT_00420774 : &DAT_004208ec;
            callback->owner = DAT_00439ce0.owner;
        }
        DAT_0049356c[i].callback = callback;
        BattleUnitDrawDescription description;
        description.format = 0;
        description.enabled = 1;
        description.capacityA = 4;
        description.capacityB = 8;
        description.capacityC = 1;
        description.mode = 0;
        description.layer = 0;
        description.pass = 0;
        description.callback = NULL;
        BattleUnitDrawObject *object = _ZN9Obj4212b46createEPK16Obj4212b4RequestP18AsdAllocatorObject(&description, asdMemoryGetAllocatorA());
        DAT_0049356c[i].object = object;
        callback = DAT_0049356c[i].callback;
        if (object->callback)
            object->callback->object = NULL;
        object->callback = callback;
        callback->object = object;
        FUN_001c0998(DAT_0049356c[i].object, 1);
        object = DAT_0049356c[i].object;
        object->pass = i == 0 ? 2 : 3;
        object->mode = 0;
        object->layer = 11;
    }
}
}
