/* NON_MATCHING: count/end-pointer zero initialization moves are emitted in the opposite order. */
#include "shard/W6_W6Match4_RelativeDirectory.h"

extern "C" {
// Recover the directory length from the start of the first nonempty data block.
void FUN_00476e0c(RelativeDirectory *directory)
{
    DirectoryRecord *dataBegin = NULL;
    s32 count = 0;
    for (;; ++count) {
        DirectoryRecord *record = (DirectoryRecord *)((u8 *)directory + directory->recordsOffset) + count;
        if (record == dataBegin) {
            break;
        }
        if (record->size != 0 && dataBegin == NULL) {
            dataBegin = (DirectoryRecord *)((u8 *)directory + record->dataOffset);
        }
    }
    directory->count = count;
}
}
