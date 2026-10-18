/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300df0` (_code @ 0x300df0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern unsigned int FUN_00300c20(void);
/* Supplied declaration required: FUN_0043d8a0. */
/* Supplied declaration required: FUN_00440ee8. */


unsigned int
FUN_00300df0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)&temp_v0;
  temp_v0 = param_4;
  if (param_3 < 0x2001) {
    FUN_0043d8a0();
  }
  else {
    FUN_00440ee8(puVar1,param_1,param_2,param_3,param_4,param_5,8);
  }
  if ((int)puVar1 < 0) {
    temp_v0 = FUN_00300c20();
  }
  return temp_v0;
}
