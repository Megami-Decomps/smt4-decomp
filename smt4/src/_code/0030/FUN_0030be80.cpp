#include "common.h"
#include "gamedata/Table8Type5Lookup.h"

extern "C" {
u16 FUN_00288e68(u32 id);
s32 FUN_0028d1f4(u32 id);

// Sorts entries by computed linked-record value descending, then linked ID descending.
s32 FUN_0030be80(const u16* first, const u16* second)
{
    Table8Type5Record* a = table8Type5FindById(*first);
    Table8Type5Record* b = table8Type5FindById(*second);
    s32 order = FUN_0028d1f4(FUN_00288e68(*second)) - FUN_0028d1f4(FUN_00288e68(*first));
    if (order == 0) {
        order = b->value - a->value;
    }
    return order;
}
}
