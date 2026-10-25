#ifndef SHARD_W6_W6MATCH3_EMITTER_RECORD_H
#define SHARD_W6_W6MATCH3_EMITTER_RECORD_H

#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "shard/W5_W5Match2_RelativeData.h"
#include "shard/W6_W6Match2_EmitterResources.h"

union EmitterResourceRecord {
    RelativeDataB pointer;
    EffMiscDesc description;
};

extern "C" {
ResourceEmitter *effPolygonTrackCreateFromResource(const EmitterResourceRecord *record);
ResourceEmitter *effPolygonTrackCreateFromResource(const EmitterResourceRecord *record);
}

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_002f530c(s32 kind, s32 arg);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void dataTable5Sub3Lookup(u8 kind, u16 value);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void sequenceRequestDeferEx(u32 id, const u32* parameters);

#ifdef __cplusplus
}
#endif

#endif
