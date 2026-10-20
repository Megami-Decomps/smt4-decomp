/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514430` (_code @ 0x514430, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3140(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002e3140. */
extern int FUN_0042d2ec(void);
extern int FUN_0042d30c(unsigned int *, unsigned int);


void FUN_00514430(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  temp_v0 = FUN_0042d2ec();
  if (((temp_v0 != 0) && (param_1[2] == 0)) &&
     (temp_v0 = FUN_0042d30c(param_1,(param_2 + 0xfffU) & 0xfffff000), temp_v0 == 0)) {
    FUN_002e3140(0xd8601837);
    return;
  }
  return;
}

} /* extern "C" */
