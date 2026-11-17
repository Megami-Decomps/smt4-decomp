/* Script command: result = the alternate talk tone of the demon in the argument (0 if there is none). Returns 1. */
#include "gamedata/DevilRecordA.h"

extern "C" {

u32 scrGetArg(u32 index);
void scrSetResult(u32 value);

u32 FUN_003a94f0(void)
{
    u16 id = scrGetArg(0);
    u32 result = 0;
    DevilRecordA *entry = devilGetRecord(id);

    if (entry != NULL) {
        result = entry->talkAlternate;
    }
    scrSetResult(result);
    return 1;
}

}
