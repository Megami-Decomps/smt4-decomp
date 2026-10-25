/* Clearing of a UI resource parameter packet. */
#ifndef UI_PARAMSCLEARPACKET_H
#define UI_PARAMSCLEARPACKET_H

#include "shard/W6_W6Match8_UiResourceParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Clears every count, pointer and padding byte in the resource packet. */
void paramsClearPacket(UiResourceParameters *parameters);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
