/* NON_MATCHING: effect-name helper null guards and version-slot register scheduling differ. */
#include "battle/btlEffect.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"

namespace {
/* The version slots are beyond the canonical effect owner's shared prefix. */
struct BattleEffectVersionOwnerView {
    BtlEffectOwnerA owner;
    u8 unk1F58[0x234];
    BattleVersionResourceSlot versions[4];
};
typedef char BattleEffectVersionOffsets[offsetof(BattleEffectVersionOwnerView, versions) == 0x218C ? 1 : -1];
}
extern "C" {
extern BtlEffectGlobals g_btlEffect;
extern const char DAT_00528544[], DAT_0052853c[], DAT_005284c0[];
u32 libc_strlen(const char *text);
s32 libc_strcmp(const char *first, const char *second);
s32 libc_strncmp(const char *first, const char *second, u32 bytes);
void sysMemClear(void *memory, u32 bytes);
s32 textFormatBuffer(char *output, const char *format, ...);
char *libc_strcpy(char *destination, const char *source);
u32 keyedRecordRegisterName(const char *name);
u32 FUN_003478dc(u32 key, const void *data);

void FUN_004f7cd0(BtlEffectOwnerA *effect)
{
    if (effect->slots == NULL)
        return;
    BattleEffectVersionOwnerView *owner = reinterpret_cast<BattleEffectVersionOwnerView *>(effect);
    for (s32 index = 0; index < BTL_EFFECT_SLOTS; ++index) {
        const char *name = effect->slots->entries[index].name;
        if (libc_strlen(name) == 0 || libc_strcmp(name, DAT_00528544) == 0 ||
            libc_strcmp(DAT_0052853c, name) == 0)
            continue;
        if (libc_strncmp(name, g_btlEffect.prefix, libc_strlen(g_btlEffect.prefix)) == 0 ||
            libc_strcmp(name, g_btlEffect.reserved.name) == 0 ||
            libc_strncmp(name, g_btlEffect.otherPrefix, libc_strlen(g_btlEffect.otherPrefix)) == 0 ||
            libc_strcmp(name, g_btlEffect.reserved.otherName) == 0)
            continue;
        char path[128], formatted[128];
        sysMemClear(path, sizeof(path));
        sysMemClear(formatted, sizeof(formatted));
        textFormatBuffer(formatted, DAT_005284c0, name);
        libc_strcpy(path, formatted);
        if (libc_strlen(path) != 0) {
            BattleVersionResourceSlot *slot = &owner->versions[index];
            const u8 *version = slot->data;
            if (version[0] == 'V' && version[1] == 'E' && version[2] == 'R') {
                u32 key = keyedRecordRegisterName(slot->name);
                slot->state = static_cast<u8>(key);
                slot->state = static_cast<u8>(FUN_003478dc(key, version));
            }
        }
    }
}
}
