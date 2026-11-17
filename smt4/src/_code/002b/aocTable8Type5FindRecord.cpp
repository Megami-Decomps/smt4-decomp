#include "addon/AocSystem.h"
#include "gamedata/Table8Type5Record.h"

extern "C" {
/* Find an add-on override for a table 8 type 5 record. */
Table8Type5Record *aocTable8Type5FindRecord(AocSystem *system, u32 id)
{
    for (s32 index = 0; index < system->table08[5].count; ++index) {
        if (static_cast<Table8Type5Record *>(system->table08[5].records)[index].id == id) {
            return &static_cast<Table8Type5Record *>(system->table08[5].records)[index];
        }
    }
    return NULL;
}
}
