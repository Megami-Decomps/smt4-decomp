#include "common.h"
#include "gamedata/DevilRecordA.h"

extern "C" {
s32 FUN_0014afd0(s32 group, u32 node);
s32 aocLoadTextureNode(u32 system, s32 group, u32 node, s32 flags);
const void *dataTable00FindById(u32 id);
s32 FUN_001a6568(u32 system, s32 group, u32 node, s32 flags);
s32 asdTMTexLoadMainHeap(s32 group, u32 node);
void FUN_0021ba5c(void *portrait);
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
    // The category byte belongs to a packed union in the table record.
    struct CategoryView { u8 unk000[0xa5]; u8 flags; };
    PortraitView *portrait = static_cast<PortraitView *>(g_btlTalkBustUp);
    if (portrait != NULL) {
        const CategoryView *base = static_cast<const CategoryView *>(dataTable00FindById(demonId));
        portrait->category = base->flags >> 2;
        const DevilTableRecordA *record = reinterpret_cast<const DevilTableRecordA *>(FUN_00184310(demonId));
        portrait->textureNode = record->unk9C;
        portrait->demonId = demonId;
        if (deferred != 0) {
            if (aocRunByName(g_aocSystem, 0x10, portrait->textureNode, 1) != 0) {
                FUN_001a6568(g_aocSystem, 0x10, portrait->textureNode, 0x10000);
            } else {
                asdTMTexLoadMainHeap(0x10, portrait->textureNode);
            }
            portrait->state = 1;
            portrait->stateCounter = 0;
        } else {
            if (aocRunByName(g_aocSystem, 0x10, portrait->textureNode, 1) != 0) {
                aocLoadTextureNode(g_aocSystem, 0x10, portrait->textureNode, 0x10000);
            } else {
                FUN_0014afd0(0x10, portrait->textureNode);
            }
            FUN_003d44ac(portrait);
            FUN_0021ba5c(portrait);
            portrait->state = 2;
            portrait->stateCounter = 0;
        }
    }
}
}
