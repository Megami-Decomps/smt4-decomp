/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e207c` (_code @ 0x2e207c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034a3b4(void);
int linkHolderApplyFirst(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0034a3b4. */
extern int linkHolderCallFirst(unsigned int);
/* Supplied declaration required: linkHolderApplyFirst. */


void FUN_002e207c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  param_1[6] = 0x3c449ba6;
  param_1[4] = 0x43af0000;
  temp_v0 = linkHolderCallFirst(param_1[7]);
  if (temp_v0 == 0x23) {
    temp_v1 = 0x3f800000;
    temp_v2 = 0x40accccd;
    temp_v3 = 0x3fc00000;
  }
  else {
    temp_v1 = 0x3f99999a;
    temp_v2 = 0x40a9999a;
    temp_v3 = 0x3f000000;
  }
  *param_1 = temp_v1;
  param_1[1] = temp_v2;
  param_1[2] = temp_v3;
  param_1[10] = 0;
  if (param_1[9] != 0) {
    param_1[9] = 0;
    linkHolderApplyFirst(param_1[7],0);
  }
  FUN_0034a3b4();
  return;
}

} /* extern "C" */
