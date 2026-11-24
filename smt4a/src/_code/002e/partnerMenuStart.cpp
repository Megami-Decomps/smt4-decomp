/* NON_MATCHING: only the process callback's pool load differs: retail loads it into r1 after the owner store, the build into r2 before it. */
#include "code/Code0015_Smt4a.h"
#include "sys/CallbackOwner.h"
#include "ui/PartnerSelectMenu.h"

extern "C" {
s32 callbackDispatchToPresentOwner(u32 process);
s32 FUN_0031d85c(u32 process);
s32 FUN_0031d7cc(u32 process);
extern CallbackOwnerSlots g_callbackOwnerSlots;

/* Starts the partner selection process, enabling draw jobs in visual modes. */
void partnerMenuStart(s32 mode)
{
    g_callbackOwnerSlots.owner = (CallbackOwner *)new PartnerSelectMenu();
    PartnerSelectMenu *work = (PartnerSelectMenu *)g_callbackOwnerSlots.owner;
    work->process = asdProcessCreateSimple((const s8 *)"PARTNER PROC", 4, 0, 0, callbackDispatchToPresentOwner, NULL, 0);
    if (mode != PARTNER_MENU_MODE_NONVISUAL) {
        taskCreateDraw((const s8 *)"PARTNER UL", 126, 0, 0, FUN_0031d85c, NULL, 0, (void *)work->process);
        taskCreateDraw((const s8 *)"PARTNER UR", 218, 0, 0, FUN_0031d85c, NULL, 0, (void *)work->process);
        taskCreateDraw((const s8 *)"PARTNER DD", 235, 0, 0, FUN_0031d7cc, NULL, 0, (void *)work->process);
    }
    partnerMenuHandleSelectionInput(work, mode);
}

} /* extern "C" */
