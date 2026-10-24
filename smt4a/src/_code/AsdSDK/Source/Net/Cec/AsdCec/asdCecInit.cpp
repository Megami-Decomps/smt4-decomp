#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Net/Cec/AsdCec.h"

struct CecDestructorTable {
    /* 0x00 */ void (*entry)(AsdCecMessageBox *self);
    /* 0x04 */ void (*destroy)(AsdCecMessageBox *self);
};

extern "C" {
extern AsdCecGlobals g_asdCec;

void asdOperatorDelete(void *work);
void asdMemFree(void *block);
void *asdMemoryAllocTracked(s32 heap, s32 alignmentClass, s32 flags,
                           u32 size, s32 fromFront);
void *FUN_00178b04(u32 size, const char *file, s32 line);
void *_ZN12CecMessageIdC1Ev(void *self);
AsdCecMessageBox *_ZN9Obj558330C1Ej(AsdCecMessageBox *self, s32 mode);

s32 asdCecInit(void)
{
    if (g_asdCec.cec != 0) {
        asdOperatorDelete(g_asdCec.cec->work);
        AsdCecMessageBox *box = g_asdCec.cec->box;
        if (box != 0) {
            const CecDestructorTable *table =
                reinterpret_cast<const CecDestructorTable *>(box->vtable);
            table->destroy(box);
        }
        asdMemFree(g_asdCec.cec);
        g_asdCec.cec = 0;
    }

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 164);
    AsdCec *cec = static_cast<AsdCec *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, 0x1C, 1));
    g_asdCec.cec = cec;
    g_asdCec.unk00 = 0;
    cec->unk10 = 0;
    cec->unk14 = 0;

    void *work = FUN_00178b04(
        8, "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 174);
    if (work != 0) {
        work = _ZN12CecMessageIdC1Ev(work);
    }
    g_asdCec.cec->work = work;

    AsdCecMessageBox *box = static_cast<AsdCecMessageBox *>(FUN_00178b04(
        0x8BC, "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Net\\Cec\\AsdCec.cpp", 175));
    if (box != 0) {
        box = _ZN9Obj558330C1Ej(box, 0);
    }
    g_asdCec.cec->box = box;
    return 1;
}
}
