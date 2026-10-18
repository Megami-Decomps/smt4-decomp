/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9d28` (_code @ 0x2e9d28, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0055b2a4; /* 0x55b2a4 */

/* Supplied declaration required: FUN_002eb588. */


unsigned int *
FUN_002e9d28(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_0055b2a4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = param_3;
  param_1[7] = param_2;
  temp_v0 = param_3;
  temp_v1 = param_4;
  FUN_002eb588(&temp_v0);
  param_1[4] = temp_v0;
  param_1[5] = temp_v1;
  param_1[8] = 1000;
  param_1[6] = 0;
  *(unsigned short *)(param_1 + 1) = 1;
  param_1[0xb] = 8;
  param_1[10] = 0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  return param_1;
}
