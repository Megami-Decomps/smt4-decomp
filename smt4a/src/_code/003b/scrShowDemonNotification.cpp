/* NON_MATCHING: initial registration branch layout and zero/one constant registers differ; -O2 candidate. */
#include "gamedata/GuestParamTable.h"
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "code/Code0037.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {
u32 scrGetArg(u32);
s32 scrGetCommandFrame();
void FUN_004bd410(u16);
void sysPlayVoice(u32);

u32 scrShowDemonNotification()
{
    MessageWindowA *banner = g_messageMain.banner;
    u32 id = scrGetArg(0);
    if (scrGetCommandFrame() == 0) {
        if (banner->shown) {
            ++banner->queueIndex;
            banner->queueTimer = 20;
        } else {
            MessageWindowA *current = g_messageMain.banner;
            current->shown = 1;
            current->counterState = 1;
            uiSpriteStateInitFromSource(&current->sprites[17], 20, 3001, &current->parameters, 11, 1.0f);
            uiSpriteSelectAnim(&current->sprites[17], 0);
            /* The states and ids are cleared as one block of 15 words. */
            u32 *queueWords = reinterpret_cast<u32 *>(current->queueStates);
            for (s32 i = 0; i < 15; ++i)
                queueWords[i] = 0;
            banner->queueIndex = 0;
        }
        if (!saveSlotFindById((u16)id)) {
            FUN_004bd410((u16)id);
            FUN_003e48dc((u16)id);
        }
        const GuestParamRecord *record = FUN_00370ecc((u16)id);
        if (record && record->parentId != id) {
            FUN_004bd410((u16)id);
            FUN_003e48dc((u16)id);
        }
        banner->queueStates[banner->queueIndex] = 0;
        banner->queueIds[banner->queueIndex] = id;
        banner->queueSpecial[banner->queueIndex] = 1;
    }
    if (banner->queueTimer == 20) {
        uiSpriteStateInitFromSource(&banner->sprites[22 + banner->queueIndex], 20, 3090, &banner->parameters, 11, 1.0f);
        uiSpriteSetKeyframe(&banner->sprites[22 + banner->queueIndex], 10, 0);
        banner->queueStates[banner->queueIndex] = 1;
        sysPlayVoice(0x100016e);
    }
    return banner->shown && banner->counterState == 2 && banner->queueStates[banner->queueIndex] == 2;
}
}
