/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b420` (_code @ 0x38b420, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int FUN_0015e8b4(unsigned int *);
/* Supplied declaration required: FUN_002b4828. */


unsigned char FUN_0038b420(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int uStack_c;
  unsigned int temp_v1;
  
  uStack_c = param_2;
  temp_v1 = param_3;
  temp_v0 = FUN_0015e8b4((unsigned int *)&uStack_c);
  if (temp_v0 != 0) {
    FUN_002b4828(temp_v1);
  }
                    /* WARNING: Treating indirect jump as return */
  return temp_v0 != 0;
}
