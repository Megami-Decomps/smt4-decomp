#ifndef OBJ4727B8_H
#define OBJ4727B8_H

#include "common.h"

/* 16-byte entry; the first word is the id handed to the per-entry release function. */
struct Obj4727b8Entry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04[3];
};

/* The entry table: a pointer to the first entry at offset 0. */
struct Obj4727b8Table {
    /* 0x00 */ Obj4727b8Entry *entries;
};

/* Where the number of entries lives. */
struct Obj4727b8Counter {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 count;
};

/* The entry table and its counter, adjacent in the owner. */
struct Obj4727b8Ref {
    /* 0x00 */ Obj4727b8Table *table;
    /* 0x04 */ Obj4727b8Counter *counter;
};

/* The object whose vtable is at 0x4727b8 (named after it until its real name is known): it owns a
 * table of entries and a counter that says how many there are. The methods are pure here only so
 * that no unit emits the vtable: the functions exist and the constructors that store the vtable
 * are still C-form. */
class Obj4727b8 {
public:
    virtual void vfunc00() = 0;
    virtual void vfunc04() = 0;
    virtual void releaseEntries() = 0;   /* +0x08 */
    virtual void vfunc0c() = 0;
    virtual void vfunc10() = 0;

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ u8 unk04[0x2C];
    /* 0x30 */ Obj4727b8Ref ref;
};

#endif
