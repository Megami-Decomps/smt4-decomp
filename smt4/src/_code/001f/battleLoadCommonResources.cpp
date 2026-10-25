#include "battle/BtlMainGlobals.h"

extern "C" {
void *asdLoadFileSyncDefault(const char *path);
void btlStageFogTableLoad(void);
void mapAccessoryLoadTable(void);

void battleLoadCommonResources(void)
{
    g_btlMainState.legionMessages = asdLoadFileSyncDefault("battle/Legion/LegionMsg.mbm");
    g_btlMainState.legionMessageTable = asdLoadFileSyncDefault("battle/Legion/LegionMsgTable.tbb");
    g_btlMainState.legionScript = asdLoadFileSyncDefault("battle/Legion/LegionScr.bf");
    g_btlMainState.commonMessages = asdLoadFileSyncDefault("battle/Common/common.mbm");
    g_btlMainState.talkSystemMessages = asdLoadFileSyncDefault("battle/talk/TalkSystem.mbm");
    g_btlMainState.talkBaseData = asdLoadFileSyncDefault("battle/talk/TalkBaseData.tbb");
    g_btlMainState.systematicTable = asdLoadFileSyncDefault("battle/Systematic.tbb");
    g_btlMainState.subQuestGuestMessages = asdLoadFileSyncDefault("event/quest/SubQuestGuest.mbm");
    g_btlMainState.bossDeadTable = asdLoadFileSyncDefault("battle/BossDeadTable.tbb");
    btlStageFogTableLoad();
    mapAccessoryLoadTable();
}
}
