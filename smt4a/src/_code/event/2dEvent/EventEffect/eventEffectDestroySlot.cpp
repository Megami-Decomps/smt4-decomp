#include "event/2dEvent/EventEffect.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

/* Local views extend the shared effect prefix and module block without changing their sizes. */
struct EventEffectSlotWork {
    EventEffectA effect;
    u8 unk1C[8];
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
}

/* Release the effect's shared textures, stop its job, and clear its slot. */
extern "C" void eventEffectDestroySlot(s32 index)
{
    EventEffectSlotWork *work = DAT_0057f3c8.effects[index];
    u32 slot = work->textureSlot;
    if (slot < 4) {
        EventEffectSlotTexture *textures = DAT_0057f3c8.textures;
        EventEffectSlotTexture *texture = &textures[slot];
        if (texture->users == 0) {
            if (asdTMTexTableNodeIsLoaded(texture->table, texture->node) != 0) {
                asdTMTexTableReleaseNode(texture->table, texture->node);
            }
        } else {
            --texture->users;
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
