#include "common.h"
struct Vector3 { f32 x,y,z; };
struct Motion { u8 unk00[28]; Vector3 first,second; };
/* Clears both motion vectors. */
extern "C" void motionClearVectors(Motion *motion) { motion->first.z=0;motion->first.y=0;motion->first.x=0;motion->second.z=0;motion->second.y=0;motion->second.x=0; }
