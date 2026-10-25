/* NON_MATCHING: Placement member construction adds null checks and retains the root instead of chaining constructor returns. */
#include "classes/AocMenu.h"
#include "ui/SceneWindowWork.h"
#include <new>
extern "C" {
TimedState* timeInitializeActiveState(TimedState*);
extern const u8 DAT_0042219c[];

SceneWindowWork* FUN_00393340(SceneWindowWork* work)
{
    work->unk0000 = 0;
    timeInitializeActiveState(&work->firstTimer);
    timeInitializeActiveState(&work->secondTimer);
    new (work->selectionStorage) SelectionFlags;
    work->dispatchTable = DAT_0042219c;
    new (work->windowStorage) Obj4221a4;
    work->unk0350 = 0;
    work->unk0354 = 0;
    work->unk0358 = 0;
    work->unk1128 = 0;
    work->unk112C = 0;
    work->unk11B0 = 0;
    work->unk1794 = 0;
    work->unk1798 = 0;
    work->unk17A0 = 0;
    work->unk1C30 = 0;
    reinterpret_cast<AocMenu *>(work)->initializeStepCallbacks();
    return work;
}
}
