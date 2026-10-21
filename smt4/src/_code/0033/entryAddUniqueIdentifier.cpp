#include "common.h"

struct IdTable { u8 unk00[0x21dc]; s16 ids[42]; };
/* Adds an identifier to the first empty slot unless it already exists. */
extern "C" void entryAddUniqueIdentifier(IdTable *table, s32 id)
{
    for (s32 index = 0; index < 42; ++index) {
        if (table->ids[index] == id)
            return;
        if (table->ids[index] <= 0) {
            table->ids[index] = id;
            return;
        }
    }
}
