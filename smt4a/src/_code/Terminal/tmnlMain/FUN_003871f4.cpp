/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003871f4` (_code @ 0x3871f4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026edbc(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0056fd30; /* 0x56fd30 */

extern int FUN_00261828(void);
/* Supplied declaration required: FUN_0026edbc. */


int FUN_003871f4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0056fd30 == 0) {
    temp_v0 = 0;
  }
  else {
    if (param_1 == 0x3e) {
      temp_v0 = FUN_00261828();
      return temp_v0;
    }
    temp_v0 = DAT_0056fd30;
    FUN_0026edbc(DAT_0056fd30,param_1);
    temp_v0 = *(int *)(DAT_0056fd30 + temp_v0 * 4 + 0x5a8) + 7;
  }
  return temp_v0;
}

} /* extern "C" */
