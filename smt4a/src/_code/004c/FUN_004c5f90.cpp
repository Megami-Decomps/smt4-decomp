/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c5f90` (_code @ 0x4c5f90, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034a290(void);
int FUN_003f0e20(unsigned int, unsigned int);
int FUN_004c39b0(void);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int btlGetMainState(void);
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c39b0. */


void FUN_004c5f90(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4 [10];
  
  temp_v1 = btlGetMainState();
  FUN_003f0e20(temp_v1,param_1);
  temp_v4[0] = 0;
  temp_v4[1] = 0;
  temp_v4[2] = 0;
  temp_v4[3] = 0;
  temp_v4[4] = 0;
  temp_v4[5] = 0;
  temp_v4[6] = 0;
  temp_v4[7] = 0;
  temp_v4[8] = 0;
  temp_v4[9] = 0;
  FUN_004c39b0();
  temp_v3 = 0;
  do {
    temp_v2 = (unsigned int)temp_v4[temp_v3];
    if (temp_v2 != 0) {
      FUN_0034a290();
      temp_v0 = 0;
      if (temp_v2 != 0) {
        temp_v0 = *(short *)(temp_v2 + 0x3c);
      }
      if (temp_v2 != 0 && temp_v0 != 0) {
        return;
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 9) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
