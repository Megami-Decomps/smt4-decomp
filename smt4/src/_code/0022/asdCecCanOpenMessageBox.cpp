#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;
s32 asdCecMessageBoxOpen(AsdCecMessageBox *box, u32 kind, u32 mode);
void asdCecMessageBoxClose(AsdCecMessageBox *box);

// Test whether the requested StreetPass message box can be opened.
bool asdCecCanOpenMessageBox(u32 kind, u32 mode)
{
    if ((s32)(asdCecMessageBoxOpen(g_asdCec.cec->box, kind, mode) & 0x80000000) < 0) {
        return false;
    }
    asdCecMessageBoxClose(g_asdCec.cec->box);
    return true;
}
}
