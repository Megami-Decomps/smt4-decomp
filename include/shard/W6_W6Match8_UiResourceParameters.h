#ifndef SHARD_W6_W6MATCH8_UI_RESOURCE_PARAMETERS_H
#define SHARD_W6_W6MATCH8_UI_RESOURCE_PARAMETERS_H

#include "common.h"
#include "ui/UiSpriteState.h"

/* UiResourceParameters stores the sprite resource sizes as halfwords. The initializer takes word-sized
 * byte counts and narrows them when writing the packet. */
extern "C" void paramsInit(UiResourceParameters *parameters,
    const void *first, u32 firstBytes, const void *second, u32 secondBytes,
    const void *third, u32 thirdBytes, const void *fourth, u32 fourthBytes,
    const void *fifth, u32 fifthBytes);


#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_001e0698(void);

#ifdef __cplusplus
}
#endif

#endif
