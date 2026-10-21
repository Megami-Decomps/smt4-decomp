#include "common.h"
struct StateSnapshot {u32 unk00;u32 value;u8 unk08[128];u8 flags;u8 unk89[3];};struct SnapshotOwner {u8 unk0000[12372];StateSnapshot snapshot;};
extern "C" {void rt_memcpy_w(void*,const void*,u32);
/* A snapshot is ready unless its pending bit is set with no value. */
int FUN_004f9b54(SnapshotOwner *owner){StateSnapshot snapshot;rt_memcpy_w(&snapshot,&owner->snapshot,sizeof(snapshot));return (snapshot.flags&1)==0 || snapshot.value!=0;}}
