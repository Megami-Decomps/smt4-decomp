#include "shard/W6_W6Match3_NamedRecord.h"
#include <string.h>

// Activate a named record and replace its fixed-size name.
extern "C" void namedRecordActivate(W6Match3NamedRecord* record, u16 id, const char* name)
{
    record->active = 1;
    record->id = id;
    memset(record->name, 0, sizeof(record->name));
    strncpy(record->name, name, sizeof(record->name));
}
