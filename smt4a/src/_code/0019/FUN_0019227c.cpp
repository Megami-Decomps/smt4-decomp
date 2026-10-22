/* NON_MATCHING: the second unrolled hit computes the record address in different registers. */
#include "gamedata/Table8Record.h"
#include "addon/aocMain.h"

extern "C" {
// Find the first table-eight record carrying the requested id.
Table8Record* FUN_0019227c(const AocSystemA* system, u32 id)
{
    // Downloadable table-eight records lie beyond the shared AOC prefix's recovered end.
    struct Table8CollectionView {
        u8 unk000[0x3A8];
        s32 count;
        Table8Record* records;
    };
    typedef char Table8CollectionOffsets[offsetof(Table8CollectionView, count) == 0x3A8 &&
        offsetof(Table8CollectionView, records) == 0x3AC ? 1 : -1];
    const Table8CollectionView* collection = reinterpret_cast<const Table8CollectionView*>(system);
    for (s32 i = 0; i < collection->count; ++i) {
        if (collection->records[i].id == id) {
            return &collection->records[i];
        }
    }
    return NULL;
}
}
