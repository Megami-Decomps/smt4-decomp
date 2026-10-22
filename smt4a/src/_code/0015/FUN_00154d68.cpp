/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154d68` (_code @ 0x154d68, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelCommitCommandRange(unsigned int *, unsigned int *);
int asdGxGetCommandCursor(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: asdModelCommitCommandRange. */
/* Supplied declaration required: asdGxGetCommandCursor. */


void FUN_00154d68(unsigned int *param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = param_1;
  asdGxGetCommandCursor();
  *puVar1 = 1;
  puVar1[1] = 0xf0111;
  puVar1[2] = 1;
  puVar1[3] = 0xf0110;
  puVar1[4] = param_1[5] | (param_1[1] << 0x10);
  puVar1[5] = 0xf0117;
  temp_v0 = param_1[3];
  temp_v1 = (param_4 * 0x1000 - 0x1000U) | param_3 | 0x1000000;
  puVar1[7] = 0xf011d;
  puVar1[9] = 0xf011e;
  puVar1[8] = temp_v1;
  puVar1[6] = temp_v0 >> 3;
  puVar1[10] = *(unsigned int *)(param_2 + 4);
  puVar1[0xb] = 0xf0116;
  puVar1[0xc] = *(unsigned int *)(param_2 + 0xc) >> 3;
  puVar1[0xd] = 0xf011c;
  puVar1[0xe] = temp_v1;
  puVar1[0xf] = 0xf006e;
  puVar1[0x10] = 1;
  puVar1[0x11] = 0xf0111;
  puVar1[0x12] = 1;
  puVar1[0x13] = 0xf0110;
  asdModelCommitCommandRange(puVar1,puVar1 + 0x14);
  return;
}

} /* extern "C" */
