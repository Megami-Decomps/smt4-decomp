#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {

extern AsdCecGlobals g_asdCec;

s32 asdCecMessageBoxOpen(AsdCecMessageBox *box, u32 unk00, u32 unk04);
void FUN_00358664(AsdCecMessageBox *box, s32 flag);
void asdCecMessageBoxClose(AsdCecMessageBox *box);

/* Opens the CEC message box and, if that worked, runs FUN_00358664 on it before closing it again. */
void FUN_002e0dfc(void)
{
    s32 result = asdCecMessageBoxOpen(g_asdCec.cec->box, g_asdCec.cec->unk00, g_asdCec.cec->unk04);

    if ((s32)(result & 0x80000000) >= 0) {
        FUN_00358664(g_asdCec.cec->box, 1);
        asdCecMessageBoxClose(g_asdCec.cec->box);
    }
}

} /* extern "C" */
