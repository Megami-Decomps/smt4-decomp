#ifndef OBJ421698_H
#define OBJ421698_H

#include "classes/AllocatedArray.h"

struct WeightedEntry {
    float unk00;
    float weight;
    float unk08;
    void *item;

    ~WeightedEntry() {}
};

/* The array destructor is its own function (instantiated elsewhere), called for each array. */
extern template class AllocatedArray<WeightedEntry>;

/* The weighted-entry list owner whose vtable is at 0x421698 (named after it until its real name is
 * known): two arrays of weighted entries after the vtable pointer and a spare word. */
class Obj421698 {
public:
    virtual ~Obj421698();

    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ AllocatedArray<WeightedEntry> entries;
    /* 0x18 */ AllocatedArray<WeightedEntry> extraEntries;
};

typedef char Obj421698SizeCheck[sizeof(Obj421698) == 0x28 ? 1 : -1];

#endif
