#ifndef CLASSES_OBJ5588EC_H
#define CLASSES_OBJ5588EC_H

#include "classes/Obj55b104.h"

/* A fixed-capacity buffer owner (vtable at 0x55af4c). */
class Obj55af4c : public Obj5593b8 {
public:
    Obj55af4c(u32 capacity, u8 flag)
    {
        init(capacity, flag);
    }
    virtual ~Obj55af4c();
    void init(u32 capacity, u8 flag);

    /* 0x0C */ void *buffer;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 capacity;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 flag;
    /* 0x1D */ u8 unk1d;
    /* 0x1E */ u8 unk1e;
};

/* A buffer owner created with flag 4 (vtable at 0x5588ec). */
class Obj5588ec : public Obj55af4c {
public:
    Obj5588ec(u32 capacity);
};

#endif
