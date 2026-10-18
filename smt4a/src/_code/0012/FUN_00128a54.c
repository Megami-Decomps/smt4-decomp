/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128a54` (_code @ 0x128a54, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0030d4c0. */


void FUN_00128a54(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v3 = *(unsigned int *)(param_1 + 0x16bc);
  temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | (((param_2 - 0x101U) << (temp_v3 & 0xff)) & 0xffff);
  temp_v1 = (unsigned short)temp_v2;
  if ((int)temp_v3 >= 0xc) {
    *(unsigned short *)(param_1 + 0x16b8) = temp_v1;
    temp_v4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v4 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v2;
    temp_v4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v4 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v4) =
         (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
    temp_v3 = *(int *)(param_1 + 0x16bc) - 0xb;
    *(short *)(param_1 + 0x16b8) =
         (short)(((param_2 - 0x101U) & 0xffff) >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
    *(unsigned int *)(param_1 + 0x16bc) = temp_v3;
  }
  else {
    temp_v3 = temp_v3 + 5;
    *(unsigned short *)(param_1 + 0x16b8) = temp_v1;
    *(unsigned int *)(param_1 + 0x16bc) = temp_v3;
  }
  if ((int)temp_v3 >= 0xc) {
    temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((param_3 - 1U) << (temp_v3 & 0xff));
    *(short *)(param_1 + 0x16b8) = (short)temp_v2;
    temp_v4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v4 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v2;
    temp_v4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v4 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v4) =
         (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
    temp_v2 = *(int *)(param_1 + 0x16bc) - 0xb;
    *(short *)(param_1 + 0x16b8) =
         (short)(((param_3 - 1U) & 0xffff) >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
    *(unsigned int *)(param_1 + 0x16bc) = temp_v2;
  }
  else {
    temp_v2 = temp_v3 + 5;
    *(unsigned short *)(param_1 + 0x16b8) =
         *(unsigned short *)(param_1 + 0x16b8) | (unsigned short)((param_3 - 1) << (temp_v3 & 0xff));
    *(unsigned int *)(param_1 + 0x16bc) = temp_v2;
  }
  if ((int)temp_v2 >= 0xd) {
    temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((param_4 - 4U) << (temp_v2 & 0xff));
    *(short *)(param_1 + 0x16b8) = (short)temp_v2;
    temp_v4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v4 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v2;
    temp_v4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v4 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v4) =
         (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
    temp_v4 = *(int *)(param_1 + 0x16bc) - 0xc;
    *(short *)(param_1 + 0x16b8) =
         (short)(((param_4 - 4U) & 0xffff) >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
  }
  else {
    temp_v4 = temp_v2 + 4;
    *(unsigned short *)(param_1 + 0x16b8) =
         *(unsigned short *)(param_1 + 0x16b8) | (unsigned short)((param_4 - 4) << (temp_v2 & 0xff));
  }
  *(int *)(param_1 + 0x16bc) = temp_v4;
  for (temp_v4 = 0; temp_v4 < param_4; temp_v4 = temp_v4 + 1) {
    temp_v2 = *(unsigned int *)(param_1 + 0x16bc);
    if ((int)temp_v2 >= 0xe) {
      temp_v0 = *(unsigned short *)((unsigned int)*(unsigned char *)(temp_v4 + 0x547104) * 4 + param_1 + 0xa7e);
      temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((unsigned int)temp_v0 << (temp_v2 & 0xff));
      *(short *)(param_1 + 0x16b8) = (short)temp_v2;
      temp_v5 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = temp_v5 + 1;
      *(char *)(*(int *)(param_1 + 8) + temp_v5) = (char)temp_v2;
      temp_v5 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = temp_v5 + 1;
      *(char *)(*(int *)(param_1 + 8) + temp_v5) =
           (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
      temp_v5 = *(int *)(param_1 + 0x16bc) - 0xd;
      *(unsigned short *)(param_1 + 0x16b8) = temp_v0 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff);
    }
    else {
      temp_v5 = temp_v2 + 3;
      *(unsigned short *)(param_1 + 0x16b8) =
           (*(short *)((unsigned int)*(unsigned char *)(temp_v4 + 0x547104) * 4 + param_1 + 0xa7e) << (temp_v2 & 0xff)) |
           *(unsigned short *)(param_1 + 0x16b8);
    }
    *(int *)(param_1 + 0x16bc) = temp_v5;
  }
  FUN_0030d4c0(param_1,param_1 + 0x94,param_2 - 1);
  FUN_0030d4c0(param_1,param_1 + 0x988,param_3 - 1);
  return;
}
