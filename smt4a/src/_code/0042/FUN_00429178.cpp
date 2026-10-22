/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429178` (_code @ 0x429178, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN18WindowStatusResultC1Ej(unsigned int *, int);
int FUN_00427ac4(int, int);
int recordValidatePair(unsigned int, int, unsigned int);
int FUN_00429580(int *, unsigned int, int, unsigned int, int, int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
/* Supplied declaration required: FUN_00427ac4. */
extern int FUN_004283cc(unsigned int);
/* Supplied declaration required: recordValidatePair. */
/* Supplied declaration required: FUN_00429580. */


void FUN_00429178(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_1c;
  
  temp_v0 = param_3;
  FUN_00427ac4(param_3,1);
  if ((-1 < temp_v0) && (temp_v0 = FUN_004283cc(param_2), -1 < temp_v0)) {
    FUN_00429580(&temp_v1,param_2,param_3,param_4,1,0);
    recordValidatePair(param_2,temp_v1,uStack_1c);
    *param_1 = temp_v1;
    param_1[1] = uStack_1c;
    return;
  }
  _ZN18WindowStatusResultC1Ej(param_1,temp_v0);
  return;
}

} /* extern "C" */
