/* NON_MATCHING: compiler merges reserved-name null guards and allocates a smaller frame; -O2 candidate. */
#include "shard/W6_W6Match6_EffectLoader.h"

extern "C" {
extern BtlEffectGlobals g_btlEffect;
extern const char DAT_00400914[];
extern const char DAT_0040090c[];
extern const char DAT_004008c4[];
u32 libc_strlen(const char *);
s32 libc_strcmp(const char *, const char *);
s32 libc_strncmp(const char *, const char *, u32);
void memClear(void *, u32);
void textFormatBuffer(char *, const char *, ...);
void libc_strcpy(char *, const char *);
u32 keyedRecordRegisterName(void *);
u32 FUN_00249e54(u32, const char *);

// Load versioned battle effect resources after excluding reserved effect names.
void btlEffectLoadVersionedResources(EffectLoader *loader)
{
    if (loader->names != NULL) {
        for (s32 slot = 0; slot < 4; ++slot) {
            const char *name = loader->names->names[slot];
            if (!libc_strlen(name) || !libc_strcmp(name, DAT_00400914) ||
                !libc_strcmp(DAT_0040090c, name))
                continue;
            if (name && !libc_strncmp(name, g_btlEffect.prefix, libc_strlen(g_btlEffect.prefix)))
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
            libc_strcpy(path, formattedPath);
            if (libc_strlen(path)) {
                EffectResource *resource = &loader->resources[slot];
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
