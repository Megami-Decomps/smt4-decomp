/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152ed8` (_code @ 0x152ed8, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int settings5BClearFlags(int);
int FUN_002c2968(unsigned int, unsigned int);
int nw_gfx_SceneNode_AttachChild(unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_00464b10; /* 0x464b10 */
extern unsigned int DAT_00464b20; /* 0x464b20 */
extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int g_asdModelTransformBuilder; /* 0x464b84 */
extern unsigned int g_asdModelSlotArray0; /* 0x464b9c */
extern int g_asdModelSlotArray3; /* 0x464bb4 */
extern unsigned int DAT_00464bbc; /* 0x464bbc */

/* Supplied declaration required: settings5BClearFlags. */
extern int asdModelGetSlotArray0(unsigned int);
/* Supplied declaration required: FUN_002c2968. */
/* Supplied declaration required: nw_gfx_SceneNode_AttachChild. */


/* WARNING: Removing unreachable block (ram,0x00152fe0) */
/* WARNING: Removing unreachable block (ram,0x00153048) */
/* WARNING: Removing unreachable block (ram,0x00152fe8) */

void FUN_00152ed8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int temp_v1;
  int *piVar6;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = asdModelGetSlotArray0(0);
  piVar2 = *(int **)(temp_v0 + 0x18);
  piVar6 = *(int **)(temp_v0 + 0x1c);
  param_1 = param_1 + *(int *)(param_1 + 4) * 4;
  temp_v1 = *(int *)(param_1 + 0x56c);
  while( 1 ) {
    if (piVar2 != piVar6) {
      param_1 = *piVar2;
    }
    if (piVar2 == piVar6 || param_1 == temp_v1) break;
    piVar2 = piVar2 + 1;
  }
  if (piVar2 != piVar6) {
    piVar3 = piVar2 + 1;
    temp_v2 = (int)piVar6 - (int)piVar3;
    if (0 < temp_v2 >> 2) {
      piVar6 = piVar2;
      if (temp_v2 * 0x20000000 < 0) {
        temp_v3 = *piVar3;
        piVar3 = piVar2 + 2;
        if (temp_v3 != temp_v1) {
          piVar6 = piVar2 + 1;
          *piVar2 = temp_v3;
        }
      }
      piVar2 = piVar6;
      for (temp_v2 = temp_v2 >> 3; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
        piVar6 = piVar2;
        if (*piVar3 != temp_v1) {
          piVar6 = piVar2 + 1;
          *piVar2 = *piVar3;
        }
        piVar4 = piVar3 + 1;
        piVar3 = piVar3 + 2;
        piVar2 = piVar6;
        if (*piVar4 != temp_v1) {
          piVar2 = piVar6 + 1;
          *piVar6 = *piVar4;
        }
      }
    }
  }
  piVar6 = *(int **)(temp_v0 + 0x1c);
  *(int **)(temp_v0 + 0x1c) = piVar2;
  if (piVar6 != piVar2) {
    *(unsigned int *)(temp_v1 + 0xc) = 0;
  }
  settings5BClearFlags(1);
  temp_v0 = *(int *)(g_asdModelSlotArray3 + 4);
  DAT_00464b10 = DAT_00464b20;
  nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray0);
  **(unsigned int **)(temp_v0 + 0xac) = DAT_00464b10;
  DAT_00464bbc = 0;
  FUN_002c2968(DAT_00464b7c,g_asdModelTransformBuilder);
  return;
}

} /* extern "C" */
