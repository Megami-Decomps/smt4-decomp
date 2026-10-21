/* Initializes the 0x544-byte sub-object at +4 (2 elements, comparator at 0x33B5BC) and returns the object. */
#include "common.h"

extern "C" {

typedef struct Container {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 items[0x544];
} Container;

extern void rt_vec_dtor(void *items, void *callback, s32 size, s32 count);

Container *vecContainerDestroy(Container *container)
{
    rt_vec_dtor(container->items, (void *)0x0033B5BC, 0x544, 2);
    return container;
}

}
