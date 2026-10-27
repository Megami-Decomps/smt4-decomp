#include "common.h"
struct Vector3 { u32 x,y,z; };
struct CameraState { u8 unk000[1460]; Vector3 currentFirst,currentSecond,sourceFirst,sourceSecond; };
/* Copies the two source vectors into the current state. */
extern "C" void FUN_00407a80(CameraState *camera) { camera->currentFirst=camera->sourceFirst;camera->currentSecond=camera->sourceSecond; }
