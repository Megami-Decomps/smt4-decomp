/* NON_MATCHING: identical except -1 materialisation: retail builds two separate mvn constants (r0 for the selected index, r2 for the memset fill) and this build shares one register. */
#include "battle/btlTalk.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "battle/BtlUiFade.h"

extern "C" {

extern BtlTalk *g_btlTalk;
extern u32 g_btlUiBlock;

s32 jobIsValid(u32 job);
u32 taskCreateDraw(const char *name, s32 group, s32 startDelay, s32 endDelay, s32 (*update)(u32), void (*end)(u32), void *work, u32 parent);
void *__aeabi_memset4(void *destination, u32 size, s32 value);
s32 btlTalkJobUpdate(u32 job);
void btlTalkDestroy(u32 job);

/* Creates the talk screen: its calculation task and the state block for the unit being talked to. */
void FUN_001d2710(BtlTalkOwner *owner, BtlTalkUnit *unit, u32 argA, u32 argB)
{
    jobIsValid(owner->job);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlTalk.cpp", 0x29f);
    g_btlTalk = static_cast<BtlTalk *>(asdMemAlloc(0x100, 0x100, 0, sizeof(BtlTalk), 1));
    u32 job = taskCreateDraw("btlTalk Calc", 2, 0, 0, btlTalkJobUpdate, btlTalkDestroy, owner, owner->parentJob);
    owner->job = job;
    BtlTalk *talk = g_btlTalk;
    talk->owner = owner;
    talk->unit = unit;
    talk->argA = argA;
    talk->argB = argB;
    talk->unkC4 = 0;
    talk->unkC5 = 0;
    talk->selected = -1;
    talk->talkValue = unit->data->talkValue;
    __aeabi_memset4(talk->choices, sizeof(talk->choices), -1);
    btlUiPlaySceneFadeOutWhenReady(g_btlUiBlock);
    talk->unk18 = 0;
}

} /* extern "C" */
