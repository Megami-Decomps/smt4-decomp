/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c23c4` (_code @ 0x3c23c4, 0x170 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 10 byte(s) */
typedef struct {
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int FUN_002c0bcc(short);
/* Supplied declaration required: FUN_003eb294. */


unsigned int FUN_003c23c4(int param_1,unsigned char *param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  short temp_v8;
  short temp_v9;
  short temp_v10;
  short temp_v11;
  short temp_v12;
  
  temp_v7 = 0;
  FUN_003eb294(&temp_v8);
  temp_v0 = *(short *)(param_1 + 4);
  temp_v1 = *(short *)(param_1 + 6);
  temp_v2 = *(short *)(param_1 + 8);
  temp_v3 = *(short *)(param_1 + 10);
  temp_v4 = *(short *)(param_1 + 0xc);
  if (temp_v0 >= 0x3e7) {
    *param_2 = 0;
  }
  if (temp_v1 >= 0x3e7) {
    param_2[1] = 0;
  }
  if (temp_v2 >= 0x3e7) {
    param_2[2] = 0;
  }
  if (temp_v3 >= 0x3e7) {
    param_2[3] = 0;
  }
  if (temp_v4 >= 0x3e7) {
    param_2[4] = 0;
  }
  temp_v8 = temp_v0;
  temp_v9 = temp_v1;
  temp_v10 = temp_v2;
  temp_v11 = temp_v3;
  temp_v12 = temp_v4;
  temp_v5 = FUN_002c0bcc(((unsigned short)param_2[3] +
                        (unsigned short)*param_2 + (unsigned short)param_2[1] + (unsigned short)param_2[2] +
                       (unsigned short)param_2[4]) - 1);
  temp_v6 = (unsigned int)*param_2;
  if (!(temp_v6 == 0 || temp_v6 <= temp_v5)) {
    temp_v8 = temp_v0 + 1;
  }
  else {
    temp_v7 = 1;
    temp_v6 = temp_v6 + param_2[1];
    if (!(param_2[1] == 0 || temp_v6 <= temp_v5)) {
      temp_v9 = temp_v1 + 1;
    }
    else {
      temp_v7 = 2;
      temp_v6 = temp_v6 + param_2[2];
      if (!(param_2[2] == 0 || temp_v6 <= temp_v5)) {
        temp_v10 = temp_v2 + 1;
      }
      else {
        temp_v7 = 3;
        temp_v6 = temp_v6 + param_2[3];
        if (!(param_2[3] == 0 || temp_v6 <= temp_v5)) {
          temp_v11 = temp_v3 + 1;
        }
        else {
          temp_v7 = 4;
          if (!(param_2[4] == 0 || temp_v6 + param_2[4] <= temp_v5)) {
            temp_v12 = temp_v4 + 1;
          }
          else {
            temp_v7 = 5;
          }
        }
      }
    }
  }
  *(short *)(param_1 + 4) = temp_v8;
  *(short *)(param_1 + 6) = temp_v9;
  *(short *)(param_1 + 8) = temp_v10;
  *(short *)(param_1 + 10) = temp_v11;
  *(short *)(param_1 + 0xc) = temp_v12;
  return temp_v7;
}
