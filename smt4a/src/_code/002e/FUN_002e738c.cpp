/* NON_MATCHING: native work construction recovered; nullable-constructor result, callback/global pools and child-task argument scheduling differ. */
/* Starts the partner process and its draw jobs unless the requested mode is nonvisual. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "sys/CallbackOwner.h"

extern "C" {
void *asdOperatorNew(u32 bytes);

struct PartnerWork {
    u32 process;
    u8 unk004[0x310];
    u32 resource;
    u8 unk318[0x90];

    PartnerWork() : resource(0) {}
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
};

u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
s32 callbackDispatchToPresentOwner(u32 process);
s32 FUN_0031d85c(u32 process);
s32 FUN_0031d7cc(u32 process);
void FUN_004bd794(void *work, s32 mode);
extern CallbackOwnerSlots g_callbackOwnerSlotsF0;

void FUN_002e738c(s32 mode)
{
    PartnerWork *work = new PartnerWork();
    g_callbackOwnerSlotsF0.owner = (CallbackOwner *)work;
    work->process = asdProcessCreateSimple((const s8 *)"PARTNER PROC", 4, 0, 0, callbackDispatchToPresentOwner, NULL, 0);
    if (mode != 1) {
        taskCreateDraw((const s8 *)"PARTNER UL", 126, 0, 0, FUN_0031d85c, NULL, 0, (void *)work->process);
        taskCreateDraw((const s8 *)"PARTNER UR", 218, 0, 0, FUN_0031d85c, NULL, 0, (void *)work->process);
        taskCreateDraw((const s8 *)"PARTNER DD", 235, 0, 0, FUN_0031d7cc, NULL, 0, (void *)work->process);
    }
    FUN_004bd794(work, mode);
}
}
