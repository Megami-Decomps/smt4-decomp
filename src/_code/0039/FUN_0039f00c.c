/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039f00c` (_code @ 0x39f00c, 0x1e0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0049fcfc; /* 0x49fcfc */

extern int FUN_0024c500(unsigned char);
extern int FUN_002c0ba8(void);
extern int FUN_002fb058(int);
extern int FUN_00316ef4(int);


void FUN_0039f00c(int param_1)

{
/* irregular: 6 goto(s) */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x5a88)) {
    do {
      temp_v1 = param_1 + temp_v2 * 0x4c;
      if ((int)*(short *)(temp_v1 + 0xe8e) != (int)*(char *)(param_1 + 0x60)) goto LAB_0039f0c8;
      if (DAT_0049fcfc == 0) {
        if (*(unsigned char *)(temp_v1 + 0xe8d) != 0xff) {
          if (*(unsigned char *)(temp_v1 + 0xe8d) != 0xfe) {
            temp_v0 = FUN_0024c500(*(unsigned char *)(temp_v1 + 0xe8c));
            if (((temp_v0 != 0) &&
                ((*(short *)(temp_v1 + 0xeb8) == 0 || (temp_v0 = FUN_002c0ba8(), temp_v0 != 0)))) &&
               ((*(short *)(temp_v1 + 0xeba) == 0 || (temp_v0 = FUN_002c0ba8(), temp_v0 == 0))))
            goto LAB_0039f0fc;
          }
          else {
            temp_v0 = FUN_002fb058((int)*(short *)(temp_v1 + 0xeb6));
            if (temp_v0 != 0) goto LAB_0039f0fc;
          }
LAB_0039f0c8:
          *(unsigned short *)(temp_v1 + 0xebc) = 0;
        }
        else {
          temp_v0 = FUN_00316ef4((int)*(short *)(temp_v1 + 0xeb6));
          if (temp_v0 == 0) {
            *(unsigned short *)(temp_v1 + 0xebc) = 0;
          }
          else {
            *(unsigned short *)(temp_v1 + 0xebc) = 1;
          }
        }
      }
      else {
LAB_0039f0fc:
        *(unsigned short *)(temp_v1 + 0xebc) = 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x5a88));
  }
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x61b0)) {
    do {
      temp_v1 = param_1 + temp_v2 * 0x4c;
      if ((int)*(short *)(temp_v1 + 0x5a96) != (int)*(char *)(param_1 + 0x60)) goto LAB_0039f1ac;
      if (DAT_0049fcfc == 0) {
        if (*(unsigned char *)(temp_v1 + 0x5a95) != 0xff) {
          temp_v0 = FUN_0024c500(*(unsigned char *)(temp_v1 + 0x5a94));
          if (((temp_v0 != 0) &&
              ((*(short *)(temp_v1 + 0x5ac0) == 0 || (temp_v0 = FUN_002c0ba8(), temp_v0 != 0)))) &&
             ((*(short *)(temp_v1 + 0x5ac2) == 0 || (temp_v0 = FUN_002c0ba8(), temp_v0 == 0))))
          goto LAB_0039f1c8;
        }
        else {
          temp_v0 = FUN_00316ef4((int)*(short *)(temp_v1 + 0x5abe));
          if (temp_v0 != 0) goto LAB_0039f1c8;
        }
LAB_0039f1ac:
        *(unsigned short *)(temp_v1 + 0x5ac4) = 0;
      }
      else {
LAB_0039f1c8:
        *(unsigned short *)(temp_v1 + 0x5ac4) = 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x61b0));
  }
  *(unsigned char *)(param_1 + 0x5a8c) = 0;
  return;
}
