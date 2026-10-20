/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018c740` (_code @ 0x18c740, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cd24c(int);
int FUN_002e6354(unsigned int *, int);
int FUN_002e6dd4(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001cd24c. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6dd4. */


void FUN_0018c740(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned short *)(param_1 + 2) = 0;
  *(unsigned short *)((int)param_1 + 10) = 0;
  FUN_002e6354(param_1 + 3,0xed8);
  *(unsigned char *)(param_1 + 0x3b9) = 1;
  *(unsigned char *)((int)param_1 + 0xee5) = 0;
  *(unsigned char *)((int)param_1 + 0xee6) = 0;
  FUN_002e6dd4((int)param_1 + 0xee7,0x89);
  param_1[0x3dc] = 0xffffffff;
  *(unsigned short *)(param_1 + 0x3dd) = 0;
  FUN_001cd24c((int)param_1 + 0xf76);
  return;
}

} /* extern "C" */
