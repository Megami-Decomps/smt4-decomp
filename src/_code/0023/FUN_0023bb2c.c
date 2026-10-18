/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023bb2c` (_code @ 0x23bb2c, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00357190. */


void FUN_0023bb2c(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v2 = (unsigned int)*(unsigned char *)(param_2 + 2);
  switch(param_4) {
  case 0:
  case 1:
    temp_v3 = 1;
    break;
  case 2:
  case 4:
  case 5:
    temp_v3 = 2;
    break;
  case 3:
  case 6:
  case 0xc:
  case 0xd:
    temp_v3 = 4;
    break;
  case 7:
  case 0xe:
    temp_v3 = 8;
    break;
  case 8:
  case 9:
    temp_v3 = 3;
    break;
  case 10:
    temp_v3 = 6;
    break;
  case 0xb:
    temp_v3 = 0xc;
    break;
  case 0xf:
    temp_v3 = 0x10;
    break;
  default:
    temp_v3 = 0;
  }
  FUN_00357190(param_1,temp_v2);
  puVar5 = (unsigned int *)0x0;
  temp_v1 = 0;
  do {
    if (param_1[temp_v1 * 0x1c + 0x58] == 0) {
      puVar5 = param_1 + temp_v1 * 0x1c + 0x58;
      break;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xc);
  *(unsigned char *)((int)param_1 + temp_v2 + 0x154) = 1;
  *puVar5 = param_3;
  *(char *)(puVar5 + 1) = (char)param_4;
  puVar5[0x10] = temp_v2;
  temp_v0 = 0xb;
  puVar5[4] = temp_v3;
  temp_v1 = 0;
  do {
    temp_v0 = temp_v0 - 1;
    puVar5[temp_v1 + 5] = 0;
    puVar5[temp_v1 + 0x11] = 0xffffffff;
    temp_v1 = temp_v1 + 1;
  } while (temp_v0 != 0);
  *param_1 = 0;
  return;
}
