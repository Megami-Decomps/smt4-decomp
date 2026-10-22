#include "AsdSDK/Source/Gfx/Model/AsdModelProcess.h"

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
u32 asdProcessCreateSimple(const char *name, u32 priority, u32 flags, u32 parent,
                           ModelProcessCallback step, ModelProcessCallback destroy, void *work);
void asdProcessSetAuxiliaryCallback(u32 process, ModelProcessCallback callback);

void FUN_0013b3d0(AsdModelProcessOwner *owner, u32 calculatePriority,
                  u32 upperDrawPriority, u32 lowerDrawPriority)
{
    owner->processes.handle[0] = asdProcessCreateSimple(
        "h3dModelCalcProc", calculatePriority, 0, 0, FUN_00145f94, 0, owner);
    owner->processes.handle[1] = asdProcessCreateSimple(
        "h3dModelDrawUpProc", upperDrawPriority, 0, 0, FUN_00146048, 0, owner);
    asdProcessSetAuxiliaryCallback(owner->processes.handle[1], FUN_00146314);
    owner->processes.handle[2] = asdProcessCreateSimple(
        "h3dModelDrawDwProc", lowerDrawPriority, 0, 0, FUN_00146040, 0, owner);
}
}
