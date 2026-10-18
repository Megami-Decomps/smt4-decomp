/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238c3c` (_code @ 0x238c3c, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int FUN_00238c80(unsigned char *, int);
/* Supplied declaration required: FUN_00291050. */
/* Supplied declaration required: FUN_002ad8b4. */


unsigned int FUN_00238c3c(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [8];
  
  if (param_3 != 0) {
    temp_v0 = FUN_00238c80(temp_v1,param_2 + 0x20);
    FUN_002ad8b4(param_3,temp_v0);
  }
  if (param_2 != -0x20) {
    FUN_002ad8b4();
  }
  else {
    FUN_00291050();
  }
  return param_1;
}
