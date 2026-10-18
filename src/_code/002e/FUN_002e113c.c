/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e113c` (_code @ 0x2e113c, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b80; /* 0x464b80 */
extern unsigned int DAT_00464b84; /* 0x464b84 */
extern unsigned int DAT_00464b88; /* 0x464b88 */
extern unsigned int DAT_00464ba4; /* 0x464ba4 */

/* Supplied declaration required: FUN_002abb24. */
/* Supplied declaration required: FUN_002abbe8. */
/* Supplied declaration required: FUN_002c00b4. */


void FUN_002e113c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 == param_2) {
    return;
  }
  *param_1 = param_2;
  if (param_2 >= 2) {
    if (param_2 == 0xffffffff) {
      FUN_002abbe8((&DAT_00464ba4)[temp_v0] + 0x10,param_1[1]);
      goto LAB_002e11a0;
    }
LAB_002e11ac:
    if (temp_v0 != 0) {
      if (*param_1 != 1 && temp_v0 != 1) {
        return;
      }
      FUN_002abb24(DAT_00464b80,DAT_00464b88);
      return;
    }
  }
  else {
    FUN_002c00b4((&DAT_00464ba4)[param_2],param_1[1]);
LAB_002e11a0:
    if (*param_1 != 0) goto LAB_002e11ac;
  }
  FUN_002abb24(DAT_00464b7c,DAT_00464b84);
  if (*param_1 != 1 && temp_v0 != 1) {
    return;
  }
  FUN_002abb24(DAT_00464b80,DAT_00464b88);
  return;
}
