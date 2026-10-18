/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab348` (_code @ 0x3ab348, 0x21c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00231318(void);
/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_002337a0. */
/* Supplied declaration required: FUN_002356d4. */
/* Supplied declaration required: FUN_0028cd04. */
extern unsigned int FUN_0028cd5c(void);
extern int FUN_0028cd78(void);
/* Supplied declaration required: FUN_0029c6dc. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b9220. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf9f0. */
/* Supplied declaration required: FUN_00311494. */


void FUN_003ab348(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = FUN_002337a0(param_1 + 0x20);
  temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac);
  switch(*(unsigned int *)(param_1 + 0x18)) {
  case 0:
    FUN_002356d4(0);
    break;
  case 1:
    FUN_002333d4(param_1 + 0xdc,1);
    FUN_00311494(temp_v0,1);
    break;
  case 2:
    temp_v1 = param_1 + 0x188;
    FUN_002bf9f0(temp_v1);
    temp_v3 = FUN_002bef70(temp_v1);
    temp_v4 = FUN_002bef7c(temp_v1);
    FUN_002313d4(param_1 + 200,temp_v4,temp_v3);
    if (*(char *)(param_1 + 0x212) == '\0') {
      return;
    }
    break;
  case 3:
    temp_v1 = FUN_0028cd78();
    if (temp_v1 == 0) {
      return;
    }
    temp_v2 = FUN_0028cd5c();
    *(unsigned int *)(param_1 + 0xa5b4) = temp_v2;
    if (temp_v2 != 0) {
      FUN_0028cd04(temp_v2 & 0xffff);
      FUN_002337a0(param_1 + 0x20);
      FUN_002356d4(1);
    }
    FUN_002333d4(param_1 + 0xdc,0);
    FUN_002b8b78(0x3e);
    break;
  case 4:
    temp_v1 = param_1 + 0xfc;
    FUN_002b9220(temp_v1,0);
    temp_v3 = FUN_002bef70(temp_v1);
    temp_v4 = FUN_002bef7c(temp_v1);
    FUN_002313d4(param_1 + 200,temp_v4,temp_v3);
    if (*(char *)(param_1 + 0x186) == '\0') {
      return;
    }
    temp_v1 = FUN_00231318();
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
    temp_v1 = FUN_002337a0(param_1 + 0x20);
    FUN_0029c6dc(-*(int *)(param_1 + temp_v1 * 0x20 + 0x5b4),0);
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
