#include "classes/Obj4223c4.h"

void Obj4223c4::resetHandlers()
{
    for (s32 i = 0; i < 14; ++i) {
        handlers[i] = NULL;
        enterHandlers[i] = NULL;
        leaveHandlers[i] = NULL;
    }
    handlers[0] = &Obj4223c4::FUN_003a76b8;
    handlers[1] = &Obj4223c4::FUN_003a7834;
    handlers[2] = &Obj4223c4::devilListUpdatePreviewAndVisibility;
    handlers[3] = &Obj4223c4::FUN_003a8240;
    handlers[4] = &Obj4223c4::shopPurchaseConfirmSelected;
    handlers[5] = &Obj4223c4::FUN_003a7f98;
    handlers[6] = &Obj4223c4::FUN_003a836c;
    handlers[7] = &Obj4223c4::bibleApplyConfirmedSelection;
    handlers[8] = &Obj4223c4::partyRefreshCompleteAndUpdateSummaries;
    handlers[9] = &Obj4223c4::devilListUpdatePreviewAndVisibility;
    handlers[10] = &Obj4223c4::FUN_003a6e68;
    handlers[11] = &Obj4223c4::FUN_003a7b54;
    handlers[12] = &Obj4223c4::enableKindThirteen;
    leaveHandlers[1] = &Obj42247c::drawList;
    leaveHandlers[2] = &Obj42247c::drawList;
    leaveHandlers[3] = &Obj42247c::FUN_003a8310;
    leaveHandlers[4] = &Obj42247c::FUN_003a8310;
    leaveHandlers[5] = &Obj42247c::FUN_003a8308;
    leaveHandlers[6] = &Obj42247c::drawList;
    leaveHandlers[7] = &Obj42247c::FUN_003a830c;
    leaveHandlers[9] = &Obj42247c::drawList;
    leaveHandlers[10] = &Obj42247c::drawList;
    leaveHandlers[11] = &Obj42247c::drawList;
    leaveHandlers[8] = &Obj42247c::FUN_0022cba4;
}
