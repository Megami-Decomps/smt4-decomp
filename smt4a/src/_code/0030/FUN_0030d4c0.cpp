/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d4c0` (_code @ 0x30d4c0, 0x362 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;


void FUN_0030d4c0(int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  temp_v4 = 7;
  temp_v7 = 4;
  temp_v0 = 0xffffffff;
  if (*(unsigned short *)(param_2 + 2) == 0) {
    temp_v4 = 0x8a;
    temp_v7 = 3;
  }
  temp_v9 = 0;
  temp_v2 = 0;
  temp_v8 = (unsigned int)*(unsigned short *)(param_2 + 2);
  do {
    if (param_3 < temp_v9) {
      return;
    }
    temp_v1 = temp_v2 + 1;
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v9 * 4 + param_2 + 6);
    if ((temp_v4 <= temp_v1) || (temp_v8 != temp_v5)) {
      if (temp_v1 < temp_v7) {
        temp_v4 = temp_v8 * 4 + param_1;
        do {
          temp_v0 = (unsigned int)*(unsigned short *)(temp_v4 + 0xa7e);
          temp_v6 = *(unsigned int *)(param_1 + 0x16bc);
          if ((int)(0x10 - temp_v0) < (int)temp_v6) {
            temp_v3 = *(unsigned short *)(temp_v4 + 0xa7c);
            temp_v6 = ((unsigned int)temp_v3 << (temp_v6 & 0xff)) | (unsigned int)*(unsigned short *)(param_1 + 0x16b8);
            *(short *)(param_1 + 0x16b8) = (short)temp_v6;
            temp_v7 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = temp_v7 + 1;
            *(char *)(*(int *)(param_1 + 8) + temp_v7) = (char)temp_v6;
            temp_v7 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = temp_v7 + 1;
            *(char *)(*(int *)(param_1 + 8) + temp_v7) =
                 (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
            *(unsigned short *)(param_1 + 0x16b8) = temp_v3 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff);
            *(unsigned int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (temp_v0 - 0x10);
          }
          else {
            *(unsigned short *)(param_1 + 0x16b8) =
                 (*(short *)(temp_v4 + 0xa7c) << (temp_v6 & 0xff)) | *(unsigned short *)(param_1 + 0x16b8);
            *(unsigned int *)(param_1 + 0x16bc) = temp_v6 + temp_v0;
          }
          temp_v1 = temp_v1 - 1;
        } while (temp_v1 != 0);
      }
      else if (temp_v8 != 0) {
        if (temp_v8 != temp_v0) {
          temp_v4 = temp_v8 * 4 + param_1;
          temp_v6 = *(unsigned int *)(param_1 + 0x16bc);
          temp_v0 = (unsigned int)*(unsigned short *)(temp_v4 + 0xa7e);
          temp_v1 = temp_v2;
          if ((int)(0x10 - temp_v0) < (int)temp_v6) {
            temp_v3 = *(unsigned short *)(temp_v4 + 0xa7c);
            temp_v6 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((unsigned int)temp_v3 << (temp_v6 & 0xff));
            *(short *)(param_1 + 0x16b8) = (short)temp_v6;
            temp_v4 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = temp_v4 + 1;
            *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v6;
            temp_v4 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = temp_v4 + 1;
            *(char *)(*(int *)(param_1 + 8) + temp_v4) =
                 (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
            *(unsigned short *)(param_1 + 0x16b8) = temp_v3 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff);
            *(unsigned int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (temp_v0 - 0x10);
          }
          else {
            *(unsigned short *)(param_1 + 0x16b8) =
                 (*(short *)(temp_v4 + 0xa7c) << (temp_v6 & 0xff)) | *(unsigned short *)(param_1 + 0x16b8);
            *(unsigned int *)(param_1 + 0x16bc) = temp_v6 + temp_v0;
          }
        }
        temp_v6 = *(unsigned int *)(param_1 + 0x16bc);
        temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0xabe);
        if ((int)(0x10 - temp_v0) < (int)temp_v6) {
          temp_v3 = *(unsigned short *)(param_1 + 0xabc);
          temp_v6 = ((unsigned int)temp_v3 << (temp_v6 & 0xff)) | (unsigned int)*(unsigned short *)(param_1 + 0x16b8);
          *(short *)(param_1 + 0x16b8) = (short)temp_v6;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v6;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) =
               (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
          *(unsigned short *)(param_1 + 0x16b8) = temp_v3 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff);
          temp_v0 = *(int *)(param_1 + 0x16bc) + (temp_v0 - 0x10);
          *(unsigned int *)(param_1 + 0x16bc) = temp_v0;
        }
        else {
          temp_v0 = temp_v6 + temp_v0;
          *(unsigned short *)(param_1 + 0x16b8) =
               (*(short *)(param_1 + 0xabc) << (temp_v6 & 0xff)) | *(unsigned short *)(param_1 + 0x16b8);
          *(unsigned int *)(param_1 + 0x16bc) = temp_v0;
        }
        if ((int)temp_v0 >= 0xf) {
          temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((temp_v1 - 3U) << (temp_v0 & 0xff));
          *(short *)(param_1 + 0x16b8) = (short)temp_v0;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v0;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) =
               (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
          temp_v4 = *(int *)(param_1 + 0x16bc) - 0xe;
          *(short *)(param_1 + 0x16b8) =
               (short)(((temp_v1 - 3U) & 0xffff) >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
          *(int *)(param_1 + 0x16bc) = temp_v4;
        }
        else {
          temp_v3 = *(unsigned short *)(param_1 + 0x16b8) | (unsigned short)((temp_v1 - 3) << (temp_v0 & 0xff));
          temp_v4 = temp_v0 + 2;
          *(unsigned short *)(param_1 + 0x16b8) = temp_v3;
          *(int *)(param_1 + 0x16bc) = temp_v4;
        }
      }
      else if (temp_v1 < 0xb) {
        temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0xac2);
        temp_v6 = *(unsigned int *)(param_1 + 0x16bc);
        if ((int)(0x10 - temp_v0) < (int)temp_v6) {
          temp_v3 = *(unsigned short *)(param_1 + 0xac0);
          temp_v6 = ((unsigned int)temp_v3 << (temp_v6 & 0xff)) | (unsigned int)*(unsigned short *)(param_1 + 0x16b8);
          *(short *)(param_1 + 0x16b8) = (short)temp_v6;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v6;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) =
               (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
          *(unsigned short *)(param_1 + 0x16b8) = temp_v3 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff);
          temp_v0 = *(int *)(param_1 + 0x16bc) + (temp_v0 - 0x10);
          *(unsigned int *)(param_1 + 0x16bc) = temp_v0;
        }
        else {
          temp_v0 = temp_v6 + temp_v0;
          *(unsigned short *)(param_1 + 0x16b8) =
               (*(unsigned short *)(param_1 + 0xac0) << (temp_v6 & 0xff)) | *(unsigned short *)(param_1 + 0x16b8);
          *(unsigned int *)(param_1 + 0x16bc) = temp_v0;
        }
        if ((int)temp_v0 >= 0xe) {
          temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((temp_v2 - 2U) << (temp_v0 & 0xff));
          *(short *)(param_1 + 0x16b8) = (short)temp_v0;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v0;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) =
               (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
          temp_v4 = *(int *)(param_1 + 0x16bc) - 0xd;
          *(short *)(param_1 + 0x16b8) =
               (short)(((temp_v2 - 2U) & 0xffff) >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
          *(int *)(param_1 + 0x16bc) = temp_v4;
        }
        else {
          temp_v3 = *(unsigned short *)(param_1 + 0x16b8) | (unsigned short)((temp_v2 - 2) << (temp_v0 & 0xff));
          temp_v4 = temp_v0 + 3;
          *(unsigned short *)(param_1 + 0x16b8) = temp_v3;
          *(int *)(param_1 + 0x16bc) = temp_v4;
        }
      }
      else {
        temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0xac6);
        temp_v6 = *(unsigned int *)(param_1 + 0x16bc);
        if ((int)(0x10 - temp_v0) < (int)temp_v6) {
          temp_v3 = *(unsigned short *)(param_1 + 0xac4);
          temp_v6 = ((unsigned int)temp_v3 << (temp_v6 & 0xff)) | (unsigned int)*(unsigned short *)(param_1 + 0x16b8);
          *(short *)(param_1 + 0x16b8) = (short)temp_v6;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v6;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) =
               (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
          *(unsigned short *)(param_1 + 0x16b8) = temp_v3 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff);
          temp_v0 = *(int *)(param_1 + 0x16bc) + (temp_v0 - 0x10);
          *(unsigned int *)(param_1 + 0x16bc) = temp_v0;
        }
        else {
          temp_v0 = temp_v6 + temp_v0;
          *(unsigned short *)(param_1 + 0x16b8) =
               (*(short *)(param_1 + 0xac4) << (temp_v6 & 0xff)) | *(unsigned short *)(param_1 + 0x16b8);
          *(unsigned int *)(param_1 + 0x16bc) = temp_v0;
        }
        if ((int)temp_v0 >= 10) {
          temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((temp_v2 - 10U) << (temp_v0 & 0xff));
          *(short *)(param_1 + 0x16b8) = (short)temp_v0;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) = (char)temp_v0;
          temp_v4 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v4 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v4) =
               (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
          temp_v4 = *(int *)(param_1 + 0x16bc) - 9;
          *(short *)(param_1 + 0x16b8) =
               (short)(((temp_v2 - 10U) & 0xffff) >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
          *(int *)(param_1 + 0x16bc) = temp_v4;
        }
        else {
          temp_v3 = *(unsigned short *)(param_1 + 0x16b8) | (unsigned short)((temp_v2 - 10) << (temp_v0 & 0xff));
          temp_v4 = temp_v0 + 7;
          *(unsigned short *)(param_1 + 0x16b8) = temp_v3;
          *(int *)(param_1 + 0x16bc) = temp_v4;
        }
      }
      temp_v1 = 0;
      temp_v0 = temp_v8;
      if (temp_v5 != 0) {
        if (temp_v8 != temp_v5) {
          temp_v4 = 7;
          temp_v7 = 4;
          temp_v9 = temp_v9 + 1;
          temp_v2 = temp_v1;
          temp_v8 = temp_v5;
          continue;
        }
        temp_v4 = 6;
      }
      else {
        temp_v4 = 0x8a;
      }
      temp_v7 = 3;
    }
    temp_v9 = temp_v9 + 1;
    temp_v2 = temp_v1;
    temp_v8 = temp_v5;
  } while( 1 );
}

} /* extern "C" */
