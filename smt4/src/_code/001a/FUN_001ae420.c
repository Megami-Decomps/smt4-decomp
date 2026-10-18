/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ae420` (_code @ 0x1ae420, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0040bc5c; /* 0x40bc5c */
extern unsigned char DAT_0040dd5c; /* 0x40dd5c */
extern unsigned char DAT_0040fe5c; /* 0x40fe5c */

/* Supplied declaration required: FUN_00284828. */
/* Supplied declaration required: FUN_002c3944. */


unsigned int FUN_001ae420(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  if ((param_6 != 0) && (param_6 == 1)) {
    temp_v4 = param_2 == 0x400;
    if (param_2 < 0x401) {
      temp_v4 = param_5 == 0;
    }
    if (temp_v4) {
      FUN_002c3944(param_1,0x20);
      temp_v0 = FUN_00284828(0x670);
      *param_1 = temp_v0;
      temp_v2 = 0;
      if (temp_v0 != 0) {
        *(unsigned int *)(temp_v0 + 0x48) = 0;
        *(unsigned char **)(temp_v0 + 0x3c) = &DAT_0040bc5c;
        *(unsigned char **)(temp_v0 + 0x40) = &DAT_0040dd5c;
        *(unsigned char **)(temp_v0 + 0x44) = &DAT_0040fe5c;
        *(unsigned int *)(temp_v0 + 4) = param_2;
        *(unsigned int *)(temp_v0 + 8) = param_3;
        param_1[6] = 0x400;
        if (param_2 < 0x201) {
          param_1[6] = 0x200;
        }
        if (param_2 < 0x101) {
          param_1[6] = 0x100;
        }
        param_1[2] = param_4;
        param_1[7] = 1;
        param_1[5] = param_5;
        temp_v0 = FUN_00284828(param_4 << 2);
        param_1[1] = temp_v0;
        temp_v2 = 0;
        if (temp_v0 != 0) {
          temp_v0 = param_1[6];
          temp_v3 = 0;
          if (temp_v3 < param_4) {
            do {
              temp_v1 = FUN_00284828(temp_v0 * (param_3 + (param_3 >> 1) + 1));
              *(int *)(param_1[1] + temp_v3 * 4) = temp_v1;
              if (temp_v1 == 0) {
                return 0;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < param_4);
          }
          param_1[3] = param_4 - 1;
          temp_v2 = 1;
        }
      }
      return temp_v2;
    }
  }
  return 0;
}
