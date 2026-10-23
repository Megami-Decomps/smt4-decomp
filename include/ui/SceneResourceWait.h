#ifndef UI_SCENERESOURCEWAIT_H
#define UI_SCENERESOURCEWAIT_H
#include "common.h"
#include <stddef.h>
struct SceneResourceWaitState {
    u32 flags;
    u8 unk00004[0x180];
    void *resource; /* 0x184 */
    u32 resourceReady; /* 0x188 */
    u8 unk0018C[0x15E94];
    u32 textureJobs[2]; /* 0x16020 */
    u8 unk16028[0x28];
    u32 loaderState; /* 0x16050 */
    u32 loader; /* 0x16054 */
};
typedef char SceneResourceWaitOffsets[offsetof(SceneResourceWaitState, resource) == 0x184 && offsetof(SceneResourceWaitState, textureJobs) == 0x16020 && offsetof(SceneResourceWaitState, loaderState) == 0x16050 && sizeof(SceneResourceWaitState) == 0x16058 ? 1 : -1];
#endif
