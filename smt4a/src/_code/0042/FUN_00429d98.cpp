/* NON_MATCHING: retail spills the fourth argument purely through `push {r3, ...}` (no separate store) and keeps the first result in r5; ours stores it with an explicit str and uses r4/r6 differently. */
#include "common.h"

/* An IPC session object; slot 12 releases it. */
class SessionObject {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0C();
    virtual void unk10();
    virtual void unk14();
    virtual void unk18();
    virtual void unk1C();
    virtual void unk20();
    virtual void unk24();
    virtual void unk28();
    virtual void unk2C();
    virtual void release();
};

struct SessionRoot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SessionObject *session;
};

extern "C" {

extern SessionRoot DAT_00589398;
s32 FUN_0042bbf4(SessionObject **object, s32 size);
s32 FUN_001aeefc(u32 owner, SessionObject *object, u32 a, u32 b);

/* Registers a session object once: fails with 0xC92044E7 if one exists, releases the object on failure. */
s32 FUN_00429d98(u32 owner, u32 unused1, u32 unused2, SessionObject *created)
{
    SessionObject *object;
    s32 result;

    if (DAT_00589398.session != NULL) {
        result = 0xC92044E7;
    } else {
        object = created;
        result = FUN_0042bbf4(&object, 4);
        if ((result & 0x80000000) == 0) {
            result = FUN_001aeefc(owner, object, 0, 0);
            if ((result & 0x80000000) == 0) {
                DAT_00589398.session = object;
            } else {
                object->release();
            }
        }
    }
    return result;
}

} /* extern "C" */
