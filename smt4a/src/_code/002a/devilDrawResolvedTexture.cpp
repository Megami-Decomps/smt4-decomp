#include "gamedata/DevilRecordA.h"
extern "C" {
extern u32 g_aocSystem;
DevilRecordA *FUN_00184310(u32 id);
void *dataTable00FindById(u32 id);
s32 gameFlagIsSet(u32 flag);
s32 devilIsTextureLoaded(s32 id, s32 resolve);
s32 aocRunByName(u32 system, s32 category, s32 id, s32 mode);
void FUN_00164b5c(s32 channel, s32 category, s32 variant, u32 first, u32 second, u32 third);
void FUN_0017ffa8(s32 channel, s32 category, s32 resource, u32 first, u32 second, u32 third);
void FUN_0046fa94(u32 system, s32 id, s32 channel, s32 category, s32 resource, u32 first, u32 second, u32 third);
void FUN_00471244(u32 system, s32 id, s32 channel, s32 resource, s32 mode, u32 first, u32 second, u32 third);

void devilDrawResolvedTexture(s32 id, u32 first, u32 second, u32 third, s32 resolve)
{
    struct TextureRecordView {
        u16 id;
        u16 flags;
        u8 unk04[0x88];
        s16 alternateId;
        u8 unk8E[0x16];
        u8 variant;
    };
    s32 resource = id;
    s32 category = 15;
    s32 variant = 0;
    if (resolve) {
        if (id < 0) {
            resource = !gameFlagIsSet(17) ? 606 : 0;
        } else {
            const DevilTableRecordA *devil = (const DevilTableRecordA *)FUN_00184310((u16)id);
            const TextureRecordView *record = (const TextureRecordView *)dataTable00FindById((u16)id);
            if (devil == NULL)
                return;
            if (record->flags & 0x8000) {
                resource = record->alternateId;
                category = 25;
                if (resource >= 154)
                    return;
            } else {
                resource = devil->unk9C + 1;
                if (resource >= 631)
                    return;
            }
            variant = record->variant;
        }
    }
    if (devilIsTextureLoaded(id, resolve)) {
        if (aocRunByName(g_aocSystem, category, resource, 1)) {
            if (category == 25)
                FUN_0046fa94(g_aocSystem, id, 2, category, resource, first, second, third);
            else
                FUN_00471244(g_aocSystem, id, 2, resource, 0, first, second, third);
        } else {
            if (variant > 0)
                FUN_00164b5c(2, category, variant, first, second, third);
            else
                FUN_0017ffa8(2, category, resource * 1000, first, second, third);
        }
    }
}
}
