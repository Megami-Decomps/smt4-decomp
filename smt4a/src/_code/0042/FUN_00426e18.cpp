/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426e18` (_code @ 0x426e18, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int resultPairInitialize(...);
int FUN_00426acc(unsigned int, unsigned int, unsigned int, unsigned int);
int recordValidatePair(unsigned int, int, unsigned int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Supplied declaration required: resultPairInitialize. */
/* Supplied declaration required: FUN_00426acc. */
extern int FUN_004283cc(unsigned int);
/* Supplied declaration required: recordValidatePair. */


void FUN_00426e18(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_1c;
  
  temp_v0 = FUN_004283cc(param_2);
  if (temp_v0 < 0) {
    resultPairInitialize(param_1,temp_v0);
    return;
  }
  temp_v1 = param_2;
  FUN_00426acc(param_2,param_3,param_4,param_5);
  resultPairInitialize(&temp_v2,temp_v1);
  recordValidatePair(param_2,temp_v2,uStack_1c);
  *param_1 = temp_v2;
  param_1[1] = uStack_1c;
  return;
}

} /* extern "C" */
