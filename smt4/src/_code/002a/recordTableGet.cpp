#include "font/FontStringReader.h"
#include "shard/W6_W6Match3_NameFormState.h"
extern "C" {
extern FontRecordPool DAT_00464a70;
/* Gets an indexed record when the pool is allocated and the index is valid. */
void *recordTableGet(u32 index)
{
    if (DAT_00464a70.records != NULL && index < DAT_00464a70.count) {
        return &DAT_00464a70.records[index];
    }
    return NULL;
}
}
