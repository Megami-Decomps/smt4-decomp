/* The battle script unit's action fields, for units that also use shard/W4_Match6_BtlEntry.h's
 * BtlMainState (battle/btlUnit.h's BtlUnit pulls in the conflicting battle/btlMain.h one). Same
 * layout as BtlUnit: the data's action kind and the per-entry target bytes. */
#ifndef SHARD_BTLSCRIPTTARGETS_H
#define SHARD_BTLSCRIPTTARGETS_H

#include "common.h"
#include <stddef.h>

struct BtlScriptActorData {
    /* 0x000 */ u8 unk000[0x14c];
    /* 0x14C */ u16 actionKind;
};

struct BtlScriptActor {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ BtlScriptActorData *data;
    /* 0x2C */ u8 unk2c[0xc];
    /* 0x38 */ s8 targets[0x6d]; /* indexed by battle entry */
};

typedef char BtlScriptActorTargetsOffsetCheck[offsetof(BtlScriptActor, targets) == 0x38 ? 1 : -1];

#endif
