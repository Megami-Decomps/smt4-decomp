/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f46a` (_code @ 0x30f46a, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_0030f4bc. */
extern int FUN_0030f78c(void);


void FUN_0030f46a(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = param_3;
  temp_v3 = param_4;
  temp_v0 = FUN_002e6e26();
  if ((temp_v0 != 0) && (temp_v1 = FUN_0030f78c(), temp_v1 == 0)) {
    temp_v3 = 0;
    temp_v2 = 0;
    FUN_0030f4bc(temp_v0,&temp_v2);
  }
  return;
}
