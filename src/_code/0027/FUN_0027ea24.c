/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ea24` (_code @ 0x27ea24, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0043e128; /* 0x43e128 */

/* Supplied declaration required: FUN_002594f0. */
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_002bdac0. */
extern int FUN_002bef7c(int);


void FUN_0027ea24(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float in_s0;
  
  temp_v0 = DAT_0043e128;
  *(unsigned char *)(DAT_0043e128 + 0x21) = 0;
  if (param_1 != 0) {
    *(unsigned char *)(temp_v0 + 0x21) = 1;
    FUN_00296d8c(*(unsigned int *)(temp_v0 + 0x1b8),3,0xffffffff,0,3,param_1,param_2);
    FUN_002594f0(*(unsigned int *)(temp_v0 + 0x1b8));
    if ((int)in_s0 >= 0x441d8001) {
      *(unsigned char *)(temp_v0 + 0x22) = 1;
      *(int *)(temp_v0 + 0x14) = (int)in_s0;
    }
    else {
      *(unsigned char *)(temp_v0 + 0x22) = 0;
    }
    FUN_002bdac0(temp_v0 + 0xd0,2,0);
    temp_v1 = FUN_002bef7c(temp_v0 + 0xd0);
    *(int *)(temp_v0 + 0x18) = temp_v1;
    *(int *)(temp_v0 + 0x1c) = temp_v1 + *(int *)(temp_v0 + 0x14) + 0x2a;
    if (*(int *)(temp_v0 + 8) == 3) {
      *(unsigned int *)(temp_v0 + 8) = 2;
    }
    *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  }
  return;
}
