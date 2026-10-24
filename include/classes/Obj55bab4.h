#ifndef OBJ55BAB4_H
#define OBJ55BAB4_H

#include "classes/AllocatedArray.h"

struct ArrayEntry {
    f32 unk00;
    f32 unk04;
    f32 unk08;
    void *unk0c;

    ~ArrayEntry() {}
};

/* The array destructor is its own function (instantiated elsewhere), called for each array. */
extern template class AllocatedArray<ArrayEntry>;

/* The twin of Obj421698 (smt4): the list owner whose vtable is at 0x55bab4 (named after it until
 * its real name is known): two arrays of entries after the vtable pointer and a spare word. */
class Obj55bab4 {
public:
    virtual ~Obj55bab4();

    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ AllocatedArray<ArrayEntry> entries;
    /* 0x18 */ AllocatedArray<ArrayEntry> extraEntries;
};

typedef char Obj55bab4SizeCheck[sizeof(Obj55bab4) == 0x28 ? 1 : -1];

#endif
