/* NON_MATCHING: implicit member teardown uses different loop and this-adjustment register scheduling. */
#include "classes/Obj559edc.h"

extern "C" {
void asdOperatorDeleteArray(void *memory);
extern const u8 _ZTV9Obj55a4b8[];
}

template <class Entry> inline Obj559edcEntries<Entry>::~Obj559edcEntries()
{
    Entry *last = end;
    for (Entry *entry = begin; entry != last; ++entry) {
        entry->~Entry();
    }
    asdOperatorDeleteArray(begin);
}

inline Obj559edcVector::~Obj559edcVector()
{
    vtable = _ZTV9Obj55a4b8 + 8;
    asdOperatorDeleteArray(data);
}

/* Members release the entry arrays, vectors, buffer and address in reverse order. */
Obj559edc::~Obj559edc()
{
}
