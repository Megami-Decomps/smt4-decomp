/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5b58` (_code @ 0x2f5b58, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int FUN_002eac34(unsigned int);


unsigned int FUN_002f5b58(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_002eac34(param_2);
  piVar2 = *(int **)(temp_v0 + 0xa4);
  if (piVar2 == (int *)0x0) {
    return 0x9999;
  }
  temp_v0 = *(int *)(param_1 + 0xd8);
  if (param_5 != 0) {
    temp_v0 = 0;
  }
  else if ((temp_v0 != 0) && (*(int *)(temp_v0 + 0x10) != 0)) goto LAB_002f5b96;
  if (param_4 == 0) {
    return 0x12345678;
  }
  if (temp_v0 == 0) {
    temp_v1 = (**(romwright_code **)(*piVar2 + 0x14))(piVar2,param_3,param_4);
    return temp_v1;
  }
LAB_002f5b96:
  temp_v3 = *(int *)(temp_v0 + 0xc) + *(int *)(temp_v0 + 0x18);
  temp_v5 = *(unsigned int *)(temp_v0 + 0x10);
  temp_v2 = param_3;
  temp_v4 = param_4;
  temp_v1 = (**(romwright_code **)(*piVar2 + 0x18))(piVar2,&temp_v2,&temp_v4,2);
  return temp_v1;
}
