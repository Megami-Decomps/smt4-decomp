/* NON_MATCHING: compiler keeps the zero-user texture-release branch inline rather than retail's cold tail. */
#include "event/2dEvent/EventEffect.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* Local views extend the shared effect prefix and module block without changing their sizes. */
struct EventEffectSlotWork {
    EventEffectA effect;
    u8 unk08[0x1C];
    u32 textureSlot; /* 0x24 */
};
struct EventEffectSlotTexture {
    u32 table;
    u32 node;
    s32 users;
    u32 unk0C;
};
struct EventEffectSlots {
    EventEffectSlotWork *effects[29];
    EventEffectSlotTexture textures[4]; /* 0x74 */
};
extern "C" {
extern EventEffectSlots DAT_0057f3c8;
extern EventEffectGlobalsA g_eventEffect;
void jobStop(u32, s32);
void asdMemFree(void *);
void asdTMTexTableReleaseNode(u32, u32);
void *textureGetIndexedResource(u32);
}

/* Release the effect's shared textures, stop its job, and clear its slot. */
extern "C" void FUN_0038a538(s32 index)
{
    EventEffectSlotWork *work = DAT_0057f3c8.effects[index];
    if (work->textureSlot < 4) {
        EventEffectSlotTexture *texture = &DAT_0057f3c8.textures[work->textureSlot];
        if (texture->users != 0) {
            --texture->users;
        } else if (asdTMTexTableNodeIsLoaded(texture->table, texture->node) != 0) {
            asdTMTexTableReleaseNode(texture->table, texture->node);
        }
        if (g_eventEffect.textureUsers > 0) {
            --g_eventEffect.textureUsers;
        } else if (textureGetIndexedResource(53) != NULL) {
            asdTMTexTableFreeEntry(53);
            g_eventEffect.textureUsers = 0;
        }
    }
    jobStop(work->effect.job, 0);
    asdMemFree(work);
    DAT_0057f3c8.effects[index] = NULL;
}
