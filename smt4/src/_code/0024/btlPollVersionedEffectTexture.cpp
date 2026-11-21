#include "gfx/VersionedTextureRequest.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {
u32 FUN_00249e54(u32 id, const char *format);
s32 textureCachePollReady(void);
s32 textureCacheGetDirection(void);

/* Starts the battle effect's texture request and returns 1 when the cache is ready. */
u32 btlPollVersionedEffectTexture(VersionedTextureOwner *owner)
{
    const u32 started = 0x10000;
    const u32 ready = 0x20000;

    bool requestValid = true;
    u32 flags = owner->flags;
    if (!(flags & started)) {
        VersionedTextureRequest snapshot = owner->request;
        requestValid = !(snapshot.flags & 1) || snapshot.format;
        if (requestValid) {
            owner->flags = flags | started;
            VersionedTextureRequest *request = &owner->request;
            const char *format = request->format;
            if (format[0] == 'V' && format[1] == 'E' && format[2] == 'R') {
                u32 id = keyedRecordRegisterName(request->name);
                request->id = static_cast<u8>(id);
                request->id = static_cast<u8>(FUN_00249e54(id, format));
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
