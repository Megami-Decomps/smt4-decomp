/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad388` (_code @ 0x2ad388, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


void FUN_002ad388(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_r12; 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int in_r12;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  
  temp_v11 = SBORROW4(param_3,0x20);
  param_3 = param_3 - 0x20;
  temp_v10 = param_3 < 0;
  do {
    if (temp_v10 == temp_v11) {
      temp_v8 = param_2[-1];
      temp_v7 = param_2[-2];
      temp_v6 = param_2[-3];
      temp_v5 = param_2[-4];
      temp_v4 = param_2[-5];
      temp_v3 = param_2[-6];
      temp_v2 = param_2[-7];
      param_2 = param_2 + -8;
      temp_v1 = *param_2;
      temp_v9 = in_r12 | (temp_v8 >> 8);
      in_r12 = temp_v1 << 0x18;
      *param_1 = temp_v9;
      param_1[-1] = (temp_v8 << 0x18) | (temp_v7 >> 8);
      param_1[-2] = (temp_v7 << 0x18) | (temp_v6 >> 8);
      param_1[-3] = (temp_v6 << 0x18) | (temp_v5 >> 8);
      param_1[-4] = (temp_v5 << 0x18) | (temp_v4 >> 8);
      param_1[-5] = (temp_v4 << 0x18) | (temp_v3 >> 8);
      param_1[-6] = (temp_v3 << 0x18) | (temp_v2 >> 8);
      param_1[-7] = (temp_v2 << 0x18) | (temp_v1 >> 8);
      param_1 = param_1 + -8;
      temp_v11 = SBORROW4(param_3,0x20);
      param_3 = param_3 - 0x20;
      temp_v10 = param_3 < 0;
    }
  } while (temp_v10 == temp_v11);
  temp_v11 = SBORROW4(param_3 + 0x20,4);
  param_3 = param_3 + 0x1c;
  temp_v10 = param_3 < 0;
  do {
    if (temp_v10 == temp_v11) {
      param_2 = param_2 + -1;
      temp_v1 = *param_2;
      *param_1 = in_r12 | (temp_v1 >> 8);
      in_r12 = temp_v1 << 0x18;
      temp_v11 = SBORROW4(param_3,4);
      param_3 = param_3 - 4;
      temp_v10 = param_3 < 0;
      param_1 = param_1 + -1;
    }
  } while (temp_v10 == temp_v11);
  puVar3 = (unsigned char *)((int)param_2 + 1);
  temp_v1 = param_3 + 5;
  puVar2 = param_1 + 1;
  if ((temp_v1 & 4) != 0) {
    temp_v0 = *(unsigned char *)((int)param_2 - 1);
    *(char *)((int)param_1 + 3) = (char)*param_2;
    *(unsigned char *)((int)param_1 + 2) = temp_v0;
    puVar3 = (unsigned char *)((int)param_2 - 3);
    temp_v0 = *puVar3;
    *(unsigned char *)((int)param_1 + 1) = *(unsigned char *)((int)param_2 - 2);
    *(unsigned char *)param_1 = temp_v0;
    puVar2 = param_1;
  }
  if ((temp_v1 & 2) != 0) {
    puVar4 = puVar3 + -1;
    puVar3 = puVar3 + -2;
    temp_v0 = *puVar3;
    *(unsigned char *)((int)puVar2 - 1) = *puVar4;
    puVar2 = (unsigned int *)((int)puVar2 - 2);
    *(unsigned char *)puVar2 = temp_v0;
  }
  if ((temp_v1 & 1) != 0) {
    *(unsigned char *)((int)puVar2 - 1) = puVar3[-1];
  }
  return;
}
