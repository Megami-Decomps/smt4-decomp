/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c83f0` (_code @ 0x3c83f0, 0x194 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004398d4; /* 0x4398d4 */

/* Supplied declaration required: FUN_0024f15c. */
extern unsigned long long FUN_0025bd6c(unsigned int, char *);
/* Supplied declaration required: FUN_0026385c. */
/* Supplied declaration required: FUN_00275c2c. */
/* Supplied declaration required: FUN_00280d30. */
/* Supplied declaration required: FUN_00340588. */
/* Supplied declaration required: FUN_00340674. */
/* Supplied declaration required: FUN_003406d8. */
/* Supplied declaration required: FUN_0034073c. */
extern int FUN_00340790(int);
/* Supplied declaration required: FUN_003c7f18. */
/* Supplied declaration required: FUN_003c8280. */


unsigned int FUN_003c83f0(int param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_004398d4 == 0) {
    return 0;
  }
  switch(*(unsigned int *)(param_1 + 0x80)) {
  case 1:
    FUN_00280d30(0);
    FUN_003c8280(param_1);
    temp_v1 = 2;
    *(unsigned int *)(param_1 + 0x80) = temp_v1;
    break;
  case 2:
    if ((*(short *)(param_1 + 0xb4) == 0) || (temp_v0 = FUN_00340790(param_1), temp_v0 == 0)) break;
    FUN_003406d8(param_1);
    FUN_0034073c(param_1);
    temp_v2 = FUN_0025bd6c(0,"Light_EFT");
    temp_v1 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
    temp_v0 = (int)temp_v2;
    if (-1 < temp_v0) {
      temp_v1 = 0;
    }
    *(short *)(param_1 + 0x8c) = (short)temp_v2;
    if (-1 < temp_v0) {
      FUN_0026385c(temp_v0,temp_v1);
    }
    FUN_003c7f18(param_1,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
    temp_v1 = 4;
    *(unsigned int *)(param_1 + 0x80) = temp_v1;
    break;
  case 3:
    if (*(int *)(param_1 + 0xa0) != 0) {
      *(unsigned int *)(param_1 + 0xa0) = 0;
    }
    FUN_00275c2c();
    FUN_0024f15c(param_1);
    *(unsigned int *)(param_1 + 0x80) = 0;
    break;
  case 4:
    FUN_003406d8(param_1);
    FUN_0034073c(param_1);
    FUN_00340588(param_1);
    FUN_00340674(param_1);
  }
  if (*(short *)(param_1 + 0x9c) != -1) {
    *(short *)(param_1 + 0x9c) = *(short *)(param_1 + 0x9c) + 1;
  }
  return 0;
}
