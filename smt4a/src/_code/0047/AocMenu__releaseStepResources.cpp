/* NON_MATCHING: the flag clears' temporaries take other registers (retail keeps the constant 1 in r1 and the cleared flags in r2), jobStop's zero argument is set later, and the final flags/state/substate stores combine into one STM instead of a STR and a two-register STM. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "sys/RuntimeObjects.h"

struct CountAt30;
struct CountAt5A;
struct JobOwner;
struct JobFlagsWork;
struct QuestShutdownWork {
    u32 flags;
    s32 state;
    s32 substate;
    u8 unk000c[0x1fc];
    AocMenuWindow *child;
    u8 unk020c[0xa8];
    u8 entriesA[0x34]; // 0x2b4
    u8 entriesB[0x5c]; // 0x2e8
    u8 unk0344[0xc];
    void *scriptBuffer;
    u32 unk0354;
    ScriptProcess *process;
    u8 unk035c[0xe54];
    u8 owner[0x420]; // 0x11b0
    u8 unk15d0[0x1d0];
    u32 childJob;
    u8 unk17a4[8];
    s32 touchMarker;
    u8 unk17b0[0x73c];
    void **slot;
};
extern "C" {
extern AocDisplay *g_aocDisplay;
void releaseEntriesA(CountAt30 *entries);
void releaseEntriesB(CountAt5A *entries);
void jobOwnerFreeSlotAndStop(JobOwner *owner);
void jobFlagsWorkStop(JobFlagsWork *work);
void ifTouchRegionRemove();
void asdMemFree(void *buffer);
void asdTMTexTableReleaseNode(s32 table, s32 index);

/* Clears flag bits of the add-on main object. */
static __inline void aocMainClearFlags(AocMain *main, u32 mask)
{
    main->flags &= ~mask;
}

void AocMenu::releaseStepResources()
{
    AocMenu * object = reinterpret_cast<AocMenu *>(this);
    QuestShutdownWork *work = (QuestShutdownWork *)object;
    AocMain *main = g_aocMain;
    aocMainClearFlags(main, 0x100);
    main->mode = 1;
    aocMenuSetReadyFlag(main, 1);
    aocMainClearFlags(g_aocMain, 0x70);
    g_aocDisplay->operationActive = 0;
    releaseEntriesB((CountAt5A *)work->entriesB);
    releaseEntriesA((CountAt30 *)work->entriesA);
    jobOwnerFreeSlotAndStop((JobOwner *)work->owner);
    jobFlagsWorkStop((JobFlagsWork *)work);
    if (jobIsValid(work->childJob)) {
        if (work->touchMarker != -1) {
            work->touchMarker = -1;
            ifTouchRegionRemove();
        }
        work->flags &= ~0x3000;
        jobStop(work->childJob, 0);
    }
    asdMemFreeSlot(work->slot);
    work->slot = NULL;
    if (work->process != NULL) {
        scrScriptProcessDestroy(work->process);
        work->process = NULL;
    }
    if (work->scriptBuffer != NULL) {
        asdMemFree(work->scriptBuffer);
        work->scriptBuffer = NULL;
    }
    for (s32 index = 0; index < 3; ++index) {
        asdTMTexTableReleaseNode(0x2f, index);
    }
    asdTMTexTableFreeEntry(0x2f);
    work->flags |= 1;
    work->state = 20;
    work->substate = 0;
    if (work->child != NULL) {
        delete work->child;
        work->child = NULL;
    }
}
}
