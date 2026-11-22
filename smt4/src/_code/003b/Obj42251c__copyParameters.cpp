#include "classes/Obj42251c.h"

/* Copy the pool's scalar render parameters. */
extern "C" void _ZN9Obj42251c14copyParametersEPKv(Obj42251cData *destination, const Obj42251cData *source)
{
    destination->lowNibble = source->lowNibble;
    destination->highNibble = source->highNibble;
    destination->first = source->first;
    destination->second = source->second;
    destination->third = source->third;
    destination->fourth = source->fourth;
    destination->fifth = source->fifth;
    destination->sixth = source->sixth;
    destination->flags = source->flags;
    destination->unk04 = source->unk04;
    destination->unk08 = source->unk08;
}
