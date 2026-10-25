/* NON_MATCHING: compiler merges reserved-name null guards and allocates a smaller frame; -O2 candidate. */
#include "shard/W6_W6Match6_EffectLoader.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/W6_W6Match2_EntrySequence.h"

struct VersionEffectNames : EffectNameTable {
    char versionNames[4][0x16]; // 0x108
};
struct VersionEffectLoader : EffectLoader {
    EffectResource versionResources[4]; // 0x2390
};

extern "C" {
extern BtlEffectGlobals g_btlEffect;
extern const char DAT_00400914[], DAT_0040090c[], DAT_004008c4[];
u32 libc_strlen(const char *);
s32 libc_strcmp(const char *, const char *);
s32 libc_strncmp(const char *, const char *, u32);
void textFormatBuffer(char *, const char *, ...);
u32 keyedRecordRegisterName(void *);
u32 FUN_00249e54(u32, const char *);

void battleLoadVersionEffectResources(VersionEffectLoader *loader)
{
    if (loader->names != NULL) {
        for (s32 slot = 0; slot < 4; ++slot) {
            const char *name = static_cast<VersionEffectNames *>(loader->names)->versionNames[slot];
            const char *const *reservedNames = reinterpret_cast<const char *const *>(g_btlEffect.unk04);
            if (!libc_strlen(name) || !libc_strcmp(name, DAT_00400914) ||
                !libc_strcmp(DAT_0040090c, name))
                continue;
            if (name && !libc_strncmp(name, g_btlEffect.prefix, libc_strlen(g_btlEffect.prefix)))
                continue;
            if (name && (!libc_strcmp(name, reservedNames[0]) || !libc_strcmp(name, reservedNames[1])))
                continue;
            if (name && !libc_strcmp(name, g_btlEffect.reserved.name))
                continue;
            if (name && !libc_strncmp(name, g_btlEffect.otherPrefix, libc_strlen(g_btlEffect.otherPrefix)))
                continue;
            if (name && !libc_strcmp(name, g_btlEffect.reserved.otherName))
                continue;
            char path[128];
            char formattedPath[128];
            memClear(path, sizeof(path));
            memClear(formattedPath, sizeof(formattedPath));
            textFormatBuffer(formattedPath, DAT_004008c4, name);
            libc_strcpy(reinterpret_cast<unsigned int *>(path), reinterpret_cast<unsigned int *>(formattedPath));
            if (libc_strlen(path)) {
                EffectResource *resource = &loader->versionResources[slot];
                const char *version = resource->version;
                if (version[0] == 'V' && version[1] == 'E' && version[2] == 'R') {
                    u32 handle = keyedRecordRegisterName(resource->storage);
                    resource->handle = handle;
                    resource->handle = FUN_00249e54(handle, version);
                }
            }
        }
    }
}
}
