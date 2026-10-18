/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b148` (_code @ 0x13b148, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00148268. */
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c14f4. */


int FUN_0013b148(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0 [8];
  
  FUN_002bb6b8();
  FUN_00148268(param_1,param_2,param_3,param_4,temp_v0);
  if (param_1 < 0) {
    FUN_002c14f4();
  }
  FUN_002bb648();
  return (int)temp_v0[0];
}
