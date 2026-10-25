#include "common.h"
#include <stddef.h>

extern "C" {
const void *FUN_00184310(u32);
const void *dataTable00FindById(u32);
s32 gameFlagIsSet(u32);
s32 devilIsTextureLoaded(u32, s32);
struct AocSystem;
extern AocSystem *g_aocSystem;
s32 recordPrepareLinkedOwner(AocSystem *, u32, s32);
void FUN_0017ffa8(s32, u32, s32, u32, u32, u32);
void texBindBindTableNode(AocSystem *, u32, s32, u32, s32, u32, u32, u32);

/* Resolve the demon's texture resource and dispatch or request its operation. */
void devilDispatchTextureResource(u32 id, u32 argument, u32 first, u32 second, s32 resolveDemon)
{
    /* Both accessed fields lie beyond the shared DevilRecordA prefix; keep
       these bounded views local instead of growing that shared record. */
    struct SavedTextureView {
        u8 unk00[0x9C];
        u16 texture;
    };
    struct TextureOverrideView {
        u16 id;
        u16 flags;
        u8 unk04[0x88];
        s16 texture;
    };
    typedef char TextureViewOffsets[
        offsetof(SavedTextureView, texture) == 0x9C &&
        offsetof(TextureOverrideView, texture) == 0x8C ? 1 : -1];
    u32 category = 15;
    s32 resource = id;
    if (resolveDemon) {
        if ((s32)id < 0) {
            resource = gameFlagIsSet(0x11) ? 0 : 0x25E;
        } else {
            const SavedTextureView *saved = (const SavedTextureView *)FUN_00184310((u16)id);
            if (saved == NULL) {
                return;
            }
            const TextureOverrideView *definition = (const TextureOverrideView *)dataTable00FindById((u16)id);
            if (definition->flags & 0x8000) {
                resource = definition->texture;
                category = 25;
                if (resource >= 0x9A) {
                    return;
                }
            } else {
                resource = saved->texture + 1;
                if (resource >= 0x277) {
                    return;
                }
            }
        }
    }
    if (devilIsTextureLoaded(id, resolveDemon)) {
        if (!recordPrepareLinkedOwner(g_aocSystem, category, resource)) {
            FUN_0017ffa8(2, category, resource * 1000 + 1, argument, first, second);
            return;
        }
        texBindBindTableNode(g_aocSystem, id, 2, category, resource, argument, first, second);
    }
}
}
