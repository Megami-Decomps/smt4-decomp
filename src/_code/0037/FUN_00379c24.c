/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379c24` (_code @ 0x379c24, 0x17c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002b5124. */
/* Supplied declaration required: FUN_002b5148. */
extern int FUN_002bb218(void);
/* Supplied declaration required: FUN_002bdbcc. */
/* Supplied declaration required: FUN_00376c88. */
/* Supplied declaration required: FUN_00379b30. */
/* Supplied declaration required: FUN_00379be4. */


void FUN_00379c24(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  
  if ((char)param_1[0x21] != '\0') {
    if (*(char *)((int)param_1 + 0x86) != '\0') {
      temp_v0 = FUN_002bb218();
      temp_v2 = temp_v0;
      FUN_002b5148(temp_v0,6);
      *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
      *(unsigned char *)(temp_v2 + 4) = 6;
      temp_v1 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
      *(unsigned int *)(temp_v2 + 0x10) = temp_v1;
      *(char *)(temp_v2 + 0x14) = (char)param_1[0x22];
      FUN_002b5124(temp_v0,temp_v2);
    }
    *(unsigned char *)((int)param_1 + 0x89) = 0;
    *(unsigned char *)((int)param_1 + 0x8a) = 2;
    param_1[0x27] = -1;
    if (param_1[2] != 0) {
      FUN_002bdbcc();
    }
    if (param_1[3] != 0) {
      FUN_002bdbcc();
    }
    temp_v2 = (**(romwright_code **)(*param_1 + 0x18))(param_1);
    if (temp_v2 != 0) {
      (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    }
    if (param_1[1] != 0) {
      FUN_00376c88(param_1[4],param_1);
    }
    if (param_1[4] != 0) {
      FUN_00379b30(param_1[4],param_1);
    }
    if (param_1[6] != 0) {
      FUN_00379be4(param_1[6],param_1);
    }
    piVar4 = (int *)param_1[9];
    if (piVar4 != (int *)0x0) {
      (**(romwright_code **)(*piVar4 + 0xc))(piVar4,param_1[10],param_1);
      param_1[10] = 0;
    }
    *(unsigned char *)((int)param_1 + 0x86) = 0;
    *(unsigned char *)(param_1 + 0x22) = 0;
    temp_v0 = FUN_002bb218();
    temp_v2 = temp_v0;
    FUN_002b5148(temp_v0,6);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 4;
    temp_v1 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
    *(unsigned int *)(temp_v2 + 0x10) = temp_v1;
    FUN_002b5124(temp_v0,temp_v2);
    *(unsigned char *)(param_1 + 0x21) = 0;
  }
  return;
}
