#include "ui/UiSpriteApi.h"
#include "shard/Shard0034.h"

extern "C" {


void owner2DCInitSub(Owner2DC *owner)
{
    uiSpriteSetKeyframe((UiSpriteState *)owner->sub, 3, 1);
}

} /* extern "C" */
