#ifndef CLASSES_OBJ5586E0_H
#define CLASSES_OBJ5586E0_H

#include "common.h"

/* Embedded state object with six cleared work words. */
class Obj55b074 {
public:
    Obj55b074()
    {
        for (u32 index = 0; index < 6; ++index) {
            values[index] = 0;
        }
    }
    virtual ~Obj55b074();
    /* 0x04 */ u32 values[6];
};

/* Parent object owns the embedded polymorphic state at offset four. */
class Obj5586e0 {
public:
    Obj5586e0();
    virtual ~Obj5586e0();
    virtual void unk08();
    virtual void unk0c();
    virtual void unk10();
    virtual void unk14();
    virtual void unk18();
    /* 0x04 */ Obj55b074 state;
};

#endif
