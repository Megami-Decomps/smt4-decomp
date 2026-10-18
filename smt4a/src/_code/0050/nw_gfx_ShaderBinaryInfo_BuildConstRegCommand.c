/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ShaderBinaryInfo_BuildConstRegCommand` (_code @ 0x5044ac, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_005044ac_arg1 fn_005044ac_arg1;
struct fn_005044ac_arg1 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    uint field_0x8; /* +0x8 */
    undefined1 field_0xc; /* +0xc */
};

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: nnnstdMemCpy. */


void nw_gfx_ShaderBinaryInfo_BuildConstRegCommand(int param_1,fn_005044ac_arg1 *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  short *psVar4;
  void *pvVar5;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  temp_v2 = 0x2c0;
  temp_v5 = 0x2b1;
  temp_v4 = *(int *)(param_1 + param_3 * 4 + 8);
  temp_v3 = 0;
  temp_v1 = *(int *)(temp_v4 + 0x18);
  if (*(char *)(temp_v4 + 6) != '\0') {
    temp_v2 = 0x290;
    temp_v5 = 0x281;
  }
  if (*(int *)(temp_v4 + 0x1c) != 0) {
    do {
      psVar4 = (short *)(temp_v1 + temp_v4 + temp_v3 * 0x14);
      temp_v0 = *psVar4;
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 == 2) {
            temp_v11 = 0;
            temp_v6 = (unsigned int)(unsigned short)psVar4[1];
            temp_v7 = temp_v2 | 0x803f0000;
            temp_v8 = ((*(unsigned int *)(psVar4 + 6) & 0xffffff) >> 0x10) | (*(int *)(psVar4 + 8) << 8);
            temp_v9 = ((*(unsigned int *)(psVar4 + 4) >> 8) & 0xffff) + *(int *)(psVar4 + 6) * 0x10000;
            temp_v10 = (*(unsigned int *)(psVar4 + 2) & 0xffffff) | (*(int *)(psVar4 + 4) << 0x18);
            if (param_2->field_0x8 >= (int)param_2->field_0x4 + 0x18U) {
              nnnstdMemCpy(param_2->field_0x4,&temp_v6,0x18);
              pvVar5 = (void *)((int)param_2->field_0x4 + 0x18);
              param_2->field_0x4 = pvVar5;
            }
            else {
              param_2->field_0xc = 1;
            }
          }
        }
        else {
          temp_v6 = *(unsigned int *)(psVar4 + 2);
          temp_v7 = (((unsigned int)(unsigned short)psVar4[1] + temp_v5) & 0xffff) | 0xf0000;
          if ((int)param_2->field_0x4 + 8U <= param_2->field_0x8) {
            nnnstdMemCpy(param_2->field_0x4,&temp_v6,8);
            pvVar5 = (void *)((int)param_2->field_0x4 + 8);
            param_2->field_0x4 = pvVar5;
          }
          else {
            param_2->field_0xc = 1;
          }
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(unsigned int *)(temp_v4 + 0x1c));
  }
  return;
}
