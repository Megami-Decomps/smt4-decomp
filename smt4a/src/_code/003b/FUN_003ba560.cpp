/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba560` (_code @ 0x3ba560, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015d434(unsigned int);
int FUN_0018e9d8(unsigned int, unsigned int);
int FUN_0032c518(unsigned int, int);
int settings5BAddFlags(int);
int nw_gfx_SceneTraverser_Begin(unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_001b9f9c; /* 0x1b9f9c */
extern unsigned int g_effAsdLightHandle; /* 0x5b3c80 */
extern unsigned int DAT_005b3c88; /* 0x5b3c88 */

/* Supplied declaration required: FUN_0015d434. */
/* Supplied declaration required: FUN_0018e9d8. */
/* Supplied declaration required: FUN_0032c518. */
/* Supplied declaration required: settings5BAddFlags. */
extern unsigned int asdModelGetSlotArray0(int);
/* Supplied declaration required: nw_gfx_SceneTraverser_Begin. */


void FUN_003ba560(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  unsigned int in_lr;
  
  temp_v0 = asdModelGetSlotArray0(param_2);
  FUN_0032c518(*(unsigned int *)(param_1 + 8),param_2);
  if (param_2 != 0) {
    if (param_2 != 1) {
      return;
    }
    FUN_0018e9d8(temp_v0,*(unsigned int *)(param_1 + 0xc));
    settings5BAddFlags(2);
    temp_v1 = *(int *)(param_1 + 4);
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned char **)(temp_v1 + 0x4c) = &LAB_001b9f9c;
    }
    temp_v1 = 1;
  }
  else {
    FUN_0018e9d8(temp_v0,*(unsigned int *)(param_1 + 0xc));
    settings5BAddFlags(1);
    temp_v1 = *(int *)(param_1 + 4);
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned char **)(temp_v1 + 0x4c) = &LAB_001b9f9c;
    }
    temp_v1 = 0;
  }
  piVar3 = (int *)(&DAT_005b3c88)[temp_v1];
  temp_v1 = (&g_effAsdLightHandle)[temp_v1];
  (**(romwright_code **)(*piVar3 + 0x10))
            (piVar3,*(unsigned int *)(temp_v1 + 0x10),*(romwright_code **)(*piVar3 + 0x10),param_4,unaff_r4,
             unaff_r5,unaff_r6,in_lr);
  FUN_0015d434(*(unsigned int *)(temp_v1 + 0x10));
  nw_gfx_SceneTraverser_Begin(*(unsigned int *)(temp_v1 + 8),*(unsigned int *)(temp_v1 + 4));
  (**(romwright_code **)(*piVar3 + 0x10))(piVar3,*(unsigned int *)(temp_v1 + 8));
  *(unsigned int *)(*(int *)(temp_v1 + 8) + 8) = 0;
  return;
}

} /* extern "C" */
