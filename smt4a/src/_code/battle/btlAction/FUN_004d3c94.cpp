/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d3c94` (_code @ 0x4d3c94, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00317450(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_00571140; /* 0x571140 */
extern int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_00317450. */
extern unsigned int *FUN_00340ec8(unsigned int, int);
extern int FUN_003874fc(unsigned int);
extern unsigned int *FUN_003eccd0(unsigned int);


void FUN_004d3c94(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  
  temp_v1 = FUN_003874fc(*(unsigned int *)(param_1 + 0x10));
  puVar3 = (unsigned int *)FUN_003eccd0(param_2);
  temp_v0 = DAT_00573808;
  if (puVar3 != (unsigned int *)0x0) {
    switch(temp_v1) {
    case 0:
      puVar5 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v1);
      puVar3[0x70] = *puVar5;
      return;
    case 1:
      FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v1);
      return;
    case 2:
      puVar5 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10),temp_v1);
      temp_v2 = *puVar5;
      *puVar3 = temp_v2;
      puVar3[3] = temp_v2;
      return;
    case 3:
      puVar5 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10),temp_v1);
      temp_v2 = *puVar5;
      puVar3[1] = temp_v2;
      puVar3[4] = temp_v2;
      return;
    case 4:
      puVar5 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10),temp_v1);
      temp_v2 = *puVar5;
      puVar3[2] = temp_v2;
      puVar3[5] = temp_v2;
      return;
    case 5:
      puVar5 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10),temp_v1);
      puVar3[0x10] = *puVar5;
      return;
    case 6:
      puVar5 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10),temp_v1);
      puVar3[10] = *puVar5;
      return;
    case 7:
      puVar3 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10),temp_v1);
      *(unsigned int *)(temp_v0 + 0x9c70) = *puVar3;
      return;
    case 8:
      puVar3 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v1);
      DAT_00571140 = *puVar3;
      return;
    default:
      return;
    }
  }
  if (temp_v1 == 7) {
    puVar3 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10),temp_v1);
    *(unsigned int *)(temp_v0 + 0x9c70) = *puVar3;
    return;
  }
  return;
}

} /* extern "C" */
