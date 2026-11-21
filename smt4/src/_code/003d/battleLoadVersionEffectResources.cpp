/* NON_MATCHING: nameStartsWith/nameEquals keep retail's repeated null tests and, taking the g_btlEffect entry by
 * reference, read each name after its test; remaining: the build forms the entries' addresses before the tests,
 * keeps the &formatted pointer out of a callee-saved register (retail sl, with a 260-byte frame). */
#include "runtime/Stdio.h"
#include "shard/W6_W6Match6_EffectLoader.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include <string.h>
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

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
s32 libc_strncmp(const char *, const char *, u32);

static __inline bool nameStartsWith(const char *name, const char *const &prefix)
{
    return name && !libc_strncmp(name, prefix, libc_strlen(prefix));
}

static __inline bool nameEquals(const char *name, const char *const &other)
{
    return name && !strcmp(name, other);
}

u32 FUN_00249e54(u32, const char *);

void battleLoadVersionEffectResources(VersionEffectLoader *loader)
{
    if (loader->names != NULL) {
        for (s32 slot = 0; slot < 4; ++slot) {
            const char *name = static_cast<VersionEffectNames *>(loader->names)->versionNames[slot];
            const char *const *reservedNames = reinterpret_cast<const char *const *>(g_btlEffect.unk04);
            if (!libc_strlen(name) || !strcmp(name, DAT_00400914) ||
                !strcmp(DAT_0040090c, name))
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
            __2sprintf(formattedPath, DAT_004008c4, name);
            libc_strcpy(reinterpret_cast<unsigned int *>(path), reinterpret_cast<unsigned int *>(formattedPath));
            if (libc_strlen(path)) {
                EffectResource *resource = &loader->versionResources[slot];
                const char *version = resource->version;
                if (version[0] == 'V' && version[1] == 'E' && version[2] == 'R') {
                    u32 handle = keyedRecordRegisterName((const char *)resource->storage);
                    resource->handle = handle;
                    resource->handle = FUN_00249e54(handle, version);
                }
            }
        }
    }
}
}
