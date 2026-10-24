/* NON_MATCHING: the stripped debug trace now matches; retail passes an unset register (r4, never saved) as a second argument to both asdOperatorNew calls and allocates r5/r6 differently. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void asdMemFreeNonNull(void *work);
void asdMemFree(void *block);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void *asdOperatorNew(u32 size);
void *_ZN12CecMessageIdC1Ev(void *self);
AsdCecMessageBox *_ZN9Obj420e4cC1Ej(AsdCecMessageBox *self, int unk);

/* (Re)creates the AsdCec object and its message box. Always returns 1. */
s32 asdCecInit(void)
{
    AsdCec *cec;
    void *work;
    AsdCecMessageBox *box;

    if (g_asdCec.cec != NULL) {
        asdMemFreeNonNull(g_asdCec.cec->work);
        if (g_asdCec.cec->box != NULL) {
            ((void (*)(AsdCecMessageBox *))g_asdCec.cec->box->vtable[1])(g_asdCec.cec->box);
        }
        asdMemFree(g_asdCec.cec);
        g_asdCec.cec = NULL;
    }

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 163);
    cec = (AsdCec *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdCec), 1);
    g_asdCec.cec = cec;
    g_asdCec.unk00 = 0;
    cec->unk10 = 0;
    cec->unk14 = 0;

    work = asdOperatorNew(8);
    if (work != NULL) {
        work = _ZN12CecMessageIdC1Ev(work);
    }
    g_asdCec.cec->work = work;

    box = (AsdCecMessageBox *)asdOperatorNew(sizeof(AsdCecMessageBox));
    if (box != NULL) {
        box = _ZN9Obj420e4cC1Ej(box, 0);
    }
    g_asdCec.cec->box = box;
    return 1;
}

} /* extern "C" */
