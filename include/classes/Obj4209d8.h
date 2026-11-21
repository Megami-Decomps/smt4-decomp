#ifndef CLASSES_OBJ4209D8_H
#define CLASSES_OBJ4209D8_H
#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include <stddef.h>


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
    /* 0x064 */ u32 color;
    /* 0x068 */ u32 unk68;
    /* 0x06C */ u32 modulation;
    /* 0x070 */ u8 unk70[0x28];
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

/* The cell colour defaults at smt4 0x439ce0: the flashing status colour, its pulse duration and
 * depth, and the tint that leaves a cell's colour unmodulated. */
struct Obj4209d8ColorDefaults {
    /* 0x00 */ u8 statusRed;
    /* 0x01 */ u8 statusGreen;
    /* 0x02 */ u8 statusBlue;
    /* 0x03 */ u8 statusAlpha;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ u32 statusDuration;   /* frames of one pulse */
    /* 0x14 */ f32 statusDepth;      /* fraction of the colour the pulse starts from */
    /* 0x18 */ u32 unmodulated;      /* tint that leaves the cell colour as it is */
};
typedef char Obj4209d8ColorDefaultsCheck[offsetof(Obj4209d8ColorDefaults, statusDuration) == 0x10 &&
    offsetof(Obj4209d8ColorDefaults, unmodulated) == 0x18 ? 1 : -1];

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
