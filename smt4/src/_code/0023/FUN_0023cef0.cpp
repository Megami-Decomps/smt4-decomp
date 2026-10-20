/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023cef0` (_code @ 0x23cef0, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b45e8(void);

/* Supplied declaration required: FUN_002b45e8. */
extern int FUN_002b63ac(void);


unsigned int FUN_0023cef0(unsigned int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  if (param_5 == 0) {
    temp_v1 = FUN_002b63ac();
    param_5 = (unsigned int)*(unsigned short *)(temp_v1 + 8);
  }
  FUN_002b45e8();
  temp_v1 = 0x44d35c;
  temp_v5 = 0xf;
  temp_v7 = (param_4 + param_3 * 1000) & 0xffff;
  if (param_2 == 2) {
    temp_v1 = 0x44d410;
    temp_v5 = 0x3e;
  }
  temp_v3 = 0;
  temp_v4 = 0;
  if (temp_v4 < temp_v5) {
    do {
      if (*(unsigned short *)(temp_v1 + temp_v4 * 0xc) == temp_v7) {
        temp_v3 = temp_v1 + temp_v4 * 0xc;
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v5);
  }
  temp_v0 = *(short *)(param_5 + 0x72) + *(short *)(param_5 + 0x70) * 1000;
  if (temp_v3 != 0) {
    temp_v6 = *(unsigned int *)(temp_v3 + 8);
    if ((int)temp_v6 < 1) {
      temp_v2 = 0;
    }
    else {
      temp_v2 = temp_v6 & 1;
      if (temp_v2 != 0) {
        temp_v7 = *(unsigned int *)(temp_v3 + 4);
      }
      temp_v1 = 0;
      if (temp_v2 != 0) {
        do {
          if (*(short *)(temp_v7 + temp_v1 * 2) == temp_v0) {
            return 1;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (int)temp_v2);
      }
    }
    if ((int)temp_v2 < (int)temp_v6) {
      do {
        if ((*(short *)(*(int *)(temp_v3 + 4) + temp_v2 * 2) == temp_v0) ||
           (*(short *)(*(int *)(temp_v3 + 4) + temp_v2 * 2 + 2) == temp_v0)) {
          return 1;
        }
        temp_v2 = temp_v2 + 2;
      } while ((int)temp_v2 < (int)temp_v6);
    }
  }
  return 0;
}

} /* extern "C" */
