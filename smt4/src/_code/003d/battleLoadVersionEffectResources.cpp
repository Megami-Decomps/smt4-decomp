/* NON_MATCHING: nameStartsWith/nameEquals keep retail's repeated null tests; retail loads each g_btlEffect prefix after its test, keeps the &formatted pointer in a callee-saved register and uses a 260-byte frame. */
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

static __inline bool nameStartsWith(const char *name, const char *prefix)
{
    return name && !libc_strncmp(name, prefix, libc_strlen(prefix));
}

static __inline bool nameEquals(const char *name, const char *other)
{
    return name && !libc_strcmp(name, other);
}

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
            if (nameStartsWith(name, g_btlEffect.prefix))
                continue;
            if (nameEquals(name, reservedNames[0]) || nameEquals(name, reservedNames[1]))
                continue;
            if (nameEquals(name, g_btlEffect.reserved.name))
                continue;
            if (nameStartsWith(name, g_btlEffect.otherPrefix))
                continue;
            if (nameEquals(name, g_btlEffect.reserved.otherName))
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
