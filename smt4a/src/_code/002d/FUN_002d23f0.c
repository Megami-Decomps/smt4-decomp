/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d23f0` (_code @ 0x2d23f0, 0x24c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);
extern int FUN_00379890(int);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_002d23f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = FUN_00379890(param_1);
  if ((temp_v1 == 0) || (*(char *)(temp_v1 + 0x1f) < 100)) {
    if (-1 < param_1) {
      temp_v0 = temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4;
      *(unsigned int *)(temp_v0 + 0x808) = (1 << ((param_1 % 0x20) & 0xffU)) | *(unsigned int *)(temp_v0 + 0x808);
    }
    return;
  }
  switch((int)*(char *)(temp_v1 + 0x1f)) {
  case 0x65:
    FUN_003fd63c(0x493,1);
    if (-1 < param_1) {
      temp_v0 = temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4;
      *(unsigned int *)(temp_v0 + 0x808) = (1 << ((param_1 % 0x20) & 0xffU)) | *(unsigned int *)(temp_v0 + 0x808);
    }
    return;
  case 0x66:
    temp_v2 = 0x494;
    break;
  case 0x67:
    temp_v2 = 0x495;
    break;
  case 0x68:
    temp_v2 = 0x496;
    break;
  case 0x69:
    temp_v2 = 0x497;
    break;
  case 0x6a:
    temp_v2 = 0x498;
    break;
  case 0x6b:
    temp_v2 = 0x499;
    break;
  case 0x6c:
    temp_v2 = 0x4cd;
    break;
  case 0x6d:
    temp_v2 = 0x4ce;
    break;
  case 0x6e:
    temp_v2 = 0x4cf;
    break;
  case 0x6f:
    temp_v2 = 0x4dc;
    break;
  case 0x70:
    temp_v2 = 0x4dd;
    break;
  case 0x71:
    temp_v2 = 0x4de;
    break;
  case 0x72:
    temp_v2 = 0x4df;
    break;
  case 0x73:
    temp_v2 = 0x4e0;
    break;
  case 0x74:
    temp_v2 = 0x4e1;
    break;
  case 0x75:
    temp_v2 = 0x4e2;
    break;
  case 0x76:
    temp_v2 = 0x4e3;
    break;
  case 0x77:
    temp_v2 = 0x4e4;
    break;
  case 0x78:
    temp_v2 = 0x4e5;
    break;
  case 0x79:
    temp_v2 = 0x4e6;
    break;
  case 0x7a:
    temp_v2 = 0x4e7;
    break;
  case 0x7b:
    temp_v2 = 0x4e8;
    break;
  default:
    if (-1 < param_1) {
      temp_v0 = temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4;
      *(unsigned int *)(temp_v0 + 0x808) = (1 << ((param_1 % 0x20) & 0xffU)) | *(unsigned int *)(temp_v0 + 0x808);
    }
    return;
  }
  FUN_003fd63c(temp_v2,1);
  if (-1 < param_1) {
    temp_v0 = temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4;
    *(unsigned int *)(temp_v0 + 0x808) = (1 << ((param_1 % 0x20) & 0xffU)) | *(unsigned int *)(temp_v0 + 0x808);
  }
  return;
}
