#include "shard/Shard0041.h"
#include "classes/Obj557d5c.h"

extern "C" {

extern u8 _ZTV9Obj557d58[];
extern void itemTableClear(Obj557d5cTable *table);
extern void asdOperatorDelete(Obj557d5c *obj);

/* C ABI retained: retail installs Obj557d58's table, not the named class's generated table. */
void _ZN9Obj557d5cD0Ev(Obj557d5c *obj)
{
    *(const void **)obj = _ZTV9Obj557d58 + 8;
    itemTableClear(&obj->first);
    itemTableClear(&obj->second);
    itemTableClear(&obj->second);
    itemTableClear(&obj->first);
    asdOperatorDelete(obj);
}

} /* extern "C" */
