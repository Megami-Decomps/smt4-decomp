/* NON_MATCHING: link resolution now has retail's shape; only the register choice differs (retail keeps the zero in r3 and the offset in ip, built swaps them) */
#include "shard/S1NwGfx.h"

extern "C" {

struct ObjectLink {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 busy;
    /* 0x1c */ u32 pending;
};

struct ObjectBase {
    /* 0x00 */ u32 typeBits;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2c */ ObjectBase *owner;
    /* 0x30 */ u32 mode;
    /* 0x34 */ u8 unk34[4];
    /* 0x38 */ RelativePointer link;
};

static ObjectBase *objectCast(ObjectBase *object, u32 requiredBits)
{
    if (object != NULL && (~object->typeBits & requiredBits) == 0) {
        return object;
    }
    return NULL;
}

void FUN_00235f74(ObjectBase *object, ObjectLink *link, u32 mode);

/* Binds the object to itself as owner (once, when it has all the required type bits) and starts it through its link, or flags the link pending if it is busy. */
void FUN_0036f830(ObjectBase *object)
{
    ObjectBase *self = objectCast(object, 0x20000021);
    ObjectLink *link;
    u32 mode;

    if (self->owner == NULL) {
        self->owner = object;
        link = static_cast<ObjectLink *>(self->link.get());
        mode = self->mode;
        if (link->busy == 0) {
            if (mode == 0) {
                mode = 0x2010000;
            }
            FUN_00235f74(object, link, mode);
            return;
        }
        link->pending = 0;
    }
}

} /* extern "C" */
