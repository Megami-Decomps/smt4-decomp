/* NON_MATCHING: talk-session initialization caches the minus-one value in r1 rather than retail r0. */
/* Allocates a battle-talk session, starts its owning job, and initializes its choice buffer. */
#include "battle/btlTalk.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
u32 jobIsValid(u32 handle);
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 front);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
s32 btlTalkUpdateIfPresent(u32 process);
void btlTalkJobRelease(u32 process);
void __aeabi_memset4(void *destination, u32 bytes, u32 value);
void btlUiPanelStart(void *ui);
extern BtlTalkA *g_btlTalk;
extern void *g_btlUiBlock;

void FUN_00272584(void *object, void *actor, s32 first, s32 second)
{
    struct OwnerView {
        u32 process;
        u8 unk04[0x3C];
        u32 talkJob;
    };
    struct ActorDataView {
        u8 unk000[0x1C0];
        s16 id;
    };
    struct ActorView {
        u8 unk00[0x28];
        ActorDataView *data;
    };
    /* The session's final status fields lie beyond the shared BtlTalkA prefix. */
    struct TalkSessionView {
        OwnerView *owner;
        ActorView *actor;
        u8 unk08[0x10];
        u32 state;
        s32 first;
        s32 second;
        u8 unk24[0xC];
        s32 actorId;
        u8 choices[0x100];
        u8 unk134[0x10];
        u8 active;
        u8 pending;
        u8 unk146[2];
        s32 selection;
    };
    OwnerView *owner = (OwnerView *)object;
    jobIsValid(owner->talkJob);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlTalk.cpp", 765);
    g_btlTalk = (BtlTalkA *)asdMemoryAllocTracked(256, 256, 0, sizeof(TalkSessionView), 1);
    owner->talkJob = taskCreateDraw((const s8 *)"btlTalk Calc", 4, 0, 0, btlTalkUpdateIfPresent, btlTalkJobRelease, (u32)owner, (void *)owner->process);
    TalkSessionView *work = (TalkSessionView *)g_btlTalk;
    work->owner = owner;
    work->actor = (ActorView *)actor;
    work->first = first;
    work->second = second;
    work->active = 0;
    work->pending = 0;
    work->selection = -1;
    work->actorId = work->actor->data->id;
    __aeabi_memset4(work->choices, sizeof(work->choices), -1);
    btlUiPanelStart(g_btlUiBlock);
    work->state = 0;
}
}
