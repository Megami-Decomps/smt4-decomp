/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018fb38` (_code @ 0x18fb38, 0x328 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


void FUN_0018fb38(int param_1,float *param_2,unsigned int param_3,unsigned short param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  float temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  float temp_v4;
  
  switch(param_4) {
  default:
    puVar1 = (unsigned int *)0x0;
    break;
  case 1:
    puVar1 = (unsigned int *)(param_1 + 0x24);
    break;
  case 2:
    puVar1 = (unsigned int *)(param_1 + 0x28);
    break;
  case 3:
    puVar1 = (unsigned int *)(param_1 + 0x2c);
    break;
  case 4:
    puVar1 = (unsigned int *)(param_1 + 0x30);
    break;
  case 5:
    puVar1 = (unsigned int *)(param_1 + 0x34);
    break;
  case 6:
    puVar1 = (unsigned int *)(param_1 + 0x38);
    break;
  case 7:
    puVar1 = (unsigned int *)(param_1 + 0x3c);
    break;
  case 8:
    puVar1 = (unsigned int *)(param_1 + 0x40);
    break;
  case 9:
    puVar1 = (unsigned int *)(param_1 + 0x44);
    break;
  case 10:
    puVar1 = (unsigned int *)(param_1 + 0x48);
    break;
  case 0xb:
    puVar1 = (unsigned int *)(param_1 + 0x4c);
    break;
  case 0xc:
    puVar1 = (unsigned int *)(param_1 + 0x134);
    break;
  case 0xe:
    puVar1 = (unsigned int *)(param_1 + 0x138);
    break;
  case 0x10:
    puVar1 = (unsigned int *)(param_1 + 0x13c);
    break;
  case 0x12:
    puVar1 = (unsigned int *)(param_1 + 0x54);
  }
  temp_v0 = *puVar1;
  if ((param_3 & 0x10000) != 0) {
    temp_v1 = *param_2;
    temp_v4 = 1.0f;
    if ((temp_v1 <= 1.0f) && (temp_v4 = temp_v1, temp_v1 < 0.0f)) {
      temp_v4 = 0.0f;
    }
    temp_v2 = VectorFloatToUnsigned(temp_v4 * 255.0f + 0.5f,3);
    temp_v0 = (temp_v0 & 0xffffff00) | (temp_v2 & 0xff);
  }
  if ((param_3 & 0x20000) != 0) {
    temp_v1 = param_2[1];
    temp_v4 = 1.0f;
    if ((temp_v1 <= 1.0f) && (temp_v4 = temp_v1, temp_v1 < 0.0f)) {
      temp_v4 = 0.0f;
    }
    temp_v2 = VectorFloatToUnsigned(temp_v4 * 255.0f + 0.5f,3);
    temp_v0 = (temp_v0 & 0xffff00ff) | ((temp_v2 & 0xff) << 8);
  }
  if ((param_3 & 0x40000) != 0) {
    temp_v1 = param_2[2];
    temp_v4 = 1.0f;
    if ((temp_v1 <= 1.0f) && (temp_v4 = temp_v1, temp_v1 < 0.0f)) {
      temp_v4 = 0.0f;
    }
    temp_v2 = VectorFloatToUnsigned(temp_v4 * 255.0f + 0.5f,3);
    temp_v0 = (temp_v0 & 0xff00ffff) | ((temp_v2 & 0xff) << 0x10);
  }
  if ((param_3 & 0x80000) != 0) {
    temp_v1 = param_2[3];
    temp_v4 = 1.0f;
    if ((temp_v1 <= 1.0f) && (temp_v4 = temp_v1, temp_v1 < 0.0f)) {
      temp_v4 = 0.0f;
    }
    temp_v3 = VectorFloatToUnsigned(temp_v4 * 255.0f + 0.5f,3);
    temp_v0 = (temp_v0 & 0xffffff) | (temp_v3 << 0x18);
  }
  switch(param_4) {
  default:
    return;
  case 1:
    *(unsigned int *)(param_1 + 0x24) = temp_v0;
    return;
  case 2:
    *(unsigned int *)(param_1 + 0x28) = temp_v0;
    return;
  case 3:
    *(unsigned int *)(param_1 + 0x2c) = temp_v0;
    return;
  case 4:
    *(unsigned int *)(param_1 + 0x30) = temp_v0;
    return;
  case 5:
    *(unsigned int *)(param_1 + 0x34) = temp_v0;
    return;
  case 6:
    *(unsigned int *)(param_1 + 0x38) = temp_v0;
    return;
  case 7:
    *(unsigned int *)(param_1 + 0x3c) = temp_v0;
    return;
  case 8:
    *(unsigned int *)(param_1 + 0x40) = temp_v0;
    return;
  case 9:
    *(unsigned int *)(param_1 + 0x44) = temp_v0;
    return;
  case 10:
    *(unsigned int *)(param_1 + 0x48) = temp_v0;
    return;
  case 0xb:
    *(unsigned int *)(param_1 + 0x4c) = temp_v0;
    return;
  case 0xc:
    break;
  case 0xe:
    param_1 = param_1 + 4;
    break;
  case 0x10:
    param_1 = param_1 + 8;
    break;
  case 0x12:
    *(unsigned int *)(param_1 + 0x54) = temp_v0;
    return;
  }
  *(unsigned int *)(param_1 + 0x134) = temp_v0;
  return;
}
