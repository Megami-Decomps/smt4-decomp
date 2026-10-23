/* NON_MATCHING: inlined texture readiness tests copied id in r1 rather than original id in r5; all other instructions match. */
#include "gamedata/DevilRecord.h"
struct DemonTextureDrawRecord {
    u8 prefix[3];
    u8 flags;
    u8 unk04[0x84];
    s16 alternateId;
    u8 unk8A[0x1A];
    u8 variant;
};
typedef char DemonTextureDrawRecordOffsets[offsetof(DemonTextureDrawRecord, alternateId) == 0x88 &&
    offsetof(DemonTextureDrawRecord, variant) == 0xA4 ? 1 : -1];
extern "C" {
extern u32 g_aocSystem;
DemonTextureDrawRecord *dataTable00FindById(u32 id);
s32 asdTMTexTableNodeIsLoaded(u32 category, u32 resource);
s32 aocRunByName(u32 system, s32 category, s32 resource, s32 mode);
void FUN_002ae9ec(s32 layer, s32 category, s32 resource, u32 first, u32 second, u32 third);
void FUN_002bf380(s32 layer, s32 category, s32 variant, u32 first, u32 second, u32 third);
void FUN_00389ddc(u32 system, s32 id, s32 layer, s32 resource, s32 mode, u32 first, u32 second, u32 third);

static inline s32 isDemonTextureLoaded(s32 id, s32 resolve)
{
    s32 category = 23;
    s32 resource = id;
    if (resolve) {
        if (id < 0) {
            resource = 0;
        } else {
            const DevilRecord *devil = (const DevilRecord *)devilGetRecord((u16)id);
            if (!devil)
                return 0;
            const DemonTextureDrawRecord *record = dataTable00FindById((u16)id);
            if (record->flags & 1) {
                resource = record->alternateId;
                category = 35;
                if (resource >= 129)
                    return 0;
            } else {
                resource = devil->model + 1;
                if (resource >= 614)
                    return 0;
            }
        }
    }
    return asdTMTexTableNodeIsLoaded(category, resource);
}

void FUN_001ee4e4(s32 id, u32 first, u32 second, u32 third, s32 resolve)
{
    s32 resource = id;
    s32 category = 23;
    s32 variant = 0;
    if (resolve) {
        if (id < 0) {
            resource = 0;
        } else {
            const DevilRecord *devil = (const DevilRecord *)devilGetRecord((u16)id);
            const DemonTextureDrawRecord *record = dataTable00FindById((u16)id);
            if (!devil)
                return;
            if (record->flags & 1) {
                resource = record->alternateId;
                category = 35;
                if (resource >= 129)
                    return;
            } else {
                resource = devil->model + 1;
                if (resource >= 614)
                    return;
            }
            variant = record->variant;
        }
    }
    if (isDemonTextureLoaded(id, resolve)) {
        if (aocRunByName(g_aocSystem, category, resource, 1)) {
            FUN_00389ddc(g_aocSystem, id, 2, resource, 0, first, second, third);
        } else if (variant > 0) {
            FUN_002bf380(2, category, variant, first, second, third);
        } else {
            FUN_002ae9ec(2, category, resource * 1000, first, second, third);
        }
    }
}
}
