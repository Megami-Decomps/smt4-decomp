/* NON_MATCHING: readable rewrite; retail keeps both allocator hooks behind one base register, tests the owner allocation before storing it and reaches the session fields through large literal offsets; built differs in branch layout and addressing */
#include "common.h"

/* The 8-byte handle handed to the caller: the owner object and the session built on it. */
struct SessionHandle {
    /* 0x00 */ void *owner;
    /* 0x04 */ u8 *session;
};

typedef void *(*SessionAllocFn)(u32 bytes);
typedef void (*SessionFreeFn)(void *block);

/* The allocator hooks the application registers. */
struct SessionHooks {
    SessionAllocFn alloc;
    SessionFreeFn free;
};

extern "C" {
extern SessionHooks DAT_0044e990;
extern const u8 DAT_00420740[];       /* vtable of the session object (_ZTV9Obj420738 + 8) */
extern const u8 DAT_0042091c[];       /* vtable of the owner object (_ZTV9Obj42091c) */
u8 *FUN_003b3030(void *storage, void *owner, u32 unk);
s32 FUN_003b21e4(u8 *session, u8 *callbackTable);
void FUN_003b3160(u8 *session);

/* Maps the session setup's error code to the public result code. */
static u32 sessionTranslateError(s32 code)
{
    switch (code) {
    case 0x00: return 0x00;
    case 0x01: return 0x03;
    case 0x02: return 0x10;
    case 0x03: return 0x11;
    case 0x40: return 0x01;
    case 0x42: return 0x05;
    case 0x43: return 0x06;
    case 0x44: return 0x09;
    case 0x45: return 0x06;
    case 0x46: return 0x0c;
    case 0x47: return 0x0e;
    case 0x48: return 0x0f;
    case 0x49: return 0x06;
    default: return 0x04;
    }
}

/* Creates a session through the registered allocator hooks and stores its handle in *handle; returns 0 or a result code. */
u32 FUN_003f66f0(SessionHandle **handle, u32 callback, u32 userData)
{
    if (DAT_0044e990.alloc == NULL || DAT_0044e990.free == NULL) {
        return 0x12;
    }
    SessionHandle *created = (SessionHandle *)DAT_0044e990.alloc(8);
    if (created == NULL) {
        return 9;
    }
    const void **owner = (const void **)DAT_0044e990.alloc(4);
    if (owner != NULL) {
        *owner = DAT_0042091c + 8;
    }
    created->owner = owner;
    if (owner != NULL) {
        void *storage = DAT_0044e990.alloc(0x1498);
        u8 *session = NULL;
        if (storage != NULL) {
            session = FUN_003b3030(storage, created->owner, 0);
            *(const u8 **)(session + 0x148c) = DAT_00420740;
        }
        created->session = session;
        if (session != NULL) {
            *(u32 *)(session + 0x1494) = callback;
            *(u32 *)(created->session + 0x1490) = userData;
            s32 error = FUN_003b21e4(created->session, created->session + 0x148c);
            if (error == 0) {
                *handle = created;
                return 0;
            }
            FUN_003b3160(created->session);
            DAT_0044e990.free(created->session);
            DAT_0044e990.free(created->owner);
            DAT_0044e990.free(created);
            return sessionTranslateError(error);
        }
        DAT_0044e990.free(created->owner);
    }
    DAT_0044e990.free(created);
    return 9;
}

} /* extern "C" */
