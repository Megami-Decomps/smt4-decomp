#include "battle/btlTalk.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "gamedata/DataTableAccess_VariantA.h"

extern "C" {

/* Returns the first table in the negotiation data file, if it is loaded. */
void *btlTalkGetTableSection0(BtlTalkA *talk)
{
    if (talk->tableFile != NULL) {
        return dataTableFileGetTable(reinterpret_cast<u32>(talk->tableFile), 0);
    }
    return NULL;
}

} /* extern "C" */
