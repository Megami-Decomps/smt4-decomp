/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004701d8` (_code @ 0x4701d8, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004701d8_arg0 fn_004701d8_arg0;
struct fn_004701d8_arg0 {
    unsigned char pad_0x0[0x310];
    undefined4 field_0x310; /* +0x310 */
    unsigned char pad_0x314[0x4];
    undefined4 field_0x318; /* +0x318 */
    unsigned char pad_0x31c[0x130];
    undefined4 field_0x44c; /* +0x44c */
};

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_4_stack;

extern unsigned int DAT_0057027c; /* 0x57027c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001b2ebc. */
extern int FUN_001b315c(void);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004701d8(fn_004701d8_arg0 *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  char *pcVar7;
  int temp_v6;
  unsigned int *puVar9;
  unsigned char temp_v7 [128];
  int temp_v8;
  int temp_v9;
  fn_004701d8_arg0 *temp_v10;
  int iStack_30;
  int iStack_2c;
  int temp_v11;
  
  temp_v10 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v11 = param_4;
  FUN_002e6354(temp_v7,0x80);
  temp_v6 = 0;
  temp_v8 = 0;
  if (temp_v8 < (int)temp_v10->field_0x310) {
    do {
      temp_v0 = temp_v10->field_0x318 + temp_v8 * 0x50;
      temp_v1 = FUN_001b315c();
      if (temp_v1 != 0) {
        temp_v2 = temp_v0;
        FUN_001b31ac();
        temp_v3 = temp_v0;
        FUN_001b31e0();
        temp_v5 = 0;
        if (temp_v3 != 0) {
          temp_v9 = temp_v0 + 0x24;
          do {
            pcVar7 = (char *)(temp_v2 + temp_v5 * 0x40);
            if (*pcVar7 == param_2) {
              if (param_3 <= temp_v6) {
                return;
              }
              if (temp_v11 == 0) {
                return;
              }
              puVar9 = (unsigned int *)(temp_v11 + temp_v6 * 0x10);
              rt_memcpy_w(puVar9,*(int *)(temp_v0 + 0x4c) + temp_v5 * 0x10,0xe);
              FUN_00100388(temp_v7,"%s/%s",temp_v9,pcVar7 + 1);
              temp_v4 = DAT_0057027c;
              FUN_001b2ebc(DAT_0057027c,temp_v7,0,puVar9 + 2,1,0x80,0);
              *puVar9 = temp_v4;
              *(unsigned char *)(puVar9 + 3) = 1;
              temp_v1 = temp_v6 * 0x10;
              temp_v6 = temp_v6 + 1;
              *(unsigned char *)(temp_v10->field_0x44c + temp_v1 + 0xd) = 1;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v3);
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < (int)temp_v10->field_0x310);
  }
  return;
}
