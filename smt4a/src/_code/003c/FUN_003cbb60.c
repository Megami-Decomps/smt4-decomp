/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cbb60` (_code @ 0x3cbb60, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003cbb60_arg1 fn_003cbb60_arg1;
struct fn_003cbb60_arg1 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
};

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_00401a74. */


void FUN_003cbb60(int param_1,fn_003cbb60_arg1 *param_2,int param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned short temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  unsigned int uStack_2c;
  float temp_v10;
  unsigned int uStack_24;
  
  FUN_00401a74(param_2,&temp_v10,&temp_v9);
  temp_v3 = 0;
  temp_v6 = param_2->field_0x10;
  temp_v7 = param_2->field_0x14;
  temp_v8 = param_2->field_0x18;
  temp_v4 = *(unsigned int *)(*(int *)((int)param_2->field_0x8 + 0xc) + 0x34);
  if (0 < *(int *)(param_3 + 0x204)) {
    do {
      temp_v0 = param_3 + temp_v3 * 4;
      temp_v2 = (int)*(short *)(temp_v0 + 0x106);
      puVar2 = (unsigned short *)(*(int *)(param_1 + 0x10c) + *(short *)(temp_v0 + 0x104) * 0x158);
      if (temp_v2 != 0) {
        if (temp_v2 == 1) {
          temp_v5 = *puVar2 | 0x2000;
          *puVar2 = temp_v5;
        }
        else if (temp_v2 == 2) {
          temp_v5 = *puVar2 | 0x4000;
          *puVar2 = temp_v5;
        }
      }
      else {
        *puVar2 = *puVar2 | 0x1000;
      }
      *(float *)(puVar2 + temp_v2 * 0xc + 0x7e) = -(temp_v9 * (1.0f / temp_v10));
      *(unsigned int *)(puVar2 + temp_v2 * 0xc + 0x80) = uStack_2c;
      *(float *)(puVar2 + temp_v2 * 0xc + 0x78) = temp_v10;
      *(unsigned int *)(puVar2 + temp_v2 * 0xc + 0x7a) = uStack_24;
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          if (temp_v2 == 2) {
            *(unsigned int *)(puVar2 + 0xa0) = temp_v8;
            puVar2[0xa2] = 0xc;
            puVar2[0xa3] = 0;
            goto joined_r0x003cbcd8;
          }
        }
        else {
          *(unsigned int *)(puVar2 + 0xa0) = temp_v7;
          puVar2[0xa2] = 0xc;
          puVar2[0xa3] = 0;
joined_r0x003cbcd8:
          if (temp_v4 == 0xc) {
            temp_v1 = (unsigned char)puVar2[1] | 1;
          }
          else {
            temp_v1 = (unsigned char)puVar2[1] & 0xfe;
          }
          *(unsigned char *)(puVar2 + 1) = temp_v1;
        }
      }
      else {
        *(unsigned int *)(puVar2 + 0xa0) = temp_v6;
        puVar2[0xa2] = 0xc;
        puVar2[0xa3] = 0;
        if (temp_v4 == 0xc) {
          temp_v1 = (unsigned char)puVar2[1] | 1;
          *(unsigned char *)(puVar2 + 1) = temp_v1;
        }
        else {
          temp_v1 = (unsigned char)puVar2[1] & 0xfe;
          *(unsigned char *)(puVar2 + 1) = temp_v1;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(param_3 + 0x204));
  }
  return;
}
