#include "shard/S1NwGfx.h"

extern "C" {

void FUN_00149e94(SizeCalculator *calc, ShapeStreamList *list);

/* Add the size of a shape's vertex streams to the layout. */
void FUN_00149e80(SizeCalculator *calc, ShapeResource *shape)
{
    const RelativePointer *rp = &shape->streamList;
    FUN_00149e94(calc, (ShapeStreamList *)rp->get());
}

} /* extern "C" */
