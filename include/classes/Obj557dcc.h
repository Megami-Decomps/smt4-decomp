#ifndef CLASSES_OBJ557DCC_H
#define CLASSES_OBJ557DCC_H

#include "common.h"
#include <stddef.h>
#include <vector>

extern "C" {
void resourceListDestroy(void *resources);
void asdOperatorDelete(void *allocation);
}

struct ResourceListOwnerEntry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ void *resources;

    ~ResourceListOwnerEntry()
    {
        if (resources != NULL) {
            resourceListDestroy(resources);
            resources = NULL;
        }
    }
    static void operator delete(void *allocation) { asdOperatorDelete(allocation); }
};

class Obj557dcc {
public:
    Obj557dcc(u32 value);
    virtual ~Obj557dcc();

    /* 0x00: vtable pointer */
    /* 0x04 */ u32 value;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ std::vector<ResourceListOwnerEntry *> entries;
};

typedef char ResourceListOwnerEntrySizeCheck[sizeof(ResourceListOwnerEntry) == 0x10 ? 1 : -1];
typedef char ResourceListOwnerSizeCheck[sizeof(Obj557dcc) == 0x18 ? 1 : -1];

#endif
