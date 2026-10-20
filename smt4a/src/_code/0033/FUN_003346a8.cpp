/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003346a8` (_code @ 0x3346a8, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001835b4(int, int, int, int, int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */


void FUN_003346a8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v7 = 0;
  temp_v5 = (param_2 / 5) % 8;
  temp_v1 = (temp_v5 + 7) % 8;
  temp_v6 = (param_2 / 5 + 4) % 8;
  do {
    temp_v3 = 0;
    do {
      temp_v4 = temp_v7 * 3 + temp_v3;
      temp_v2 = FUN_001834a4(0x1a,param_1 + temp_v4);
      if (temp_v5 == temp_v4 || temp_v6 == temp_v4) {
        FUN_001835b4(2,0x1a,0x1de,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),0xfb);
      }
      else {
        temp_v0 = temp_v1;
        if (temp_v1 != temp_v4) {
          temp_v0 = (temp_v6 + 7) % 8;
        }
        if (!(temp_v1 != temp_v4 && temp_v0 != temp_v4)) {
          FUN_001835b4(2,0x1a,0x1df,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),0xfb);
        }
        else {
          FUN_001835b4(2,0x1a,0x1dd,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),0xfb);
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 3);
  return;
}

} /* extern "C" */
