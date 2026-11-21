/* NON_MATCHING: work/global pointers and path buffers use different saved registers; return branches differ. */
#include "runtime/Stdio.h"
#include "battle/BattleMovementEffects.h"
#include "battle/btlEffect.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {
extern BtlEffectGlobals g_btlEffect;
extern const char DAT_00528380[4][32];
extern const char DAT_005284c0[];
void sysMemClear(void *, u32);
void asdMemFree(void *);
char *libc_strcpy(char *, const char *);
char *libc_strrchr(char *, s32);
void __aeabi_memcpy4(void *, const void *, u32);
u32 FUN_003478dc(u32, const void *);
void textureCachePollReady(void);
s32 textureCacheGetDirection(void);

// Load and register the four common battle movement effects, then wait for their setup to finish.
u32 FUN_004f5a78(BattleMovementEffects *work)
{
    if (work->loadState == 0) {
        BattleMovementEffects *effects = static_cast<BattleMovementEffects *>(g_btlEffect.data);
        for (s32 i = 0; i < 4; ++i) {
            BattleMovementEffectResource *resource = &effects->resources[i];
            resource->id = 0xFF;
            sysMemClear(resource->key, 128);
            if (resource->file != NULL) {
                asdMemFree(resource->file);
                resource->file = NULL;
            }
            resource->flags = 0;
            char path[128];
            char formatted[128];
            sysMemClear(path, 128);
            sysMemClear(formatted, 128);
            __2sprintf(formatted, DAT_005284c0, DAT_00528380[i]);
            libc_strcpy(path, formatted);
            libc_strcpy(resource->key, libc_strrchr(path, '/') + 1);
            if (findRecordByKey(resource->key) == 0xFF) {
                asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&resource->file), 1);
                resource->flags |= 1;
            }
        }
        work->loadState = 1;
    } else if (work->loadState != 1 && work->loadState != 2) {
        return 1;
    }
    if (work->loadState == 1) {
        BattleMovementEffects *effects = static_cast<BattleMovementEffects *>(g_btlEffect.data);
        for (s32 i = 0; i < 4; ++i) {
            BattleMovementEffectResource snapshot;
            __aeabi_memcpy4(&snapshot, &effects->resources[i], sizeof(snapshot));
            if ((snapshot.flags & 1) && snapshot.file == NULL)
                return 0;
        }
        for (s32 i = 0; i < 4; ++i) {
            BattleMovementEffectResource *resource = &effects->resources[i];
            const char *file = resource->file;
            if (file[0] == 'V' && file[1] == 'E' && file[2] == 'R') {
                u32 id = keyedRecordRegisterName(resource->key);
                resource->id = id;
                resource->id = FUN_003478dc(id, file);
            }
        }
        textureCachePollReady();
        work->loadState = 2;
    }
    if (textureCacheGetDirection()) {
        work->loadState = 3;
        return 1;
    }
    return 0;
}
}
