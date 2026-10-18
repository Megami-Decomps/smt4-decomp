/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab128` (_code @ 0x3ab128, 0x21c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00231184(void);
/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: FUN_0023360c. */
/* Supplied declaration required: FUN_0023553c. */
/* Supplied declaration required: FUN_0028ca60. */
extern unsigned int FUN_0028cab8(void);
extern int FUN_0028cad4(void);
/* Supplied declaration required: FUN_0029c43c. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002b8ee0. */
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf818. */
/* Supplied declaration required: FUN_00311430. */


void FUN_003ab128(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = FUN_0023360c(param_1 + 0x20);
  temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac);
  switch(*(unsigned int *)(param_1 + 0x18)) {
  case 0:
    FUN_0023553c(0);
    break;
  case 1:
    FUN_00233240(param_1 + 0xdc,1);
    FUN_00311430(temp_v0,1);
    break;
  case 2:
    temp_v1 = param_1 + 0x188;
    FUN_002bf818(temp_v1);
    temp_v3 = FUN_002bed98(temp_v1);
    temp_v4 = FUN_002beda4(temp_v1);
    FUN_00231240(param_1 + 200,temp_v4,temp_v3);
    if (*(char *)(param_1 + 0x212) == '\0') {
      return;
    }
    break;
  case 3:
    temp_v1 = FUN_0028cad4();
    if (temp_v1 == 0) {
      return;
    }
    temp_v2 = FUN_0028cab8();
    *(unsigned int *)(param_1 + 0xa5b4) = temp_v2;
    if (temp_v2 != 0) {
      FUN_0028ca60(temp_v2 & 0xffff);
      FUN_0023360c(param_1 + 0x20);
      FUN_0023553c(1);
    }
    FUN_00233240(param_1 + 0xdc,0);
    FUN_002b8838(0x3e);
    break;
  case 4:
    temp_v1 = param_1 + 0xfc;
    FUN_002b8ee0(temp_v1,0);
    temp_v3 = FUN_002bed98(temp_v1);
    temp_v4 = FUN_002beda4(temp_v1);
    FUN_00231240(param_1 + 200,temp_v4,temp_v3);
    if (*(char *)(param_1 + 0x186) == '\0') {
      return;
    }
    temp_v1 = FUN_00231184();
    if (temp_v1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa5b4) != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      return;
    }
    temp_v1 = 10;
    *(int *)(param_1 + 0x18) = temp_v1;
    return;
  case 5:
    temp_v1 = FUN_0023360c(param_1 + 0x20);
    FUN_0029c43c(-*(int *)(param_1 + temp_v1 * 0x20 + 0x5b4),0);
    *(unsigned int *)(param_1 + 0x14) = 7;
    *(unsigned int *)(param_1 + 0x18) = 0;
    return;
  default:
    return;
  case 10:
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
    return;
  }
  temp_v1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = temp_v1;
  return;
}
