/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001448b4` (_code @ 0x1448b4, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00127fe8. */
/* Supplied declaration required: FUN_00128034. */
/* Supplied declaration required: FUN_00138288. */
extern unsigned int FUN_00138294(void);


unsigned int FUN_001448b4(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00127fe8();
  FUN_00128034();
  FUN_00138288();
  (*(romwright_code *)param_1[1])(param_1[2],param_1[3]);
  (*(romwright_code *)*param_1)(param_1[3]);
  temp_v0 = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    temp_v0 = FUN_00138294();
  }
  software_interrupt(9);
  return temp_v0;
}
