#ifndef SHARD_W6_W6MATCH8_UI_RESOURCE_PARAMETERS_H
#define SHARD_W6_W6MATCH8_UI_RESOURCE_PARAMETERS_H

#include "common.h"
#include "ui/UiSpriteState.h"

/* UiResourceParameters, a UI sprite's animation resource, is declared with the sprite. */

extern "C" void paramsInit(UiResourceParameters *parameters,
    const void *first, u16 firstBytes, const void *second, u16 secondBytes,
    const void *third, u16 thirdBytes, const void *fourth, u16 fourthBytes,
    const void *fifth, u16 fifthBytes);


#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_001e0698(void);

#ifdef __cplusplus
}
#endif

#endif
