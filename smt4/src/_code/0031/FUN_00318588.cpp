#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

int scrSetResult(int result);
extern u32 scrGetArg(u32 index);

/* Script command: result is bit 6 of the record's flags halfword (masked to 0x7f). */
u32 FUN_00318588(void)
{
    Table00Record *record = dataTable00FindById((u16)scrGetArg(0));

    scrSetResult((record->flags & 0x7f) >> 6);
    return 1;
}

} /* extern "C" */
