#include "common.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/NkmBaseRecordA.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "event/bustupEvent/BustupTex.h"

extern "C" {
s32 texTableRequestNamedTextureLoad(u32 system, s32 group, u32 node, s32 flags);
s32 asdTMTexLoadMainHeap(s32 group, u32 node);
void uiSpriteScreenSetupForMode(void *portrait);
void FUN_003d44ac(void *portrait);
s32 aocRunByName(u32 system, u32 group, u32 node, u32 mode);
extern u32 g_aocSystem;
extern void *g_btlTalkBustUp;

// Select the talk portrait's texture, either loading it now or scheduling it.
void btlTalkBustUpSetDemonTexture(u32 demonId, s32 deferred)
{
    // Apocalypse's state continues beyond the shared IV portrait prefix.
    struct PortraitView {
        u8 unk000[0x2e8];
        s32 state;
        u32 stateCounter;
        u32 category;
        u8 unk2f4[4];
        u32 textureNode;
        u8 unk2fc[0xc];
        u32 demonId;
    };
    PortraitView *portrait = static_cast<PortraitView *>(g_btlTalkBustUp);
    if (portrait != NULL) {
        portrait->category = nkmEnemyFindById(demonId)->scriptFlags >> 2;
        const NkmBaseRecordA *record = reinterpret_cast<const NkmBaseRecordA *>(nkmBaseGetRecord(demonId));
        portrait->textureNode = record->model;
        portrait->demonId = demonId;
        if (deferred != 0) {
            if (aocRunByName(g_aocSystem, 0x10, portrait->textureNode, 1) != 0) {
                texTableRequestNamedTextureLoad(g_aocSystem, 0x10, portrait->textureNode, 0x10000);
            } else {
                asdTMTexLoadMainHeap(0x10, portrait->textureNode);
            }
            portrait->state = 1;
            portrait->stateCounter = 0;
        } else {
            if (aocRunByName(g_aocSystem, 0x10, portrait->textureNode, 1) != 0) {
                aocLoadTextureNode(g_aocSystem, 0x10, portrait->textureNode, 0x10000);
            } else {
                asdTMTexTablePrepareNodeImage(0x10, portrait->textureNode);
            }
            FUN_003d44ac(portrait);
            uiSpriteScreenSetupForMode(portrait);
            portrait->state = 2;
            portrait->stateCounter = 0;
        }
    }
}
}
