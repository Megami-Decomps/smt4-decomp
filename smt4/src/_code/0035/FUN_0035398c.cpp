/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035398c` (_code @ 0x35398c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int recordValidatePair(unsigned int, int, unsigned int);
int FUN_002baa40(unsigned int *, int);
int FUN_00353fd8(int *, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: recordValidatePair. */
extern int FUN_0023a1f8(unsigned int);
/* Supplied declaration required: FUN_002baa40. */
/* Supplied declaration required: FUN_00353fd8. */


void FUN_0035398c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  
  temp_v0 = FUN_0023a1f8(param_2);
  if (temp_v0 < 0) {
    FUN_002baa40(param_1,temp_v0);
    return;
  }
  FUN_00353fd8(&temp_v1,param_2);
  recordValidatePair(param_2,temp_v1,uStack_14);
  *param_1 = temp_v1;
  param_1[1] = uStack_14;
  return;
}

} /* extern "C" */
