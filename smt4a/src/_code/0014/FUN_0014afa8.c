/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014afa8` (_code @ 0x14afa8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_00169310. */
extern int FUN_001861c4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019a840. */
/* Supplied declaration required: FUN_003f881c. */


int FUN_0014afa8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  
  FUN_003f881c(0x1f,1);
  FUN_0014384c(0x1a);
  temp_v0 = FUN_001861c4(0x1a,0,param_3,param_4,unaff_r4);
  if (temp_v0 != 0) {
    FUN_00169310();
    if (*(int *)(temp_v0 + 8) != 0) {
      *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = 0x10000;
      if (*(int *)(temp_v0 + 8) != 0) {
        FUN_0019a840();
        *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 4;
      }
    }
  }
  return temp_v0;
}
