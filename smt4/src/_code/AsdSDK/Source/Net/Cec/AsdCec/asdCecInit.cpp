/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the AsdCec allocation. */
#include "AsdSDK/Source/Net/Cec/AsdCec.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void asdMemFreeNonNull(void *work);
void asdMemFree(void *block);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void *asdOperatorNew(u32 size);
void *asdCecMessageIdInit(void *self);
AsdCecMessageBox *FUN_00358c24(AsdCecMessageBox *self, int unk);

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

    cec = (AsdCec *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdCec), 1);
    g_asdCec.cec = cec;
    g_asdCec.unk00 = 0;
    cec->unk10 = 0;
    cec->unk14 = 0;

    work = asdOperatorNew(8);
    if (work != NULL) {
        work = asdCecMessageIdInit(work);
    }
    g_asdCec.cec->work = work;

    box = (AsdCecMessageBox *)asdOperatorNew(sizeof(AsdCecMessageBox));
    if (box != NULL) {
        box = FUN_00358c24(box, 0);
    }
    g_asdCec.cec->box = box;
    return 1;
}

} /* extern "C" */
