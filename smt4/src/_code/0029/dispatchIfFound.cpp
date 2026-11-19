#include "common.h"
#include "code/Code0029.h"

extern "C" {

int FUN_001a7dbc(...);
extern int gameGetUnitRecord(u32 id); // declcheck: local (the shared declaration in gamedata/UnitRecordAccess.h does not compile here: a value of type "StatBlock *" cannot be used to initialize an entity of type "int")

/* Initialises the unit record of `slot` for unit `id` (FUN_001a7dbc), when the slot has one. */
void dispatchIfFound(s32 slot, u32 id, s32 kind)
{
    int owner = gameGetUnitRecord(slot);

    if (owner != 0) {
        FUN_001a7dbc(owner, slot, id, kind);
        return;
    }
}

} /* extern "C" */
