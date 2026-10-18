/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002580d4` (_code @ 0x2580d4, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_0029ea68(unsigned int);
extern int FUN_0029ebac(int, unsigned int);
extern int FUN_002b066c(void);
/* Supplied declaration required: FUN_002bf288. */


void FUN_002580d4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002b066c();
  if (((temp_v0 != 0) && (temp_v1 = FUN_0029ebac(temp_v0,10), temp_v1 == 0)) &&
     (temp_v0 = FUN_0029ebac(temp_v0,2), temp_v0 == 0)) {
    FUN_002bf288(2,0x24,0x5b,param_2,param_3,param_4);
    return;
  }
  temp_v0 = FUN_0029ea68(param_1);
  if (temp_v0 != 0) {
    FUN_002bf288(2,0x24,0x5a,param_2,param_3,param_4);
  }
  return;
}
