#include "shard/Shard003B.h"

/* Copy the pool's scalar render parameters. */
extern "C" void FUN_003b0350(ResSet *destination, const ResSet *source)
{
    destination->h34 = source->h34;
    destination->h38 = source->h38;
    destination->a[5] = source->a[5];
    destination->a[6] = source->a[6];
    destination->params24[0] = source->params24[0];
    destination->params24[1] = source->params24[1];
    destination->params24[2] = source->params24[2];
    destination->params24[3] = source->params24[3];
    destination->a[4] = source->a[4];
    destination->h1 = source->h1;
    destination->a[0] = source->a[0];
}
