#ifndef CLASSES_OBJ55B104_H
#define CLASSES_OBJ55B104_H

#include "classes/ByteIterator.h"

/* Shared-reference prefix: one initial reference and a cleared state byte. */
class Obj5593b8 {
public:
    Obj5593b8();
    virtual ~Obj5593b8();
protected:
    /* 0x04 */ u32 references;
    /* 0x08 */ u8 state;
    /* 0x09 */ u8 unk09[3];
};

/* Shared byte buffer with independent read/write cursors and an initial offset. */
class Obj55b104 : public Obj5593b8 {
public:
    Obj55b104(u32 capacity, u32 offset);
    virtual ~Obj55b104();
    void initCapacity(u32 capacity);
    void reset();
    /* 0x0C */ ByteIterator begin;
    /* 0x10 */ ByteIterator readCursor;
    /* 0x14 */ ByteIterator writeCursor;
    /* 0x18 */ ByteIterator capacityEnd;
    /* 0x1C */ u32 offset;
};

#endif
