/* NON_MATCHING: The canonical u16 record lookup introduces UXTH; portrait-load branch placement also differs. */
#include "common.h"
#include "gamedata/Table00.h"
#include "gamedata/DevilRecord.h"
#include "addon/aocMain.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
Table00Record *dataTable00FindById(s32 id);
s32 aocRunByName(AocSystem *system, u32 table, u32 entry, u32 mode);
s32 FUN_002a5ee4(AocSystem *system, s32 table, u32 entry, s32 flags);
s32 FUN_002ae8e4(AocSystem *system, s32 table, u32 entry, s32 flags);
s32 asdTMTexTableLoadEntryAsync(s32 table, u32 entry);
s32 FUN_002c58c8(s32 table, u32 entry);
s32 FUN_0032c3fc(BattleTalkBustUpPrefixIV *bustUp);
s32 panelSetupButtons(BattleTalkBustUpPrefixIV *bustUp);

extern AocSystem *g_aocSystem;
extern BattleTalkBustUpPrefixIV *g_btlTalkBustUp;

void FUN_002954f4(s32 devilId, s32 asynchronous)
{
    BattleTalkBustUpPrefixIV *bustUp = g_btlTalkBustUp;
    if (bustUp == 0)
        return;

    bustUp->recordValue = dataTable00FindById(devilId)->bustUp.value;
    bustUp->textureEntry = reinterpret_cast<DevilRecord *>(devilGetRecord(devilId))->model;
    bustUp->devilId = devilId;

    if (asynchronous == 0) {
        if (aocRunByName(g_aocSystem, 0x18, bustUp->textureEntry, 1) != 0)
            FUN_002ae8e4(g_aocSystem, 0x18, bustUp->textureEntry, 0x10000);
        else
            FUN_002c58c8(0x18, bustUp->textureEntry);

        FUN_0032c3fc(bustUp);
        panelSetupButtons(bustUp);
        bustUp->state = 2;
        bustUp->stateCounter = 0;
    } else {
        if (aocRunByName(g_aocSystem, 0x18, bustUp->textureEntry, 1) != 0)
            FUN_002a5ee4(g_aocSystem, 0x18, bustUp->textureEntry, 0x10000);
        else
            asdTMTexTableLoadEntryAsync(0x18, bustUp->textureEntry);

        bustUp->state = 1;
        bustUp->stateCounter = 0;
    }
}
}
