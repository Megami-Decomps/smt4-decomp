/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020caec` (_code @ 0x20caec, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_001835b4. */
extern int FUN_0019e4d4(void);
extern int FUN_002a4b28(unsigned int);
extern int FUN_004bd340(int, unsigned int);


void FUN_0020caec(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019e4d4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_004bd340(temp_v0,10), temp_v0 == 0)) {
    FUN_001835b4(2,0x1a,0x5b,param_2,param_3,param_4);
    return;
  }
  temp_v0 = FUN_002a4b28(param_1);
  if (temp_v0 != 0) {
    FUN_001835b4(2,0x1a,0x5a,param_2,param_3,param_4);
  }
  return;
}
