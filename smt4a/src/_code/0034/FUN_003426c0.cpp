/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003426c0` (_code @ 0x3426c0, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001654f8(unsigned int, int);
int FUN_001834a4(int, int);
int FUN_001835b4(...);
int FUN_0023723c(unsigned int, int, unsigned int, int, int, unsigned int);
int FUN_0025cc78(...);
int FUN_002a1f60(...);

/* stack frame of param_7: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0023723c. */
/* Supplied declaration required: FUN_0025cc78. */
/* Supplied declaration required: FUN_002a1f60. */
extern unsigned int FUN_0035aa90(int);


void FUN_003426c0(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v4 = *(int *)(param_1 + 4);
  temp_v5 = *(int *)(param_1 + 8);
  temp_v6 = param_4;
  temp_v0 = FUN_001834a4(0x2e,0xcf);
  temp_v3 = 0;
  do {
    temp_v1 = FUN_001834a4(0x2e,temp_v3 + 0xd1);
    if (temp_v3 < param_4) {
      if (param_7 != 0) {
        if (param_7 != 1) {
          if (param_7 == 2 || param_7 == 3) {
            FUN_002a1f60(param_2,2,0xffffffff,0,3,param_3,temp_v3 + param_5 + param_6,param_1,param_2,
                         param_3,temp_v6);
          }
        }
        else {
          temp_v2 = FUN_0035aa90(param_6 + temp_v3 + param_5);
          FUN_001654f8(temp_v2,0);
          FUN_0023723c(param_2,2,0xffffffff,0,3,temp_v2);
        }
      }
      else {
        FUN_002a1f60(param_2,2,0xffffffff,0,3,param_3,temp_v3 + param_5 + param_6,param_1,param_2,
                     param_3,temp_v6);
      }
      FUN_0025cc78(param_2,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + temp_v4,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v0 + 10) + temp_v5,0x15);
      FUN_001835b4(2,0x2e,0xce,*(short *)(temp_v1 + 8) + temp_v4,*(short *)(temp_v1 + 10) + temp_v5,0xc);
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 11) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
