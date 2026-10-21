#ifndef SHARD_W5_W5MATCH2_JOBSNAPSHOT_H
#define SHARD_W5_W5MATCH2_JOBSNAPSHOT_H
#include "common.h"
struct JobPosition { u32 x,y,z; };
struct JobSnapshotWork { u8 unk00[0x34]; JobPosition current; u8 unk40[12]; JobPosition saved; u8 unk58[0x20]; u32 valid; };
#endif
