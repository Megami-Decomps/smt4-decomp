/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105080` (_code @ 0x105080, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0044ea28; /* 0x44ea28 */
extern int DAT_0044ea2c; /* 0x44ea2c */

extern int FUN_002c32f0(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b84. */
/* Supplied declaration required: FUN_002c5ff4. */


unsigned int FUN_00105080(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned char temp_v3 [8];
  
  temp_v0 = FUN_002c32f0(param_1,temp_v3,0);
  if (temp_v0 != 0) {
    DAT_0044ea2c = FUN_002c4b84(0x100,0x100,0,0x104,1);
    FUN_002c5ff4(DAT_0044ea2c,temp_v0,0x104);
    DAT_0044ea28 = FUN_002c4b84(0x100,0x100,0,*(int *)(DAT_0044ea2c + 0x100) * 0x18,1);
    puVar5 = (unsigned int *)(temp_v0 + 0x104);
    temp_v1 = 0;
    if (0 < *(int *)(DAT_0044ea2c + 0x100)) {
      do {
        temp_v2 = temp_v1 + 1;
        puVar6 = (unsigned int *)(DAT_0044ea28 + temp_v1 * 0x18);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = *puVar5;
        puVar6[3] = puVar5[1];
        puVar6[4] = puVar5[2];
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 0x18;
        puVar6[5] = *puVar1;
        temp_v1 = temp_v2;
      } while (temp_v2 < *(int *)(DAT_0044ea2c + 0x100));
    }
    FUN_002c4360(temp_v0);
  }
  return 0;
}
