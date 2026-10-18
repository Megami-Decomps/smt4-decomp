/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1998` (_code @ 0x3a1998, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00167ab4. */


void FUN_003a1998(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x4c,0x10,1);
  *puVar1 = 8;
  puVar1[2] = 0;
  puVar1[1] = 8;
  temp_v0 = *param_1;
  puVar1[4] = 0;
  puVar1[3] = temp_v0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0xffffc040;
  puVar1[10] = 0xc0000000;
  puVar1[0xb] = param_1[2];
  temp_v0 = param_1[2];
  puVar1[0xd] = 0;
  puVar1[0xc] = temp_v0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = (unsigned int)param_1;
  return;
}
