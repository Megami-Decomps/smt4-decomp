#include "common.h"
struct Vector3 { f32 x,y,z; };
struct VectorEntry { Vector3 value; u8 unk0C[0x10]; };
struct VectorOwner { u8 unk00[0x34]; VectorEntry entries[1]; };
/* Returns an indexed vector. */
extern "C" Vector3 FUN_004112b0(VectorOwner *owner, u32 index) { return owner->entries[index].value; }
