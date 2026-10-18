/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2fe8` (_code @ 0x2f2fe8, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00558ac4; /* 0x558ac4 */
extern unsigned char DAT_0055927c; /* 0x55927c */

/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002f84f0. */


unsigned int * FUN_002f2fe8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_3;
  temp_v1 = param_4;
  FUN_002eb588(&temp_v0);
  puVar1 = (unsigned int *)FUN_002f84f0(param_1 + 8);
  puVar1[7] = param_2;
  *puVar1 = (unsigned int)&DAT_00558ac4;
  puVar1[9] = temp_v1;
  puVar1[8] = temp_v0;
  puVar1 = (unsigned int *)FUN_002f84f0(puVar1 + 10);
  puVar1[7] = param_2;
  *puVar1 = (unsigned int)&DAT_0055927c;
  return puVar1 + -0xc;
}
