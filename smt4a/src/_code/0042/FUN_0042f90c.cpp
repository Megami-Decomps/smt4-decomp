/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042f90c` (_code @ 0x42f90c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042d3d8(int, int);
int FUN_0043080c(int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

extern unsigned char g_asdCecModuleFlags; /* 0x5b448b */

/* Supplied declaration required: FUN_0042d3d8. */
/* Supplied declaration required: FUN_0043080c. */


void FUN_0042f90c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_2;
  FUN_0043080c(param_2,param_3,param_4,param_5,param_6);
  if ((temp_v0 < 0) && (temp_v0 == -0x375ef410)) {
    FUN_0042d3d8(1,0);
    (*(unsigned char *)((unsigned char *)&g_asdCecModuleFlags + 0x1)) = 1;
    FUN_0043080c(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

} /* extern "C" */
