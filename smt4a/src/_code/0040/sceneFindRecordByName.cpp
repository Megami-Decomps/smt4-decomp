#include "classes/Obj557b68.h"
#include <string.h>

struct NamedSceneRecord {
    u8 unk00[8];
    const char *name;
};

extern "C" {

NamedSceneRecord *sceneFindRecordByName(Obj557b68 *scene, u32 group, const char *name)
{
    std::vector<u32>::iterator cursor = scene->vectors.records[group].words.begin();
    std::vector<u32>::iterator end = scene->vectors.records[group].words.end();
    for (; cursor != end; ++cursor) {
        NamedSceneRecord *record = (NamedSceneRecord *)*cursor;
        if (record != NULL && strcmp(record->name, name) == 0) {
            return record;
        }
    }
    return NULL;
}
}
