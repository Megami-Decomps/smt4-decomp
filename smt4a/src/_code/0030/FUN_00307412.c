/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307412` (_code @ 0x307412, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned long long FUN_0012444e(unsigned int);
/* Supplied declaration required: FUN_002eeae2. */


void FUN_00307412(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned long long temp_v0;
  
  (*(unsigned int *)((unsigned char *)&temp_v0 + 0)) = param_3;
  (*(unsigned int *)((unsigned char *)&temp_v0 + 4)) = param_4;
  temp_v0 = FUN_0012444e(param_2);
  FUN_002eeae2(param_1,&temp_v0);
  return;
}
