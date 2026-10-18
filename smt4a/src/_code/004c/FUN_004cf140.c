/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cf140` (_code @ 0x4cf140, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: FUN_001641c4. */
extern int FUN_001643a0(void);
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_001f4908. */
extern int FUN_002009a8(unsigned int);
/* Supplied declaration required: FUN_00284168. */
/* Supplied declaration required: FUN_0037ed38. */
/* Supplied declaration required: FUN_003c58a8. */
extern int FUN_003c8860(void);
/* Supplied declaration required: FUN_003cbb0c. */
/* Supplied declaration required: FUN_003d2d34. */
/* Supplied declaration required: FUN_003d2d6c. */
/* Supplied declaration required: FUN_003d54f8. */


unsigned int FUN_004cf140(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    *(unsigned char *)(param_1 + 0x25) = 1;
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 0x34) = 300;
    temp_v0 = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    FUN_00284168(0,0,0x140,0xf0);
    *(unsigned int *)(param_1 + 0x2c) = temp_v0;
    *(unsigned char *)(param_1 + 0x24) = 0;
    temp_v1 = FUN_003c8860();
    if (temp_v1 == 0) {
      FUN_0037ed38();
      *(unsigned char *)(param_1 + 0x24) = 1;
    }
    FUN_003c58a8(1);
    temp_v1 = FUN_002009a8(0x100003c);
    if (temp_v1 != 1) {
      FUN_003d2d34(0x100003c,0,0x3c);
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  temp_v1 = FUN_0013def0(0);
  if ((temp_v1 == 0) &&
     ((temp_v1 = FUN_001643a0(), temp_v1 == 6 || (temp_v1 = FUN_001656a0(0), temp_v1 != 0)))) {
    *(unsigned int *)(param_1 + 0x28) = 2;
    *(unsigned int *)(param_1 + 0x34) = 0;
  }
  else {
    temp_v1 = *(int *)(param_1 + 0x28);
    if (temp_v1 == 1) {
      temp_v1 = FUN_0013def0(0);
      if (temp_v1 == 3) {
        FUN_003d54f8(0,0x1e);
      }
      temp_v1 = FUN_0013def0(1);
      if (temp_v1 == 3) {
        FUN_003d54f8(1,0x1e);
      }
      temp_v1 = FUN_0013def0(0);
      if (temp_v1 == 2) {
        return 1;
      }
      if ((int)*(float *)(param_1 + 0x30) < 0x3f800000) {
        *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + 0.033333335f;
        return 1;
      }
      *(unsigned int *)(param_1 + 0x34) = 300;
      return 1;
    }
    if (temp_v1 != 2) {
      if (temp_v1 != 3) {
        return 1;
      }
      temp_v1 = FUN_0013def0(0);
      if (temp_v1 != 3) {
        return 1;
      }
      *(unsigned char *)(param_1 + 0x25) = 0;
      FUN_003c58a8(0);
      if (*(char *)(param_1 + 0x24) != '\0') {
        FUN_003cbb0c();
      }
      FUN_001641c4();
      FUN_003d2d6c(0xf);
      return 0;
    }
  }
  temp_v1 = *(int *)(param_1 + 0x34) - 1;
  *(int *)(param_1 + 0x34) = temp_v1;
  if (temp_v1 < 0) {
    *(unsigned int *)(param_1 + 0x28) = 3;
    *(unsigned int *)(param_1 + 0x34) = 300;
    FUN_001f4908(0,0x2d,0xff);
    FUN_001f4908(1,0x2d,0xff);
  }
  return 1;
}
