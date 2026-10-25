#include "AsdSDK/Source/Gfx/Model/AsdModelProcess.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct AsdModelProcessOwner {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ AsdModelProcessSet processes;
};

typedef u32 (*ModelProcessCallback)();

extern "C" {
u32 FUN_00145f94();
u32 FUN_00146048();
u32 FUN_00146314();
u32 FUN_00146040();
void asdProcessSetAuxiliaryCallback(u32 process, ModelProcessCallback callback);

void FUN_0013b3d0(AsdModelProcessOwner *owner, u32 calculatePriority,
                  u32 upperDrawPriority, u32 lowerDrawPriority)
{
    owner->processes.handle[0] = asdProcessCreateSimple(reinterpret_cast<const s8 *>("h3dModelCalcProc"), calculatePriority, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00145f94), 0, reinterpret_cast<u32>(owner));
    owner->processes.handle[1] = asdProcessCreateSimple(reinterpret_cast<const s8 *>("h3dModelDrawUpProc"), upperDrawPriority, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00146048), 0, reinterpret_cast<u32>(owner));
    asdProcessSetAuxiliaryCallback(owner->processes.handle[1], FUN_00146314);
    owner->processes.handle[2] = asdProcessCreateSimple(reinterpret_cast<const s8 *>("h3dModelDrawDwProc"), lowerDrawPriority, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00146040), 0, reinterpret_cast<u32>(owner));
}
}
