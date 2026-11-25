#include "shard/W6_W6Match8_UiResourceParameters.h"

extern "C" {

/* Fills a sprite's animation resource with its tables and their byte sizes: position keys, opacity keys, scale keys,
   image frames and commands. */
void paramsInit(UiResourceParameters *parameters,
    const void *first, u32 firstBytes, const void *second, u32 secondBytes,
    const void *third, u32 thirdBytes, const void *fourth, u32 fourthBytes,
    const void *fifth, u32 fifthBytes)
{
    parameters->positionKeyBytes = firstBytes;
    parameters->alphaKeyBytes = secondBytes;
    parameters->scaleKeyBytes = thirdBytes;
    parameters->frameKeyBytes = fourthBytes;
    parameters->commandBytes = fifthBytes;
    parameters->positionKeys = (UiSpritePositionKey *)first;
    parameters->alphaKeys = (UiSpriteScalarKey *)second;
    parameters->scaleKeys = (UiSpriteScalarKey *)third;
    parameters->frameKeys = (UiSpriteFrameKey *)fourth;
    parameters->commands = (SpriteAnimationCommand *)fifth;
}

} /* extern "C" */
