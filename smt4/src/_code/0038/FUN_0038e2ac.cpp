#include "shard/W6_W6Match4_RelativeDirectory.h"

extern "C" {
// Recover the directory length from the start of the first nonempty data block.
void FUN_0038e2ac(RelativeDirectory *directory)
{
    s32 count = 0;
    DirectoryRecord *dataBegin = NULL;
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
