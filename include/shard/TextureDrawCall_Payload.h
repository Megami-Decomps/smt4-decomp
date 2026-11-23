#ifndef SHARD_TEXTURE_DRAW_CALL_PAYLOAD_H
#define SHARD_TEXTURE_DRAW_CALL_PAYLOAD_H

#include "shard/TextureDrawPayload.h"

/* Draws a texture with its stored origin. Both games take the last two words as a payload by value.
 * TextureDrawCall.h provides the older scalar declaration for callers that still use that ABI view. */
extern "C" void texDrawTableEntryAtStoredOrigin(u32 flags, u32 table, s32 id,
                                               u32 argument, TextureDrawPayloadIV payload);

#endif
