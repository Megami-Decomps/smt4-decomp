/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ef4c` (_code @ 0x10ef4c, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7614(int, unsigned int);
/* Supplied declaration required: FUN_002f9fd4. */


void FUN_0010ef4c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = param_4;
  for (temp_v2 = 0; temp_v2 < param_3; temp_v2 = temp_v2 + 1) {
    temp_v0 = FUN_002e760a(0x20);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002e7614(temp_v0,param_2);
    }
    temp_v3 = temp_v1;
    FUN_002f9fd4(*param_1,&temp_v3);
  }
  return;
}
