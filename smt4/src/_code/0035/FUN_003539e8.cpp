/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003539e8` (_code @ 0x3539e8, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00239fc4(int, int);
int recordValidatePair(unsigned int, int, unsigned int);
int resultPairInitialize(unsigned int *, int);
int FUN_00354168(int *, unsigned int, int, unsigned int, unsigned int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_00239fc4. */
/* Supplied declaration required: recordValidatePair. */
extern int FUN_0023a1f8(unsigned int);
/* Supplied declaration required: resultPairInitialize. */
/* Supplied declaration required: FUN_00354168. */


void FUN_003539e8(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_1c;
  
  temp_v0 = param_3;
  FUN_00239fc4(param_3,1);
  if ((-1 < temp_v0) && (temp_v0 = FUN_0023a1f8(param_2), -1 < temp_v0)) {
    FUN_00354168(&temp_v1,param_2,param_3,param_4,param_5);
    recordValidatePair(param_2,temp_v1,uStack_1c);
    *param_1 = temp_v1;
    param_1[1] = uStack_1c;
    return;
  }
  resultPairInitialize(param_1,temp_v0);
  return;
}

} /* extern "C" */
