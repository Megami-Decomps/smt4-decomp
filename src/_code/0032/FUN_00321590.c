/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321590` (_code @ 0x321590, 0x148 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char DAT_004737c2; /* 0x4737c2 */

/* Supplied declaration required: FUN_0024745c. */
/* Supplied declaration required: FUN_002474a0. */
extern unsigned int FUN_0024c5dc(unsigned int);
/* Supplied declaration required: FUN_00269758. */
extern int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);


int * FUN_00321590(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  piVar1 = (int *)FUN_002c34a4(0x10000,0x100,0,*(int *)(param_1 + 0x38) * 0x18 + 0x10,0x10,1);
  *piVar1 = (int)(piVar1 + 4);
  piVar1[2] = (int)piVar1;
  temp_v0 = *(unsigned int *)(param_1 + 0x38) & 0xffff;
  FUN_002474a0(temp_v0,2,4,&DAT_004737c2,0x4c);
  piVar1[1] = temp_v0;
  if (param_2 != 0) {
    FUN_0024745c(temp_v0,param_2);
  }
  else {
    temp_v1 = FUN_0024c5dc(0x13);
    *(unsigned int *)(temp_v0 + 4) = temp_v1;
    FUN_00269758();
  }
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  if (temp_v0 != 0) {
    temp_v2 = 0;
    puVar3 = *(unsigned int **)(*(int *)(piVar1[1] + 8) + 0x3c);
    do {
      if ((temp_v2 & 1) != 0) {
        *puVar3 = 0x3f000000;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0x3f000000;
        puVar3[5] = 0x3f800000;
        puVar3[6] = 0;
        puVar3[7] = 0x3f800000;
      }
      else {
        *puVar3 = 0x3f800000;
        puVar3[1] = 0;
        puVar3[2] = 0x3f000000;
        puVar3[3] = 0;
        puVar3[4] = 0x3f800000;
        puVar3[5] = 0x3f800000;
        puVar3[6] = 0x3f000000;
        puVar3[7] = 0x3f800000;
      }
      temp_v2 = temp_v2 + 1;
      puVar3 = puVar3 + 8;
    } while (temp_v2 < temp_v0);
  }
  return piVar1;
}
