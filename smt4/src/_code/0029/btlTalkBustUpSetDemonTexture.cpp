#include "common.h"
#include "code/Code002a.h"
#include "gamedata/Table00.h"
#include "shard/W6_W6Match2_HelpResources.h"
#include "addon/aocMain.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "addon/AocSystem.h"

/* The demon record, read for its model entry only. */
struct DevilModelView {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ u16 model;
};

extern "C" {
bool aocRunByName(u32 arg0, u32 name, u32 arg2, int checked);
Table00Record *dataTable00FindById(s32 id);
DevilModelView *devilGetRecord(u32 id);
s32 texTableRequestNamedTextureLoad(AocSystem *system, s32 table, u32 entry, s32 flags);
s32 asdTMTexTablePrepareNodeImage(s32 table, u32 entry);
s32 FUN_0032c3fc(BattleTalkBustUpPrefixIV *bustUp);
s32 panelSetupButtons(BattleTalkBustUpPrefixIV *bustUp);

extern BattleTalkBustUpPrefixIV *g_btlTalkBustUp;

void btlTalkBustUpSetDemonTexture(s32 devilId, s32 asynchronous)
{
    BattleTalkBustUpPrefixIV *bustUp = g_btlTalkBustUp;
    if (bustUp == 0)
        return;

    bustUp->recordValue = dataTable00FindById(devilId)->bustUp;
    bustUp->textureEntry = devilGetRecord(devilId)->model;
    bustUp->devilId = devilId;

    if (asynchronous != 0) {
        if (aocRunByName(reinterpret_cast<u32>(g_aocSystem), 0x18, bustUp->textureEntry, 1) != 0)
            texTableRequestNamedTextureLoad(g_aocSystem, 0x18, bustUp->textureEntry, 0x10000);
        else
            asdTMTexTableLoadEntryAsync(0x18, bustUp->textureEntry);

        bustUp->state = 1;
        bustUp->stateCounter = 0;
    } else {
        if (aocRunByName(reinterpret_cast<u32>(g_aocSystem), 0x18, bustUp->textureEntry, 1) != 0)
            FUN_002ae8e4(reinterpret_cast<u32>(g_aocSystem), 0x18, bustUp->textureEntry, 0x10000);
        else
            asdTMTexTablePrepareNodeImage(0x18, bustUp->textureEntry);

        FUN_0032c3fc(bustUp);
        panelSetupButtons(bustUp);
        bustUp->state = 2;
        bustUp->stateCounter = 0;
    }
}
}
