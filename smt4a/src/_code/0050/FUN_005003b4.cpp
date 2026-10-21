/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005003b4` (_code @ 0x5003b4, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int resultPairInitialize(...);
int FUN_0042679c(int, int, int, int, unsigned int, unsigned int);
int FUN_00427bf0(void);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: resultPairInitialize. */
/* Supplied declaration required: FUN_0042679c. */
/* Supplied declaration required: FUN_00427bf0. */


void FUN_005003b4(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_2;
  if (temp_v0 == 0 && param_2[1] == 0) {
    resultPairInitialize(param_1,0xe0a13882);
    return;
  }
  FUN_00427bf0();
  if (temp_v0 < 0) {
    resultPairInitialize(param_1,temp_v0);
    return;
  }
  temp_v0 = 1;
  FUN_0042679c(1,0,*param_2,param_2[1],param_3,param_4);
  if (temp_v0 == -0x277f7fc5) {
    resultPairInitialize(param_1,0xd8813889);
    return;
  }
  if (temp_v0 == -0x26ff7fc2) {
    resultPairInitialize(param_1,0xd8e1389b);
    return;
  }
  if (temp_v0 < 0) {
    resultPairInitialize(param_1,temp_v0);
    return;
  }
  resultPairInitialize(param_1,0);
  return;
}

} /* extern "C" */
