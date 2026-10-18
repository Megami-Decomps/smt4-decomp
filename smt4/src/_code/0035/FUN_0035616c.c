/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035616c` (_code @ 0x35616c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned long long FUN_00239ab8(void);
/* Supplied declaration required: FUN_00356bbc. */


void FUN_0035616c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned long long temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  temp_v0 = FUN_00239ab8();
  temp_v1 = (unsigned int)temp_v0;
  FUN_00356bbc(&temp_v1,(int)((unsigned long long)temp_v0 >> 0x20),param_3,param_4);
  return;
}
