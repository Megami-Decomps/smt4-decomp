/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012575c` (_code @ 0x12575c, 0x2c6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_3_stack;


void FUN_0012575c(int param_1,int param_2,int param_3)

{
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  temp_v2 = 0;
  if (*(int *)(param_1 + 0x16a0) != 0) {
    do {
      temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x16a4) + temp_v2 * 2);
      temp_v3 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x1698) + temp_v2);
      temp_v2 = temp_v2 + 1;
      if (temp_v5 != 0) {
        temp_v6 = (unsigned int)*(unsigned char *)(temp_v3 + 0x547810) * 4;
        temp_v7 = temp_v6 + param_2;
        temp_v8 = *(unsigned int *)(param_1 + 0x16bc);
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v7 + 0x406);
        if ((int)(0x10 - temp_v4) < (int)temp_v8) {
          temp_v1 = *(unsigned short *)(temp_v7 + 0x404);
          temp_v8 = ((unsigned int)temp_v1 << (temp_v8 & 0xff)) | (unsigned int)*(unsigned short *)(param_1 + 0x16b8);
          *(short *)(param_1 + 0x16b8) = (short)temp_v8;
          temp_v7 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v7 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v7) = (char)temp_v8;
          temp_v7 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v7 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v7) =
               (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
          *(unsigned short *)(param_1 + 0x16b8) = temp_v1 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff);
          *(unsigned int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (temp_v4 - 0x10);
        }
        else {
          *(unsigned short *)(param_1 + 0x16b8) =
               (*(short *)(temp_v7 + 0x404) << (temp_v8 & 0xff)) | *(unsigned short *)(param_1 + 0x16b8);
          *(unsigned int *)(param_1 + 0x16bc) = temp_v8 + temp_v4;
        }
        temp_v7 = *(int *)(temp_v6 + 0x547018);
        if (temp_v7 != 0) {
          temp_v3 = temp_v3 - *(int *)(temp_v6 + 0x547910);
          temp_v4 = *(unsigned int *)(param_1 + 0x16bc);
          if (0x10 - temp_v7 < (int)temp_v4) {
            temp_v4 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | (temp_v3 << (temp_v4 & 0xff));
            *(short *)(param_1 + 0x16b8) = (short)temp_v4;
            temp_v6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = temp_v6 + 1;
            *(char *)(*(int *)(param_1 + 8) + temp_v6) = (char)temp_v4;
            temp_v6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = temp_v6 + 1;
            *(char *)(*(int *)(param_1 + 8) + temp_v6) =
                 (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
            *(short *)(param_1 + 0x16b8) =
                 (short)((temp_v3 & 0xffff) >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff));
            temp_v7 = *(int *)(param_1 + 0x16bc) + (temp_v7 - 0x10);
          }
          else {
            *(unsigned short *)(param_1 + 0x16b8) =
                 *(unsigned short *)(param_1 + 0x16b8) | (unsigned short)(temp_v3 << (temp_v4 & 0xff));
            temp_v7 = temp_v4 + temp_v7;
          }
          *(int *)(param_1 + 0x16bc) = temp_v7;
        }
        temp_v4 = temp_v5 - 1;
        if (temp_v4 < 0x100) {
          temp_v0 = *(unsigned char *)(temp_v5 + 0x54760f);
        }
        else {
          temp_v0 = *(unsigned char *)((temp_v4 >> 7) + 0x547710);
        }
        temp_v6 = (unsigned int)temp_v0 * 4;
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v6 + param_3 + 2);
        temp_v5 = *(unsigned int *)(param_1 + 0x16bc);
        if ((int)(0x10 - temp_v3) < (int)temp_v5) {
          temp_v1 = *(unsigned short *)(param_3 + temp_v6);
          temp_v5 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((unsigned int)temp_v1 << (temp_v5 & 0xff));
          *(short *)(param_1 + 0x16b8) = (short)temp_v5;
          temp_v7 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v7 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v7) = (char)temp_v5;
          temp_v7 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v7 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v7) =
               (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
          *(unsigned short *)(param_1 + 0x16b8) = temp_v1 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff);
          *(unsigned int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (temp_v3 - 0x10);
        }
        else {
          *(unsigned short *)(param_1 + 0x16b8) =
               (*(short *)(param_3 + temp_v6) << (temp_v5 & 0xff)) | *(unsigned short *)(param_1 + 0x16b8);
          *(unsigned int *)(param_1 + 0x16bc) = temp_v5 + temp_v3;
        }
        temp_v3 = *(unsigned int *)(temp_v6 + 0x54708c);
        if (temp_v3 != 0) {
          temp_v4 = temp_v4 - *(int *)(temp_v6 + 0x547984);
          temp_v5 = *(unsigned int *)(param_1 + 0x16bc);
          if ((int)(0x10 - temp_v3) < (int)temp_v5) {
            temp_v5 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | (temp_v4 << (temp_v5 & 0xff));
            *(short *)(param_1 + 0x16b8) = (short)temp_v5;
            temp_v6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = temp_v6 + 1;
            *(char *)(*(int *)(param_1 + 8) + temp_v6) = (char)temp_v5;
            temp_v6 = *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = temp_v6 + 1;
            *(char *)(*(int *)(param_1 + 8) + temp_v6) =
                 (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
            temp_v6 = *(int *)(param_1 + 0x16bc);
            *(short *)(param_1 + 0x16b8) = (short)((temp_v4 & 0xffff) >> ((0x10U - temp_v6) & 0xff));
            temp_v6 = temp_v6 + (temp_v3 - 0x10);
            *(int *)(param_1 + 0x16bc) = temp_v6;
            continue;
          }
          temp_v6 = temp_v5 + temp_v3;
          *(unsigned short *)(param_1 + 0x16b8) =
               *(unsigned short *)(param_1 + 0x16b8) | (unsigned short)(temp_v4 << (temp_v5 & 0xff));
          *(int *)(param_1 + 0x16bc) = temp_v6;
        }
      }
      else {
        temp_v6 = temp_v3 * 4;
        temp_v5 = *(unsigned int *)(param_1 + 0x16bc);
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v6 + param_2 + 2);
        if ((int)(0x10 - temp_v3) < (int)temp_v5) {
          temp_v1 = *(unsigned short *)(param_2 + temp_v6);
          temp_v5 = (unsigned int)*(unsigned short *)(param_1 + 0x16b8) | ((unsigned int)temp_v1 << (temp_v5 & 0xff));
          *(short *)(param_1 + 0x16b8) = (short)temp_v5;
          temp_v6 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v6 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v6) = (char)temp_v5;
          temp_v6 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = temp_v6 + 1;
          *(char *)(*(int *)(param_1 + 8) + temp_v6) =
               (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
          temp_v6 = *(int *)(param_1 + 0x16bc);
          *(unsigned short *)(param_1 + 0x16b8) = temp_v1 >> ((0x10U - temp_v6) & 0xff);
          temp_v6 = temp_v6 + (temp_v3 - 0x10);
          *(int *)(param_1 + 0x16bc) = temp_v6;
          continue;
        }
        *(unsigned short *)(param_1 + 0x16b8) =
             (*(short *)(param_2 + temp_v6) << (temp_v5 & 0xff)) | *(unsigned short *)(param_1 + 0x16b8);
        *(unsigned int *)(param_1 + 0x16bc) = temp_v5 + temp_v3;
      }
    } while (temp_v2 < *(unsigned int *)(param_1 + 0x16a0));
  }
  temp_v3 = *(unsigned int *)(param_1 + 0x16bc);
  temp_v2 = (unsigned int)*(unsigned short *)(param_2 + 0x402);
  if ((int)(0x10 - temp_v2) < (int)temp_v3) {
    temp_v1 = *(unsigned short *)(param_2 + 0x400);
    temp_v3 = ((unsigned int)temp_v1 << (temp_v3 & 0xff)) | (unsigned int)*(unsigned short *)(param_1 + 0x16b8);
    *(short *)(param_1 + 0x16b8) = (short)temp_v3;
    temp_v6 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v6 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v6) = (char)temp_v3;
    temp_v6 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = temp_v6 + 1;
    *(char *)(*(int *)(param_1 + 8) + temp_v6) =
         (char)((unsigned short)*(unsigned short *)(param_1 + 0x16b8) >> 8);
    *(unsigned short *)(param_1 + 0x16b8) = temp_v1 >> ((0x10U - *(int *)(param_1 + 0x16bc)) & 0xff);
    *(unsigned int *)(param_1 + 0x16bc) = *(int *)(param_1 + 0x16bc) + (temp_v2 - 0x10);
  }
  else {
    *(unsigned short *)(param_1 + 0x16b8) =
         (*(unsigned short *)(param_2 + 0x400) << (temp_v3 & 0xff)) | *(unsigned short *)(param_1 + 0x16b8);
    *(unsigned int *)(param_1 + 0x16bc) = temp_v3 + temp_v2;
  }
  *(unsigned int *)(param_1 + 0x16b4) = (unsigned int)*(unsigned short *)(param_2 + 0x402);
  return;
}
