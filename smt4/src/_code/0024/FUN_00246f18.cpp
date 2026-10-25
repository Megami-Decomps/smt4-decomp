/* NON_MATCHING: pending/ready branch outlining, return merging and compiler hints differ; 57 built versus 59 retail rows. */
#include "gfx/VersionedTextureRequest.h"

extern "C" {
void *__aeabi_memcpy4(void *output, const void *input, u32 size);
u32 keyedRecordRegisterName(const char *name);
u32 FUN_00249e54(u32 id, const char *format);
s32 FUN_0024679c(void);
s32 FUN_00246708(void);

u32 FUN_00246f18(VersionedTextureOwner *owner)
{
    u32 flags = owner->flags;
    if (flags & 0x10000) {
        if (flags & 0x20000) {
            return 1;
        }
        if (FUN_00246708()) {
            owner->flags |= 0x20000;
        }
    } else {
        VersionedTextureRequest *request = &owner->request;
        VersionedTextureRequest snapshot;
        __aeabi_memcpy4(&snapshot, request, sizeof(snapshot));
        if ((snapshot.flags & 1) && !snapshot.format) {
            return 0;
        }
        owner->flags = flags | 0x10000;
        const char *format = request->format;
        if (format[0] == 'V' && format[1] == 'E' && format[2] == 'R') {
            u32 id = keyedRecordRegisterName(request->name);
            request->id = static_cast<u8>(id);
            request->id = static_cast<u8>(FUN_00249e54(id, format));
        }
        FUN_0024679c();
    }
    if ((owner->flags & 0x10000) && (owner->flags & 0x20000)) {
        return 1;
    }
    return 0;
}
}
