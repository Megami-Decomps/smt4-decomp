/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263988` (_code @ 0x263988, 0x278 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelSlotSetColor(int);
int asdModelSlotSetTint(int);
void FUN_0029c2cc(unsigned int, int);
int modelSlotAttachChild(unsigned int, int);
int asdModelResetAndSelectSecondaryMotion(unsigned int, int);
void FUN_002d582c(unsigned int, float);
int FUN_002e1230(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int nw_anim_PlayPolicy_Loop(...); /* 0x151500 */
extern unsigned char LAB_00155650; /* 0x155650 */

/* Supplied declaration required: asdModelSlotSetColor. */
/* Supplied declaration required: asdModelSlotSetTint. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: modelSlotAttachChild. */
/* Supplied declaration required: asdModelResetAndSelectSecondaryMotion. */
/* Supplied declaration required: FUN_002d582c. */
/* Supplied declaration required: FUN_002e1230. */


void FUN_00263988(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  piVar3 = (int *)(param_1 + 0x550);
  temp_v0 = *(int *)(param_1 + 0x550);
  if (temp_v0 != param_2) {
    temp_v2 = 0;
    if (temp_v0 != -1) {
      FUN_0029c2cc(*(unsigned int *)(param_1 + temp_v0 * 4 + 0x3c),0);
      FUN_002d582c(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x560) * 4 + 0x34), 0.0f);
      piVar2 = *(int **)(*(int *)(param_1 + *piVar3 * 4 + 0x3c) + 4);
      piVar2[0x10] = temp_v2;
      *(unsigned char *)(piVar2 + 0x16) = 1;
      (**(romwright_code **)(*piVar2 + 0x20))();
    }
    *(int *)(param_1 + 0x550) = param_2;
    modelSlotAttachChild(*(unsigned int *)(param_1 + param_2 * 4 + 0x3c),0);
    asdModelResetAndSelectSecondaryMotion(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x560) * 4 + 0x34),param_2);
    temp_v3 = 0x3f800000;
    FUN_002d582c(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x560) * 4 + 0x34), 1.0f);
    temp_v0 = *(int *)(*(int *)(param_1 + *piVar3 * 4 + 0x3c) + 4);
    temp_v1 = *(unsigned int *)(temp_v0 + 0x44);
    (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x38) = temp_v1;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + *piVar3 * 4 + 0x3c) + 4) + 0x40) = temp_v3;
    if (param_2 == 0) {
      FUN_002e1230(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x560) * 4 + 0x34),0);
      temp_v0 = *(int *)(*(int *)(param_1 + *(int *)(param_1 + 0x550) * 4 + 0x3c) + 4);
      *(unsigned char **)(temp_v0 + 0x4c) = &LAB_00155650;
      *(unsigned char *)(temp_v0 + 0x58) = 1;
      asdModelSlotSetTint(0);
      asdModelSlotSetColor(0);
      return;
    }
    if (param_2 == 1) {
      FUN_002e1230(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x560) * 4 + 0x34),0);
      temp_v0 = *(int *)(*(int *)(param_1 + *(int *)(param_1 + 0x550) * 4 + 0x3c) + 4);
      *(unsigned char **)(temp_v0 + 0x4c) = &LAB_00155650;
      *(unsigned char *)(temp_v0 + 0x58) = 1;
      asdModelSlotSetTint(0);
      asdModelSlotSetColor(0);
      return;
    }
    if (param_2 == 2) {
      FUN_002e1230(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x560) * 4 + 0x34),1);
      temp_v0 = *(int *)(*(int *)(param_1 + *(int *)(param_1 + 0x550) * 4 + 0x3c) + 4);
      *(romwright_code **)(temp_v0 + 0x4c) = nw_anim_PlayPolicy_Loop;
      *(unsigned char *)(temp_v0 + 0x58) = 1;
      asdModelSlotSetTint(0);
      asdModelSlotSetColor(0);
      return;
    }
  }
  return;
}

} /* extern "C" */
