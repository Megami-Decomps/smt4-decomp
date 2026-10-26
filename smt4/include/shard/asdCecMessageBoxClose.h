#ifndef SHARD_ASDCECMESSAGEBOXCLOSE_H
#define SHARD_ASDCECMESSAGEBOXCLOSE_H

#include "common.h"
#include "AsdSDK/Source/Net/Cec/AsdCec.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Closes the message box (tail call into the function that follows it). */
void asdCecMessageBoxClose(AsdCecMessageBox *box);

#ifdef __cplusplus
}
#endif

#endif
