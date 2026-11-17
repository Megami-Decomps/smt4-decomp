#include "common.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

/* Returns 1 when the candidate exists and has id 0xAF. */
u32 saveSlotSelectedIsId175(void)
{
    PartySlotA *candidate;
    u32 result;

    candidate = saveSlotFindSelected();
    if ((candidate == NULL) || (candidate->id != 0xAF)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
