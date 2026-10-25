#ifndef CLASSES_OBJ4209D8_H
#define CLASSES_OBJ4209D8_H
#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"


struct Obj4209d8Position {
    f32 x, y, z;
};

struct Obj4209d8Cell {
    /* 0x000 */ u8 unk00[0xC];
    /* 0x00C */ Obj4209d8Position position;
    /* 0x018 */ u8 unk18[0x30];
    /* 0x048 */ s32 hasOffset;
    /* 0x04C */ u32 unk4c;
    /* 0x050 */ u32 flags;
    /* 0x054 */ u8 unk54[0xE];
    /* 0x062 */ s16 unitId;
    /* 0x064 */ u8 unk64[0x34];
    /* 0x098 */ u32 colorPhase;
    /* 0x09C */ u8 unk9c[0x20];
    /* 0x0BC */ f32 height;
    /* 0x0C0 */ u8 unkc0[0x40];
    /* 0x100 */ u8 offsetRange[0x14];
};
struct Obj4209d8Owner {
    u8 unk00[0x1E98];
    Obj4209d8Cell *cells;
    u32 unk1e9c;
    u32 colorPhase;
};

/* Independent model/grid query interface, not the Obj4209cc resource owner. */
class Obj4209d8 {
public:
    explicit Obj4209d8(Obj4209d8Owner *newOwner) : owner(newOwner) {}

    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    virtual ~Obj4209d8();
    virtual s32 implementationId() const;
    virtual s32 isCellReady(s32 index) const;
    virtual void vfunc10();
    virtual const f32 *getCellPosition(s32 index);
    virtual void vfunc18();
    virtual void vfunc1c();
    virtual u32 getTint(u32 index) const;
    virtual u32 getCellColor(s32 index) const;
    /* 0x04 */ Obj4209d8Owner *owner;
    /* 0x08 */ Obj4209d8Position position;
};
#endif
