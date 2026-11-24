#include "gamedata/MsSearchTableIV.h"

/* Returns a search mark at the combined base/add-on index, or NULL. */
extern "C" MsSearchRecord *msSearchGetRecordAt(u32 index)
{
    return msSearchGetRecord(index);
}
