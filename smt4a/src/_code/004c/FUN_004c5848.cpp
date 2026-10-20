/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c5848` (_code @ 0x4c5848, 0x98 bytes) from smt4a.cxi.
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


unsigned int FUN_004c5848(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short temp_v3 [10];
  
  temp_v0 = btlGetMainState();
  FUN_003f0e20(temp_v0,param_1);
  temp_v3[0] = 0;
  temp_v3[1] = 0;
  temp_v3[2] = 0;
  temp_v3[3] = 0;
  temp_v3[4] = 0;
  temp_v3[5] = 0;
  temp_v3[6] = 0;
  temp_v3[7] = 0;
  temp_v3[8] = 0;
  temp_v3[9] = 0;
  FUN_004c39b0();
  temp_v2 = 0;
  while (((temp_v1 = (unsigned int)temp_v3[temp_v2], temp_v1 == 0 || (FUN_0034a290(), temp_v1 == 0)) ||
         ((*(unsigned short *)(temp_v1 + 0x3e) & 2) == 0))) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 9) {
      return 0;
    }
  }
  return (*(unsigned short *)(temp_v1 + 0x3e) & 2) >> 1;
}

} /* extern "C" */
