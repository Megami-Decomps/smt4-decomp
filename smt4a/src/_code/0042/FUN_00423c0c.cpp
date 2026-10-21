/* NON_MATCHING: compiler emits separate zero stores instead of retail stm triple. */
#include "common.h"
struct Vector3 {u32 x,y,z;};
struct ResourceState {u8 unk00[12];s32 handle;u8 unk10[8];Vector3 position;u8 first,second;};
extern "C" {
void FUN_00423144(s32 handle);
/* Releases a valid resource and clears its transform state. */
void FUN_00423c0c(ResourceState *state){if(state->handle!=-1){FUN_00423144(state->handle);state->first=0;state->second=0;state->position.x=0;state->position.y=0;state->position.z=0;}}
}
