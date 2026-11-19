#include "battle/Talk/btlTalkBustUp.h"
#include "gamedata/NkmBaseRecord.h"
#include "code/Code002a.h"
#include "gamedata/NkmEnemyLookup.h"
#include "shard/W6_W6Match2_HelpResources.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
bool aocRunByName(u32 arg0, u32 name, u32 arg2, int checked);
s32 texTableRequestNamedTextureLoad(AocSystem *system, s32 table, u32 entry, s32 flags);
s32 asdTMTexTablePrepareNodeImage(s32 table, u32 entry);
s32 FUN_0032c3fc(BtlTalkBustUp *bustUp);
s32 panelSetupButtons(BtlTalkBustUp *bustUp);

void btlTalkBustUpSetDemonTexture(s32 devilId, s32 asynchronous)
{
    BtlTalkBustUp *bustUp = g_btlTalkBustUp;
    if (bustUp == 0)
        return;

    bustUp->category = nkmEnemyFindById(devilId)->bustUp;
    bustUp->textureNode = nkmBaseGetRecord(devilId)->model;
    bustUp->devilId = devilId;

    if (asynchronous != 0) {
        if (aocRunByName(reinterpret_cast<u32>(g_aocSystem), 0x18, bustUp->textureNode, 1) != 0)
            texTableRequestNamedTextureLoad(g_aocSystem, 0x18, bustUp->textureNode, 0x10000);
        else
            asdTMTexTableLoadEntryAsync(0x18, bustUp->textureNode);

        bustUp->state = 1;
        bustUp->stateCounter = 0;
    } else {
        if (aocRunByName(reinterpret_cast<u32>(g_aocSystem), 0x18, bustUp->textureNode, 1) != 0)
            aocLoadTextureNode(reinterpret_cast<u32>(g_aocSystem), 0x18, bustUp->textureNode, 0x10000);
        else
            asdTMTexTablePrepareNodeImage(0x18, bustUp->textureNode);

        FUN_0032c3fc(bustUp);
        panelSetupButtons(bustUp);
        bustUp->state = 2;
        bustUp->stateCounter = 0;
    }
}
}
