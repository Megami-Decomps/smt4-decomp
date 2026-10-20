/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100df4` (_code @ 0x100df4, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e31ba(unsigned int, int *, unsigned int, unsigned char *);
int FUN_002e31e0(int, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_00100d79; /* 0x100d79 */

/* Supplied declaration required: FUN_002e31ba. */
/* Supplied declaration required: FUN_002e31e0. */


unsigned int FUN_00100df4(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1;
  if (param_2 != 0) {
    temp_v1 = (param_1 + param_2) - 1;
  }
  temp_v0 = param_1;
  FUN_002e31ba(param_3,&temp_v0,param_4,&LAB_00100d79);
  if (param_2 != 0) {
    FUN_002e31e0(0,&temp_v0);
  }
  return param_3;
}

} /* extern "C" */
