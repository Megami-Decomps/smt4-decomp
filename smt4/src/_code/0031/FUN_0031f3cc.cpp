#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

int scrSetResult(int result);
extern u32 scrGetArg(u32 index);

u32 FUN_0031f3cc(void)
{
    u16 id = scrGetArg(0);
    Table00Record *record = dataTable00FindById(id);

    scrSetResult((record->scriptFlags & 3) >> 1);
    return 1;
}

} /* extern "C" */
