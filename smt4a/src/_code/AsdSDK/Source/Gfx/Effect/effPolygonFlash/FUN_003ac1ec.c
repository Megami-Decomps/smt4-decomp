/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ac1ec` (_code @ 0x3ac1ec, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_005c1f3a; /* 0x5c1f3a */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_002b3b58. */


int * FUN_003ac1ec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  piVar1 = (int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,temp_v0 * 0x1c + 0x10,0x10,1);
  *piVar1 = (int)(piVar1 + 4);
  piVar1[2] = (int)piVar1;
  temp_v0 = temp_v0 & 0xffff;
  FUN_002b3b58(temp_v0,0xc,0xd,&DAT_005c1f3a,0x48);
  piVar1[1] = temp_v0;
  return piVar1;
}
