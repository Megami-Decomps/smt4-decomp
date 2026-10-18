/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00257dec` (_code @ 0x257dec, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_0022e354. */


unsigned int FUN_00257dec(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_4;
  FUN_0022e354(temp_v0,param_1,param_2);
  return temp_v0[0] & 0x3ff;
}
