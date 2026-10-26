/* NON_MATCHING: phase-four return-true predicate identity is unknown; phase-store joins and final channel lookup scheduling differ. */
#include "battle/ActionStateChannels.h"
#include "battle/ActionKindSelection.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "gamedata/DataTable40.h"

struct BtlSkill;
extern "C" {
extern BtlMain *g_btlMain;
extern void *DAT_00435d18;
extern BtlActionGlobals g_btlAction;
extern const char DAT_00400468[]; // battle/army_summon/army_summon.bccam
void FUN_003d6fd4(BtlMain *battle, const char *path);
s32 cameraCreateFromStateResource(BtlMain *battle);
void FUN_003dba3c(void *auxiliary);
s32 btlAuxAreResourcesReady(void *auxiliary);
void nameEntriesRegisterVerNamesThenContinue(void *auxiliary);
void FUN_00339eec(ActionStateChannelOwner *owner);
s32 modelOwnerResetPlayerIfReady(ActionStateChannelOwner *owner);
void FUN_003398e4(ActionStateChannelOwner *owner);
s32 FUN_0033ac58(ActionStateChannelOwner *owner);
void FUN_003392cc(ActionStateChannelOwner *owner);
void FUN_00339fa8(ActionStateChannelOwner *owner);
s32 FUN_0023fad8(ActionStateChannelOwner *owner);
void FUN_0033a360(ActionStateChannelOwner *owner);
s32 FUN_00339e90(ActionStateChannelOwner *owner);
void FUN_00339f38(ActionStateChannelOwner *owner);
void FUN_00338358(ActionStateChannelOwner *owner);
s32 FUN_00293ed0(ActionStateChannelOwner *owner);
void commandResetThreeChannels(ActionStateChannelOwner *owner);

u32 FUN_003d1c1c(ActionStateChannelOwner **owner, ActionKindSelection *work)
{
    switch (work->sequence.phase) {
    case 0:
        FUN_003d6fd4(g_btlMain, DAT_00400468);
        work->sequence.phase = 1;
        break;
    case 1:
        if (!cameraCreateFromStateResource(g_btlMain))
            return 0;
        FUN_003dba3c(DAT_00435d18);
        work->sequence.phase = 2;
        break;
    case 2:
        if (!btlAuxAreResourcesReady(DAT_00435d18))
            return 0;
        nameEntriesRegisterVerNamesThenContinue(DAT_00435d18);
        FUN_00339eec(*owner);
        work->sequence.phase = 3;
        break;
    case 3:
        if (!modelOwnerResetPlayerIfReady(*owner))
            return 0;
        asdDebugHookPtrInt(*owner, reinterpret_cast<const u8 *>(
            dataTable40FindById(work->command->skill))[0x55]);
        work->sequence.phase = 4;
        break;
    case 4:
        FUN_003398e4(*owner);
        work->sequence.phase = 5;
        break;
    case 5:
        if (!FUN_0033ac58(*owner))
            return 0;
        FUN_003392cc(*owner);
        FUN_00339fa8(*owner);
        work->sequence.phase = 6;
        break;
    case 6:
        if (!FUN_0023fad8(*owner))
            return 0;
        FUN_0033a360(*owner);
        work->sequence.phase = 7;
        // Fall through: phase seven may finish in the same update.
    case 7:
        if (!FUN_00339e90(*owner))
            return 0;
        FUN_00339f38(*owner);
        work->sequence.phase = 8;
        break;
    case 8:
        FUN_00338358(*owner);
        if (FUN_00293ed0(*owner)) {
            commandResetThreeChannels(*owner);
            ActionStateChannels *channels = (ActionStateChannels *)g_btlAction.data;
            channels->entries[(*owner)->current].pending = 13;
            return 1;
        }
        break;
    }
    return 0;
}
}
