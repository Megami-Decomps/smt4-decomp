/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df5d0` (_code @ 0x3df5d0, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int resultPairInitialize(unsigned int, unsigned int);
int FUN_003520b8(unsigned int, unsigned int, unsigned int, int, int, int, int);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

/* Supplied declaration required: resultPairInitialize. */
/* Supplied declaration required: FUN_003520b8. */


void FUN_003df5d0(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  if (*param_2 == 0 && param_2[1] == 0) {
    resultPairInitialize(param_1,0xe0a13882);
    return;
  }
  FUN_003520b8(param_3,param_4,param_5,1,*param_2,param_2[1],param_6 + 1);
  resultPairInitialize(param_1,param_3);
  return;
}

} /* extern "C" */
