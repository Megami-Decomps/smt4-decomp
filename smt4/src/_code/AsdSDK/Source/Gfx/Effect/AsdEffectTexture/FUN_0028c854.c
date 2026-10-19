/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c854` (_code @ 0x28c854, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002b77b0. */
/* Supplied declaration required: FUN_002bd540. */
/* Supplied declaration required: FUN_002bd75c. */
/* Supplied declaration required: FUN_002bf5c0. */


int FUN_0028c854(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  FUN_002bd75c();
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(temp_v0 + 0x40) = 1;
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(param_1 + 8);
  *(unsigned int *)(temp_v0 + 8) = 0x30000;
  *(unsigned int *)(temp_v0 + 0x14) = *(unsigned int *)(param_1 + 0xc);
  *(unsigned int *)(temp_v0 + 0x18) = *(unsigned int *)(param_1 + 0x10);
  *(unsigned int *)(temp_v0 + 0x1c) = *(unsigned int *)(param_1 + 0x18);
  *(unsigned int *)(temp_v0 + 0x20) = *(unsigned int *)(param_1 + 0x14);
  *(unsigned int *)(temp_v0 + 0x28) = *(unsigned int *)(param_1 + 0x1c);
  temp_v1 = 0x10000;
  FUN_002bf5c0(0x10000,0x100,0,*(unsigned int *)(temp_v0 + 0x28),0x80,1);
  *(unsigned int *)(temp_v0 + 0x24) = temp_v1;
  FUN_002b77b0(param_1 + 0x80,temp_v1,*(unsigned int *)(temp_v0 + 0x28));
  FUN_002bd540(temp_v0);
  return temp_v0;
}
