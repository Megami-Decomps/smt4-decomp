/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bba0` (_code @ 0x11bba0, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_001271a0. */
extern int FUN_002bb99c(unsigned int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002bbb2c. */


unsigned int FUN_0011bba0(unsigned int param_1)

{
/* irregular: irregular input(s): in_stack_00000000, in_stack_00000004; 2 native warning(s); review required */
  int **ppiVar1;
  int temp_v0;
  int *unaff_r5;
  unsigned int in_stack_00000000;
  unsigned int in_stack_00000004;
  unsigned int *puVar3;
  int *temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = (int *)0x0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  puVar3 = (unsigned int *)&temp_v2;
  ppiVar1 = &temp_v1;
  FUN_001271a0();
  if (-1 < (int)ppiVar1) {
    ppiVar1 = (int **)0x0;
    unaff_r5 = temp_v1;
  }
  if ((int)ppiVar1 < 0) {
    FUN_002bbb2c();
  }
  temp_v0 = FUN_002bb99c(param_1,unaff_r5,0,0,in_stack_00000000,in_stack_00000004,puVar3);
  if ((temp_v0 < 0) && ((**(romwright_code **)(*unaff_r5 + 0x30))(unaff_r5), temp_v0 < 0)) {
    FUN_002bbb2c(temp_v0,0x11bc30);
  }
  return 0;
}
