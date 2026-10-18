/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471468` (_code @ 0x471468, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_4_stack;

extern unsigned int DAT_0057027c; /* 0x57027c */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_001b315c(void);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_00471fec. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00471468(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [128];
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int iStack_30;
  int iStack_2c;
  int temp_v11;
  
  temp_v10 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v11 = param_4;
  FUN_002e6354(temp_v6,0x80);
  temp_v4 = 0;
  temp_v5 = 0;
  if (temp_v5 < *(int *)(temp_v10 + 0x310)) {
    do {
      temp_v7 = *(int *)(temp_v10 + 0x318) + temp_v5 * 0x50;
      temp_v0 = FUN_001b315c();
      if (temp_v0 != 0) {
        temp_v1 = temp_v7;
        FUN_001b31ac();
        temp_v2 = temp_v7;
        FUN_001b31e0();
        temp_v3 = 0;
        if (temp_v2 != 0) {
          temp_v9 = temp_v7 + 0x24;
          do {
            pcVar5 = (char *)(temp_v1 + temp_v3 * 0x40);
            if (*pcVar5 == param_2) {
              if (param_3 <= temp_v4) {
                return;
              }
              if (temp_v11 == 0) {
                return;
              }
              temp_v8 = temp_v11 + temp_v4 * 0x10;
              rt_memcpy_w(temp_v8,*(int *)(temp_v7 + 0x4c) + temp_v3 * 0x10,0xe);
              FUN_00100388(temp_v6,"%s/%s",temp_v9,pcVar5 + 1);
              FUN_00471fec(DAT_0057027c,temp_v6,temp_v8,1,0x80,temp_v8);
              temp_v4 = temp_v4 + 1;
              *(unsigned char *)(temp_v8 + 0xc) = 1;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v2);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(temp_v10 + 0x310));
  }
  return;
}
