/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0d4c` (_code @ 0x2a0d4c, 0x368 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044de98; /* 0x44de98 */
extern int DAT_0044de9c; /* 0x44de9c */
extern int DAT_0044dea0; /* 0x44dea0 */
extern float DAT_0044dea4; /* 0x44dea4 */
extern float DAT_0044dea8; /* 0x44dea8 */
extern float DAT_0044deac; /* 0x44deac */
extern unsigned int DAT_0044deb0; /* 0x44deb0 */
extern unsigned int DAT_0044deb4; /* 0x44deb4 */

/* Supplied declaration required: FUN_00297488. */
extern int FUN_00297514(int);
extern int FUN_002c5f60(int, int);


void FUN_002a0d4c(int param_1,unsigned int param_2)

{
/* irregular: 14 goto(s); irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  int temp_v2;
  int temp_v3;
  float in_s0;
  
  DAT_0044deb0 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x1c) + param_1 + 0x1f);
  temp_v3 = param_1 + 0x20;
  DAT_0044deb4 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x1c) + param_1 + 0x1e);
  if ((DAT_0044deb0 != 0 && DAT_0044deb0 != 2) || (DAT_0044deb4 != 0 && DAT_0044deb4 != 2)) {
    FUN_00297488(param_1);
    DAT_0044dea4 = in_s0;
    FUN_00297488(param_1);
    DAT_0044dea8 = in_s0;
    switch(param_2) {
    case 0:
      DAT_0044deac = DAT_0044dea4 + in_s0;
    default:
      temp_v1 = DAT_0044deac;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 1;
      *(float *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    case 1:
      DAT_0044deac = DAT_0044dea4 - in_s0;
      temp_v1 = DAT_0044deac;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 1;
      *(float *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    case 2:
      DAT_0044deac = DAT_0044dea4 * in_s0;
      temp_v1 = DAT_0044deac;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 1;
      *(float *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    case 3:
      DAT_0044deac = DAT_0044dea4 / in_s0;
      temp_v1 = DAT_0044deac;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 1;
      *(float *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    case 4:
      if (DAT_0044dea4 != 0.0f || in_s0 != 0.0f) {
LAB_002a10a4:
        temp_v2 = 1;
        DAT_0044dea0 = temp_v2;
        *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v2;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return;
      }
      break;
    case 5:
      if (DAT_0044dea4 != 0.0f && in_s0 != 0.0f) goto LAB_002a10a4;
      break;
    case 6:
      if (DAT_0044dea4 == in_s0) goto LAB_002a10a4;
      break;
    case 7:
      if (DAT_0044dea4 != in_s0) goto LAB_002a10a4;
      break;
    case 8:
      if (DAT_0044dea4 < in_s0) goto LAB_002a10a4;
      break;
    case 9:
      if (in_s0 < DAT_0044dea4) goto LAB_002a10a4;
      break;
    case 10:
      if (DAT_0044dea4 <= in_s0) goto LAB_002a10a4;
      break;
    case 0xb:
      if (in_s0 <= DAT_0044dea4) goto LAB_002a10a4;
    }
    temp_v2 = 0;
    DAT_0044dea0 = temp_v2;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v2;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
  DAT_0044de98 = FUN_00297514(param_1);
  DAT_0044de9c = FUN_00297514(param_1);
  switch(param_2) {
  case 0:
    DAT_0044dea0 = DAT_0044de98 + DAT_0044de9c;
    temp_v0 = DAT_0044dea0;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  case 1:
    DAT_0044dea0 = DAT_0044de98 - DAT_0044de9c;
    temp_v0 = DAT_0044dea0;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  case 2:
    DAT_0044dea0 = DAT_0044de98 * DAT_0044de9c;
    temp_v0 = DAT_0044dea0;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  case 3:
    DAT_0044dea0 = FUN_002c5f60(DAT_0044de98,DAT_0044de9c);
    temp_v0 = DAT_0044dea0;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  case 4:
    if (DAT_0044de98 != 0 || DAT_0044de9c != 0) {
LAB_002a0ec0:
      DAT_0044dea0 = 1;
      temp_v0 = DAT_0044dea0;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
      *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
    break;
  case 5:
    temp_v0 = 0;
    if (DAT_0044de98 != 0) {
      temp_v0 = DAT_0044de9c;
    }
    if (DAT_0044de98 != 0 && temp_v0 != 0) goto LAB_002a0ec0;
    break;
  case 6:
    if (DAT_0044de98 == DAT_0044de9c) goto LAB_002a0ec0;
    break;
  case 7:
    if (DAT_0044de98 != DAT_0044de9c) goto LAB_002a0ec0;
    break;
  case 8:
    if (DAT_0044de98 < DAT_0044de9c) goto LAB_002a0ec0;
    break;
  case 9:
    if (DAT_0044de9c < DAT_0044de98) goto LAB_002a0ec0;
    break;
  case 10:
    if (DAT_0044de98 <= DAT_0044de9c) goto LAB_002a0ec0;
    break;
  case 0xb:
    if (DAT_0044de9c <= DAT_0044de98) goto LAB_002a0ec0;
    break;
  default:
    temp_v0 = DAT_0044dea0;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
  DAT_0044dea0 = 0;
  temp_v0 = DAT_0044dea0;
  *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
  *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}
