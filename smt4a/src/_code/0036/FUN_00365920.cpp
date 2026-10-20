/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00365920` (_code @ 0x365920, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152f44(void);
int FUN_00246450(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_00152f44. */
/* Supplied declaration required: FUN_00246450. */


void FUN_00365920(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  FUN_00152f44();
  *(unsigned char *)(temp_v0 + 0x1d) = 1;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  switch(param_1) {
  case 0:
    FUN_00246450(0,0);
    return;
  case 1:
    FUN_00246450(1,0,param_3);
    return;
  case 2:
  case 3:
  case 5:
    FUN_00246450(3,param_2,param_3);
    return;
  case 4:
    FUN_00246450(2,param_2,param_3);
    return;
  default:
    return;
  }
}

} /* extern "C" */
