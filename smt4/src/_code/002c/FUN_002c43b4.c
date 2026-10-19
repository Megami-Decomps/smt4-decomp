/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c43b4` (_code @ 0x2c43b4, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004e3cf4; /* 0x4e3cf4 */

/* Supplied declaration required: FUN_002c41f0. */


unsigned int FUN_002c43b4(unsigned int param_1,unsigned short param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_1 == 0) {
    return 0;
  }
  for (temp_v1 = *(int *)(DAT_004e3cf4 + (param_1 >> 0x14) * 8); temp_v1 != 0;
      temp_v1 = *(int *)(temp_v1 + 0x4c)) {
    if (*(unsigned int *)(temp_v1 + 0x24) == (param_1 & 0xfffff)) goto LAB_002c43fc;
  }
  temp_v1 = 0;
LAB_002c43fc:
  switch(*(unsigned char *)(temp_v1 + 0x98)) {
  default:
    return 0;
  case 1:
  case 2:
  case 3:
    *(unsigned short *)(temp_v1 + 0x36) = param_2;
    temp_v0 = *(int *)(temp_v1 + 0x58);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(temp_v0 + 0x5c);
      *(unsigned short *)(temp_v0 + 0x36) = *(unsigned short *)(temp_v1 + 0x36);
      FUN_002c41f0();
      temp_v0 = temp_v2;
    }
    switch(*(unsigned char *)(temp_v1 + 0x98)) {
    case 1:
    case 2:
    case 3:
      *(unsigned char *)(temp_v1 + 0x98) = 4;
    }
    return 1;
  case 4:
  case 5:
    *(unsigned short *)(temp_v1 + 0x36) = param_2;
    temp_v0 = *(int *)(temp_v1 + 0x58);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(temp_v0 + 0x5c);
      *(unsigned short *)(temp_v0 + 0x36) = *(unsigned short *)(temp_v1 + 0x36);
      FUN_002c41f0();
      temp_v0 = temp_v2;
    }
  }
  switch(*(unsigned char *)(temp_v1 + 0x98)) {
  default:
    return 1;
  case 1:
  case 2:
  case 3:
    *(unsigned char *)(temp_v1 + 0x98) = 4;
    return 1;
  }
}
