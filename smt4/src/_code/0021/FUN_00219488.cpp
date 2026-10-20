/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00219488` (_code @ 0x219488, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f62ec(unsigned short *, unsigned short *);
int FUN_002b63c0(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001f62ec. */
/* Supplied declaration required: FUN_002b63c0. */


void FUN_00219488(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002b63c0();
  temp_v1 = (unsigned int)*param_2;
  FUN_002b63c0();
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  if ((temp_v0 != 0 && temp_v1 != 0) && (*(int *)(temp_v0 + 0x150) == *(int *)(temp_v1 + 0x150))) {
    FUN_001f62ec(param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
