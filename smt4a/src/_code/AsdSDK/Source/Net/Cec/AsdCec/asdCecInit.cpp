#include "AsdSDK/Source/Net/Cec/AsdCec.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern AsdCecGlobals g_asdCec;

void asdOperatorDelete(void *work);
void asdMemFree(void *block);
void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
void *FUN_00178b04(u32 size, const char *file, int line);
void *asdCecMessageIdInit(void *self);
AsdCecMessageBox *FUN_0042fac4(AsdCecMessageBox *self, int unk);

/* (Re)creates the AsdCec object and its message box. Always returns 1. */
s32 asdCecInit(void)
{
    AsdCec *cec;
    void *work;
    AsdCecMessageBox *box;

    if (g_asdCec.cec != NULL) {
        asdOperatorDelete(g_asdCec.cec->work);
        if (g_asdCec.cec->box != NULL) {
            ((void (*)(AsdCecMessageBox *))g_asdCec.cec->box->vtable[1])(g_asdCec.cec->box);
        }
        asdMemFree(g_asdCec.cec);
        g_asdCec.cec = NULL;
    }

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 164);
    cec = (AsdCec *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdCec), 1);
    g_asdCec.cec = cec;
    g_asdCec.unk00 = 0;
    cec->unk10 = 0;
    cec->unk14 = 0;

    work = FUN_00178b04(8, "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 174);
    if (work != NULL) {
        work = asdCecMessageIdInit(work);
    }
    g_asdCec.cec->work = work;

    box = (AsdCecMessageBox *)FUN_00178b04(sizeof(AsdCecMessageBox), "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 175);
    if (box != NULL) {
        box = FUN_0042fac4(box, 0);
    }
    g_asdCec.cec->box = box;
    return 1;
}

} /* extern "C" */
