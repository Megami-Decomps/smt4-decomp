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

#endif
