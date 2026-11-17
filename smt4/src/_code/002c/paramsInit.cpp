/* NON_MATCHING: register allocation and store grouping only: retail loads the stack halfwords into r6,r5,ip,r4 and stores the two words with writeback (str [r0,#12]!; str [r0,#4]!), the build uses r4-r6 in order and stm */
#include "shard/W6_W6Match8_UiResourceParameters.h"

extern "C" {

/* Fills a sprite's animation resource with its tables and their byte sizes: position keys, opacity keys, scale keys,
   image frames and commands. */
void paramsInit(UiResourceParameters *parameters,
    const void *first, u16 firstBytes, const void *second, u16 secondBytes,
    const void *third, u16 thirdBytes, const void *fourth, u16 fourthBytes,
    const void *fifth, u16 fifthBytes)
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
