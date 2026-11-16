#include "classes/Obj557b68.h"
#include <string.h>

struct NamedSceneRecord {
    u8 unk00[8];
    const char *name;
};

extern "C" {

NamedSceneRecord *sceneFindRecordByName(Obj557b68 *scene, u32 group, const char *name)
{
    u32 *cursor = scene->records[group].begin;
    u32 *end = scene->records[group].end;
    for (; cursor != end; ++cursor) {
        NamedSceneRecord *record = (NamedSceneRecord *)*cursor;
        if (record != NULL && strcmp(record->name, name) == 0) {
            return record;
        }
    }
    return NULL;
}
}
