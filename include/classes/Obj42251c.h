#ifndef CLASSES_OBJ42251C_H
#define CLASSES_OBJ42251C_H

#include "classes/Obj422540.h"
#include "shard/Shard004A.h"

/* A pool object (vtable at 0x42251c, named after it until its real name is known) with nothing of its
 * own to destroy. FUN_003aff9c makes it. */
class Obj42251c : public Obj422540 {
public:
    virtual ~Obj42251c();
};

/* Serialized parameter state handled by the concrete pool callback. */
struct Obj42251cData {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0c[8];
    /* 0x14 */ u32 type;
    /* 0x18 */ u32 flags;
    /* 0x1C */ u32 first;
    /* 0x20 */ u32 second;
    /* 0x24 */ u32 third;
    /* 0x28 */ u32 fourth;
    /* 0x2C */ u32 fifth;
    /* 0x30 */ u32 sixth;
    /* 0x34 */ u32 lowNibble;
    /* 0x38 */ u32 highNibble;
};
typedef char Obj42251cDataSizeCheck[sizeof(Obj42251cData) == 0x3C ? 1 : -1];

static __inline s32 obj42251cDecodeBase(Obj42251cData *record, const u8 *data, u32 size)
{
    if (size == 0) {
        return -1;
    }
    record->type = *data++;
    if (--size == 0) {
        return -1;
    }
    record->flags = *data++;
    if (--size < 10) {
        return -1;
    }
    record->first = decoderReadBigEndian16(data);
    record->second = decoderReadBigEndian16(data + 2);
    record->third = decoderReadBigEndian16(data + 4);
    record->fourth = decoderReadBigEndian16(data + 6);
    record->fifth = data[8];
    record->sixth = data[9];
    return 12;
}

#endif
