/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00428878` (_code @ 0x428878, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00428220(void);
int FUN_004282f0(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int FUN_0016ccfc(void);
/* Supplied declaration required: FUN_00428220. */
/* Supplied declaration required: FUN_004282f0. */
extern int tokenResolveAddress(unsigned int, int *, unsigned int);


void FUN_00428878(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  temp_v0 = FUN_0016ccfc();
  temp_v1 = tokenResolveAddress(temp_v0,&temp_v2,*param_1);
  if ((-1 < temp_v1) && (temp_v1 = temp_v2, FUN_00428220(), -1 < temp_v1)) {
    FUN_004282f0(temp_v2);
  }
  return;
}

} /* extern "C" */
