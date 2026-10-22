#ifndef CLASSES_OBJ5597FC_H
#define CLASSES_OBJ5597FC_H

#include "shard/W6_W6Match1_Obj55a5a8.h"

extern "C" char g_smallTextEmptySentinel;

/* Initialization record for the shared empty text buffer; retail performs no scope cleanup. */
struct SmallTextString {
    SmallTextString() : data(&g_smallTextEmptySentinel), size(0), capacity(20)
    {
        firstCharacter = 0;
    }
    /* 0x00 */ char *data;
    /* 0x04 */ u8 firstCharacter;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 size;
    /* 0x0C */ u32 capacity;
};

/* Final class constructed by the 0x432b10 unit, after its vector-owning base. */
class Obj5597fc : public Obj55a5a8 {
public:
    Obj5597fc();
    virtual ~Obj5597fc();
    virtual void vfunc14();
    virtual void vfunc18() = 0;
    virtual void vfunc1c() = 0;
    virtual void vfunc20() = 0;
    /* 0x58 */ u8 firstState;
    /* 0x59 */ u8 secondState;
    /* 0x5A */ u8 unk5a[2];
    /* 0x5C */ SmallTextString text;
    /* 0x6C */ u8 ready;
    /* 0x6D */ u8 unk6d[3];
    /* 0x70 */ u32 result;
    /* 0x74 */ u8 pending;
};

#endif
