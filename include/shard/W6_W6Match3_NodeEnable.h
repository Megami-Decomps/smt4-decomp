#ifndef SHARD_W6_W6MATCH3_NODEENABLE_H
#define SHARD_W6_W6MATCH3_NODEENABLE_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* An owner of one model object: ready flag at 0x15, the model object at 0x20. The model object,
 * its model and scene node are AsdMdlObject / AsdMdlNode / AsdMdlSceneNode (AsdMdlManager.h). */
struct NodeEnableOwner {
    u8 unk00[0x15];
    u8 ready;  // 0x15
    u8 unk16[0xa];
    AsdMdlObject* node;  // 0x20
};

#endif
