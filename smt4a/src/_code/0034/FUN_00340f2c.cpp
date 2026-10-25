#include "common.h"
#include "shard/W5_W5Match7_EntrySort.h"

namespace { struct Label { u16 value; u16 text; }; struct Labels { Label entries[4]; u8 flag; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Labels DAT_005b40cc;
void FUN_00340f2c(u16 first, u16 second, u16 third, u16 fourth)
{
    DAT_005b40cc.flag = 1;
    DAT_005b40cc.entries[0].text = first;
    DAT_005b40cc.entries[1].text = second;
    DAT_005b40cc.entries[2].text = third;
    DAT_005b40cc.entries[3].text = fourth;
}
}
