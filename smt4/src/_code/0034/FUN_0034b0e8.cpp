/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034b0e8` (_code @ 0x34b0e8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023adf4(unsigned int, int, unsigned int *);
int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int, unsigned int *);
int FUN_002b2368(unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_0023adf4. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_002b2368. */


void FUN_0034b0e8(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  *param_1 = param_2;
  FUN_0028c640(*(unsigned int *)(param_1[1] + 8),0,param_1 + 0x24);
  FUN_0028c618(*(unsigned int *)(param_1[1] + 8),0);
  FUN_0023adf4(*(unsigned int *)(param_1[1] + 8),0,param_1 + 0x2a);
  FUN_002b2368(param_1);
  return;
}

} /* extern "C" */
