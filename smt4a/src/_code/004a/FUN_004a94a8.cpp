/* NON_MATCHING: the peeled request loop uses different index/count registers and reversed final comparison. */
#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;

// Report an active request in a bank unless that bank is suppressed.
u32 FUN_004a94a8(u32, s32 bank)
{
    // The request banks continue past the recovered ObjDA widget's end.
    struct RequestBanksView {
        u8 unk0000[0xC060];
        BattleUiRequestBank banks[16];
    };
    typedef char RequestBanksOffset[offsetof(RequestBanksView, banks) == 0xC060 ? 1 : -1];
    BtlUiA* work = g_btlUi.ui;
    if (work == NULL) {
        return 0;
    }
    const BattleUiBankStatus* status = &work->objD.requests.banks[bank];
    if (status->suppressed != 0) {
        return 0;
    }
    if (status->pending != 0) {
        return 1;
    }
    s32 count = work->requestCounts.counts[bank];
    const RequestBanksView* requests = reinterpret_cast<const RequestBanksView*>(work);
    for (s32 i = 0; i < count; ++i) {
        if (requests->banks[bank].requests[i].active != 0) {
            return 1;
        }
    }
    return 0;
}
}
