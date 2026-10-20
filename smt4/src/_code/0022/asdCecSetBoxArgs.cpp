#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

/* Sets the two words the message box is opened with. */
void asdCecSetBoxArgs(u32 unk00, u32 unk04)
{
    AsdCec *cec = g_asdCec.cec;

    if (cec != NULL) {
        cec->unk00 = unk00;
        cec->unk04 = unk04;
    }
}

} /* extern "C" */
