/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037fce8` (_code @ 0x37fce8, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_002ac550(); /* 0x2ac550 */

/* Supplied declaration required: FUN_0015c5c8. */
/* Supplied declaration required: FUN_002ac5d8. */
extern int FUN_002bb270(void);
/* Supplied declaration required: FUN_002bb2f0. */
extern int FUN_0037e26c(void);
/* Supplied declaration required: FUN_00380234. */


int FUN_0037fce8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  FUN_002bb2f0();
  temp_v0 = FUN_0037e26c();
  if (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 199) = 1;
    temp_v1 = FUN_002bb270();
    FUN_0015c5c8(temp_v1,param_1,param_2,FUN_002ac550,temp_v0);
    if (temp_v1 == 0) {
      temp_v2 = FUN_002bb2f0();
      FUN_002ac5d8(temp_v2,temp_v0);
      return 0;
    }
    *(int *)(temp_v0 + 0x134) = temp_v1;
    FUN_00380234(temp_v0,param_3,param_4);
  }
  return temp_v0;
}
