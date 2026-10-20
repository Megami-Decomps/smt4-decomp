#include "shard/S2GfxParticleShape.h"

extern "C" {

extern void FUN_001cf464(SizeCalculator *calc, ParticleAttributeList *list);

/* Adds the size of a particle shape's vertex streams to `calc` (FUN_001cf464). */
void FUN_001cf450(SizeCalculator *calc, ResParticleShape *shape)
{
    RelativeOffset *field = &shape->attributeList;

    FUN_001cf464(calc, (ParticleAttributeList *)relativeOffsetTarget(field));
}

} /* extern "C" */
