/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df004` (_code @ 0x3df004, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001b564c(unsigned short);
extern int FUN_001b5660(int);
extern int FUN_001ba3d4(unsigned short);
extern int FUN_001ba514(unsigned short);


void FUN_003df004(int param_1,int param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  *(unsigned char *)((int)param_3 + 7) = 0;
  temp_v3 = param_1;
  FUN_001ad9b4();
  if (temp_v3 != 0) {
    temp_v4 = temp_v3 + param_2 * 8;
    temp_v0 = *(short *)(temp_v4 + 0x100);
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 != 7) {
          if (temp_v0 != 8) {
            return;
          }
          temp_v1 = *(unsigned short *)(temp_v4 + 0x102);
          *(unsigned short *)(param_3 + 1) = temp_v1;
          temp_v3 = FUN_001b564c(temp_v1 & 0xff);
          param_3[2] = temp_v3;
          temp_v3 = *(int *)(temp_v4 + 0x104) - temp_v3;
          *param_3 = temp_v3;
          *(unsigned char *)((int)param_3 + 7) = 1;
        }
        else {
          *(unsigned char *)((int)param_3 + 6) = 1;
          *(unsigned short *)(param_3 + 1) = *(unsigned short *)(temp_v4 + 0x102);
          temp_v3 = *(int *)(temp_v4 + 0x104) - param_3[2];
          *param_3 = temp_v3;
        }
      }
      else {
        *(unsigned char *)((int)param_3 + 6) = 0;
        *(unsigned short *)(param_3 + 1) = *(unsigned short *)(temp_v4 + 0x102);
        if (*(char *)(temp_v3 + 6) != '\x01') {
          temp_v3 = FUN_001ba514(*(unsigned short *)(temp_v4 + 0x102));
          if (-1 < temp_v3) {
            param_3[2] = 1;
            *param_3 = 0;
            return;
          }
          *param_3 = 1;
          param_3[2] = 0;
          return;
        }
        temp_v3 = FUN_001b5660(param_1);
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v3 + param_2 * 2 + 4);
        param_3[2] = temp_v2;
        temp_v3 = *(int *)(temp_v4 + 0x104) - temp_v2;
        *param_3 = temp_v3;
      }
    }
    else {
      temp_v3 = FUN_001ba3d4(*(unsigned short *)(temp_v4 + 0x102));
      param_3[2] = temp_v3;
      *(unsigned char *)((int)param_3 + 6) = 1;
      *(unsigned short *)(param_3 + 1) = *(unsigned short *)(temp_v4 + 0x102);
      temp_v3 = *(int *)(temp_v4 + 0x104) - temp_v3;
      *param_3 = temp_v3;
    }
    if (temp_v3 < 1) {
      temp_v3 = 0;
    }
    *param_3 = temp_v3;
  }
  return;
}
