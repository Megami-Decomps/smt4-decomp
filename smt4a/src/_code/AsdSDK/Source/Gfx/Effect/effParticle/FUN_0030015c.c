/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030015c` (_code @ 0x30015c, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0013dd78. */
/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00222180. */
/* Supplied declaration required: FUN_00243c24. */


void FUN_0030015c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r6;
  
  temp_v0 = param_1[0x13];
  if (temp_v0 != 0) {
    unaff_r6 = *(unsigned int *)(temp_v0 + 8);
  }
  if (temp_v0 == 0) {
    unaff_r6 = *param_1;
  }
  if (param_1[0xe] != 0) {
    temp_v0 = 0;
    if (temp_v0 < unaff_r6) {
      do {
        FUN_0013dd78(*(unsigned int *)(param_1[0xd] + temp_v0 * 4));
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < unaff_r6);
    }
    FUN_0019a5a0(param_1[0xe]);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  if (unaff_r6 << 2 != 0) {
    temp_v0 = 0x10000;
    FUN_00167ab4(0x10000,0x100,0,unaff_r6 << 2,0x10,1);
    param_1[0xe] = temp_v0;
    param_1[0xd] = temp_v0;
    FUN_00243c24();
    temp_v0 = 1;
    *(unsigned int *)param_1[0xd] = param_2;
    if (unaff_r6 >= 2) {
      do {
        temp_v1 = *(unsigned int *)param_1[0xd];
        FUN_00222180();
        *(unsigned int *)(param_1[0xd] + temp_v0 * 4) = temp_v1;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < unaff_r6);
    }
  }
  return;
}
