/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e44e0` (_code @ 0x2e44e0, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_002498ec. */
extern int FUN_0024c52c(unsigned int);
/* Supplied declaration required: FUN_00257568. */
/* Supplied declaration required: FUN_002ae164. */
extern int FUN_002ae1d8(unsigned int);


void FUN_002e44e0(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  short temp_v4;
  short temp_v5;
  unsigned int temp_v6 [3];
  unsigned int temp_v7;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002498ec();
  temp_v1 = (unsigned int)*param_2;
  FUN_002498ec();
  temp_v6[0] = (unsigned int)*(unsigned short *)(temp_v0 + 0x26);
  temp_v6[1] = 0;
  temp_v6[2] = (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
  temp_v7 = 0;
  temp_v2 = FUN_002ae1d8(temp_v6[0]);
  if (temp_v2 != 0) {
    temp_v2 = 99;
    temp_v5 = 0;
  }
  else {
    temp_v2 = FUN_0024c52c(temp_v6[0]);
    temp_v0 = temp_v6[0];
    FUN_002ae164();
    temp_v5 = *(short *)(temp_v0 + 0x2c);
  }
  temp_v3 = FUN_002ae1d8(temp_v6[2]);
  if (temp_v3 != 0) {
    temp_v3 = 99;
    temp_v4 = 0;
  }
  else {
    temp_v3 = FUN_0024c52c(temp_v6[2]);
    temp_v0 = temp_v6[2];
    FUN_002ae164();
    temp_v4 = *(short *)(temp_v0 + 0x2c);
  }
  if (temp_v2 == temp_v3 && temp_v4 == temp_v5) {
    FUN_00257568(temp_v6,temp_v6 + 2);
  }
  return;
}
