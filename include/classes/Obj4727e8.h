#ifndef CLASSES_OBJ4727E8_H
#define CLASSES_OBJ4727E8_H

#include "common.h"

/* 48-byte entry; the first word is the id handed to the per-entry release function. */
struct Obj4727e8Entry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 mask;        /* randomized at start-up */
    /* 0x18 */ u8 unk18[0x18];
};

/* The entry table: a pointer to the first entry and the block it lives in at +0x0C. */
struct Obj4727e8Table {
    /* 0x00 */ Obj4727e8Entry *entries;
    /* 0x04 */ f32 base;
    /* 0x08 */ f32 step;
    /* 0x0C */ void *block;
};

/* Where the number of entries lives. */
struct Obj4727e8Counter {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 span;
    /* 0x38 */ u32 count;
    /* 0x3C */ u8 unk3c[0x50];
    /* 0x8C */ f32 baseScale;
    /* 0x90 */ f32 baseBlend;
    /* 0x94 */ f32 endScale;
    /* 0x98 */ f32 endBlend;
};

/* The entry table and its counter, adjacent in the owner. */
struct Obj4727e8Ref {
    /* 0x00 */ Obj4727e8Table *table;
    /* 0x04 */ Obj4727e8Counter *counter;
};

/* The object whose vtable is at 0x4727e8 (named after it until its real name is known): a sibling
 * of Obj4727b8 with 48-byte entries. */
class Obj4727e8 {
public:
    virtual void initEntries();   /* +0x00: _ZN9Obj4727e811initEntriesEv */
    virtual void vfunc04();
    virtual void releaseEntries();   /* +0x08 */
    virtual void vfunc0c();
    virtual void vfunc10();

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x2C];
    /* 0x30 */ Obj4727e8Ref ref;
};

#endif
