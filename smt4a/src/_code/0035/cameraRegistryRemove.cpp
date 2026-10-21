#include "shard/W5_W5Match2_CameraRegistry.h"
extern "C" {
extern CameraRegistry g_asdCamera;
/* Remove the first occurrence of a camera from the registry. */
void cameraRegistryRemove(RegistryCamera *camera) { for (s32 index=0;index<32;++index) { if (g_asdCamera.entries[index]==camera) { g_asdCamera.entries[index]=NULL; return; } } }
}
