/* NON_MATCHING: stack frame is 272 rather than 292 bytes; effect-ID offset and temporary path addresses are folded differently. */
#include "battle/BtlMainAccess.h"
#include "battle/BattleMovementEffects.h"
#include "gfx/RangeAnimationSelection.h"

namespace {
struct BattleEffectNameRecord { u32 id; char name[1]; };
}
extern "C" {
BattleEffectNameRecord *FUN_003f01d0(void *battle, u32 id);
char *libc_strcpy(char *destination, const char *source);
void sysMemClear(void *memory, u32 size);
void asdMemFree(void *memory);
s32 textFormatBuffer(char *destination, const char *format, ...);
char *FUN_00100d60(char *text, u32 character);
s32 findRecordByKey(const char *key);
void asdLoadFileAsyncSimple(const char *path, char **output, u32 flags);
extern const char DAT_005284c0[];

// Prepare the three movement-effect files, loading only resources absent from the effect cache.
u32 FUN_004f913c(RangeAnimationOwner *owner)
{
    // Both effect metadata and resource slots extend past the documented animation prefixes.
    struct EffectPresetView {
        u8 unk00[0x7c];
        struct { u32 id; u32 unk04; } effects[3];
    };
    struct EffectOwnerView {
        u8 unk0000[0x33e4];
        BattleMovementEffectResource effects[3];
    };
    typedef char EffectViewOffsetCheck[offsetof(EffectPresetView, effects) == 0x7c && offsetof(EffectOwnerView, effects) == 0x33e4 ? 1 : -1];
    void *battle = static_cast<void *>(btlGetMainState());
    char path[128];
    char formatted[128];
    for (s32 index = 0; index < 3; ++index) {
        char name[16] = {0};
        const EffectPresetView *presets = reinterpret_cast<const EffectPresetView *>(owner->animation.presets);
        const BattleEffectNameRecord *record = FUN_003f01d0(battle, presets->effects[index].id);
        libc_strcpy(name, record->name);
        BattleMovementEffectResource *resource = &reinterpret_cast<EffectOwnerView *>(owner)->effects[index];
        resource->id = 0xff;
        sysMemClear(resource->key, sizeof(resource->key));
        if (resource->file) {
            asdMemFree(resource->file);
            resource->file = NULL;
        }
        resource->flags = 0;
        sysMemClear(path, sizeof(path));
        sysMemClear(formatted, sizeof(formatted));
        textFormatBuffer(formatted, DAT_005284c0, name);
        libc_strcpy(path, formatted);
        libc_strcpy(resource->key, FUN_00100d60(path, '/') + 1);
        if (findRecordByKey(resource->key) == 0xff) {
            asdLoadFileAsyncSimple(path, &resource->file, 1);
            resource->flags |= 1;
        }
    }
    return 1;
}
}
