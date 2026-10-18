/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00258308` (_code @ 0x258308, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_0029ed08(unsigned int);
extern int FUN_0029ee4c(int, unsigned int);
extern int FUN_002b0824(void);
/* Supplied declaration required: FUN_002bf460. */


void FUN_00258308(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002b0824();
  if (((temp_v0 != 0) && (temp_v1 = FUN_0029ee4c(temp_v0,10), temp_v1 == 0)) &&
     (temp_v0 = FUN_0029ee4c(temp_v0,2), temp_v0 == 0)) {
    FUN_002bf460(2,0x24,0x5b,param_2,param_3,param_4);
    return;
  }
  temp_v0 = FUN_0029ed08(param_1);
  if (temp_v0 != 0) {
    FUN_002bf460(2,0x24,0x5a,param_2,param_3,param_4);
  }
  return;
}
