/* NON_MATCHING: romwright 0.5.0 decompilation of `sceneNodeCollectionRegisterGroup` (_code @ 0x1db998, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match7_SceneAttachment.h"

extern "C" {

int FUN_002a2dc8(unsigned int);
int sceneTraverserVisit(unsigned int, unsigned int);

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int g_asdModelTransformBuilder; /* 0x464b84 */
extern int sceneGroup1Root; /* 0x464b8c */
extern int sceneGroup4Root; /* 0x464b90 */
extern int sceneGroup2Root; /* 0x464b94 */
extern int sceneGroup5Root; /* 0x464b98 */
extern unsigned int g_asdLightCount; /* 0x4dad80 */

/* Supplied declaration required: FUN_002a2dc8. */
/* Supplied declaration required: sceneTraverserVisit. */


void sceneNodeCollectionRegisterGroup(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = sceneGroup1Root;
  if (param_2 != 1) {
    if (param_2 == 2) {
      temp_v0 = 0;
      temp_v1 = sceneGroup2Root;
      FUN_002a2dc8(temp_v0);
    }
    else {
      temp_v1 = sceneGroup4Root;
      if (param_2 != 4) {
        if (param_2 != 5) {
          return;
        }
        temp_v0 = 1;
        temp_v1 = sceneGroup5Root;
        FUN_002a2dc8(temp_v0);
      }
    }
  }
  if (temp_v1 != 0) {
    sceneNodeCollectionAttach(reinterpret_cast<const SceneNodeCollection *>(param_1),
                 reinterpret_cast<SceneNode *>(temp_v1));
    temp_v2 = (unsigned int)(param_2 >= 3);
    sceneTraverserVisit((&DAT_00464b7c)[temp_v2],(&g_asdModelTransformBuilder)[temp_v2]);
    (&g_asdLightCount)[temp_v2 * 6] = (&g_asdLightCount)[temp_v2 * 6] + 1;
    *(int *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x10) = param_2;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
