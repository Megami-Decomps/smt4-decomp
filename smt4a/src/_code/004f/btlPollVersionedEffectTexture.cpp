#include "battle/BtlEffectFiles.h"

extern "C" {
u32 keyedRecordRegisterName(const char *name);
u32 FUN_003478dc(u32 id, const char *format);
s32 textureCachePollReady(void);
s32 textureCacheGetDirection(void);

/* Starts the battle effect's texture request and returns 1 when the cache is ready. */
u32 btlPollVersionedEffectTexture(BtlEffectFiles *owner)
{
    const u32 started = 0x10000;
    const u32 ready = 0x20000;

    bool requestValid = true;
    u32 flags = owner->flags;
    if (!(flags & started)) {
        BtlEffectFileSlot snapshot = owner->lastSlot;
        requestValid = !(snapshot.flags & 1) || snapshot.file;
        if (requestValid) {
            BtlEffectFileSlot *request = &owner->lastSlot;
            owner->flags = flags | started;
            const char *format = static_cast<const char *>(request->file);
            if (format[0] == 'V' && format[1] == 'E' && format[2] == 'R') {
                u32 id = keyedRecordRegisterName(request->name);
                request->handle = static_cast<u8>(id);
                request->handle = static_cast<u8>(FUN_003478dc(id, format));
            }
            textureCachePollReady();
        }
    } else {
        if (flags & ready) {
            return 1;
        }
        if (textureCacheGetDirection()) {
            owner->flags |= ready;
        }
    }
    if (requestValid && (owner->flags & started) && (owner->flags & ready)) {
        return 1;
    }
    return 0;
}
}
