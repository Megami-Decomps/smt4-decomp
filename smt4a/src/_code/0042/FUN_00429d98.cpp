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
s32 FUN_00429d98(u32 owner)
{
    SessionRoot *root = &DAT_00589398;
    SessionObject *object;

    if (root->session != NULL) {
        return 0xC92044E7;
    }
    s32 result = FUN_0042bbf4(&object, 4);
    if ((s32)(result & 0x80000000) >= 0) {
        result = FUN_001aeefc(owner, object, 0, 0);
        if ((s32)(result & 0x80000000) >= 0) {
            root->session = object;
        } else {
            object->release();
        }
    }
    return result;
}

} /* extern "C" */
