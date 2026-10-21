/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0a44` (_code @ 0x1c0a44, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a2dc8(unsigned int);
int sceneTraverserVisit(unsigned int, unsigned int);
int FUN_002abbe8(int, int);
int nw_gfx_SceneNode_AttachChild(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b80; /* 0x464b80 */
extern unsigned int g_asdModelTransformBuilder; /* 0x464b84 */
extern unsigned int DAT_00464b88; /* 0x464b88 */
extern int sceneGroup1Root; /* 0x464b8c */
extern int sceneGroup4Root; /* 0x464b90 */
extern int sceneGroup2Root; /* 0x464b94 */
extern int sceneGroup5Root; /* 0x464b98 */
extern int g_asdLightCount; /* 0x4dad80 */
extern unsigned char DAT_004dad84; /* 0x4dad84 */
extern unsigned char DAT_004dad85; /* 0x4dad85 */
extern int DAT_004dad98; /* 0x4dad98 */

/* Supplied declaration required: FUN_002a2dc8. */
/* Supplied declaration required: sceneTraverserVisit. */
/* Supplied declaration required: FUN_002abbe8. */
/* Supplied declaration required: nw_gfx_SceneNode_AttachChild. */


void FUN_001c0a44(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = sceneGroup1Root;
  if (param_2 != 1) {
    if (param_2 == 2) {
      temp_v0 = 0;
      temp_v2 = sceneGroup2Root;
      FUN_002a2dc8(temp_v0);
    }
    else {
      temp_v2 = sceneGroup4Root;
      if (param_2 != 4) {
        if (param_2 != 5) {
          return;
        }
        temp_v0 = 1;
        temp_v2 = sceneGroup5Root;
        FUN_002a2dc8(temp_v0);
      }
    }
  }
  if (temp_v2 == 0) {
    return;
  }
  temp_v2 = *(int *)(param_1 + 0xc);
  if (sceneGroup2Root == temp_v2) {
    temp_v1 = 0;
  }
  else {
    if (sceneGroup5Root != temp_v2) {
      FUN_002abbe8(temp_v2 + 0x10,param_1);
      if (param_2 >= 3) {
        sceneTraverserVisit(DAT_00464b80,DAT_00464b88);
        DAT_004dad98 = DAT_004dad98 - 1;
        return;
      }
      sceneTraverserVisit(DAT_00464b7c,g_asdModelTransformBuilder);
      g_asdLightCount = g_asdLightCount - 1;
      return;
    }
    temp_v1 = 1;
  }
  FUN_002abbe8(temp_v2 + 0x10,param_1);
  if (*(int *)(temp_v2 + 0x18) == *(int *)(temp_v2 + 0x1c)) {
    (&DAT_004dad84)[temp_v1 * 0x18] = 0;
    (&DAT_004dad85)[temp_v1 * 0x18] = 0;
    nw_gfx_SceneNode_AttachChild((&g_asdModelTransformBuilder)[temp_v1],(&sceneGroup2Root)[temp_v1]);
    sceneTraverserVisit((&DAT_00464b7c)[temp_v1],(&g_asdModelTransformBuilder)[temp_v1]);
  }
  if (temp_v1 != 0) {
    sceneTraverserVisit(DAT_00464b80,DAT_00464b88);
    DAT_004dad98 = DAT_004dad98 - 1;
    return;
  }
  sceneTraverserVisit(DAT_00464b7c,g_asdModelTransformBuilder);
  g_asdLightCount = g_asdLightCount - 1;
  return;
}

} /* extern "C" */
