/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6ecc` (_code @ 0x2b6ecc, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_002ae818. */
/* Supplied declaration required: FUN_002aec80. */


void FUN_002b6ecc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  FUN_002ae818();
  switch(*(unsigned char *)(param_1 + 0x23)) {
  case 0:
    temp_v0 = 0x411;
    break;
  case 1:
    temp_v0 = 0x412;
    break;
  case 2:
    temp_v0 = 0x413;
    break;
  case 3:
    temp_v0 = 0x414;
    break;
  case 4:
    temp_v0 = 0x415;
    break;
  case 5:
    temp_v0 = 0x416;
  }
  FUN_002aec80(2,0x13,temp_v0,param_2,param_3,param_4);
  return;
}
