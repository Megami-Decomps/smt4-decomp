/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a00c` (_code @ 0x30a00c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030d3f4(int, unsigned char *);

extern int FUN_00301df0(void);
/* Supplied declaration required: FUN_0030d3f4. */


int FUN_0030a00c(unsigned int param_1,unsigned char *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00301df0();
  if ((unsigned char *)(temp_v0 + 0x10) != (unsigned char *)0x0) {
    *(unsigned char *)(temp_v0 + 0x10) = *param_2;
    FUN_0030d3f4(temp_v0 + 0x18,param_2 + 8);
  }
  return temp_v0;
}

} /* extern "C" */
