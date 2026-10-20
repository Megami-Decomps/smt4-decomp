#include "shard/Shard0035.h"

extern "C" {

extern u32 *gameGetSlotTable(void);
extern void scrSetResult(u32 value);

/* Script command: result is the first word of the party data. */
u32 scrCommGetPartyWord0(void)
{
    scrSetResult(*gameGetSlotTable());
    return 1;
}

} /* extern "C" */
