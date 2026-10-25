#ifndef SHARD_W6_W6MATCH8_UI_RESOURCE_PARAMETERS_H
#define SHARD_W6_W6MATCH8_UI_RESOURCE_PARAMETERS_H

#include "common.h"
#include <stddef.h>

struct UiResourceParameters {
    /* 0x00 */ u16 counts[5];
    /* 0x0A */ u16 unk0a;
    /* 0x0C */ const void *chunks[5];
};

typedef char UiResourceParametersLayoutCheck[
    offsetof(UiResourceParameters, counts) == 0 &&
    offsetof(UiResourceParameters, chunks) == 0xc &&
    sizeof(UiResourceParameters) == 0x20 ? 1 : -1];

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
