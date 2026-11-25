/* NON_MATCHING: retail advances this in the vtable store and schedules each virtual entry destructor
 * lookup through r1; the build uses a separate add and loads each entry's vtable through r0. */
#include "classes/Obj559edc.h"

template <class Entry> inline Obj559edcEntries<Entry>::~Obj559edcEntries()
{
    Entry *entry = begin;
    Entry *last = end;
    while (entry != last) {
        entry->~Entry();
        ++entry;
    }
    asdOperatorDeleteArray(begin);
}

/* Members release the entry arrays, vectors, buffer and address in reverse order. */
Obj559edc::~Obj559edc()
{
}
