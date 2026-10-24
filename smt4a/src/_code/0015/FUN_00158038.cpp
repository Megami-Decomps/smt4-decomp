/* NON_MATCHING: vector::erase copy loop (unrolled by two) differs only in instruction scheduling of the pointer increments and subs */
#include "common.h"
#include <vector>
#include <utility>

struct RefCountedObject {
    virtual ~RefCountedObject();
};

typedef std::pair<RefCountedObject *, s32> RefCountEntry; // object, reference count

typedef std::vector<RefCountEntry> RefCountVector;

struct RefCountTable {
    u8 unk00[0x24];         // 0x00
    RefCountVector entries; // 0x24
};

// Drops one reference from every entry; entries that reach zero release their object and are removed.
extern "C" void FUN_00158038(RefCountTable *table)
{
    RefCountVector &entries = table->entries;
    RefCountVector::iterator it = entries.begin();
    while (it != entries.end()) {
        if (--it->second > 0) {
            ++it;
        } else {
            if (it->first != NULL) {
                delete it->first;
                it->first = NULL;
            }
            if (entries.begin() != entries.end()) {
                it = entries.erase(it);
            }
        }
    }
}
