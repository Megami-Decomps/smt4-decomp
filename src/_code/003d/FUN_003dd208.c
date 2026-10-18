/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dd208` (_code @ 0x3dd208, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00227154. */
/* Supplied declaration required: FUN_002406ac. */
/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_0034c9f4. */
/* Supplied declaration required: FUN_0034cb1c. */
extern int FUN_0034cb7c(unsigned int);
/* Supplied declaration required: FUN_0034d67c. */
/* Supplied declaration required: FUN_0034d750. */


void FUN_003dd208(int param_1)

{
/* irregular: 2 goto(s); 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = FUN_0034cb7c(*(unsigned int *)(param_1 + 0x304c));
  if (temp_v1 != 0) {
    temp_v1 = FUN_00293c98();
    FUN_00282b94(temp_v1,(int)*(short *)(*(int *)(param_1 + 0x3048) + 0x62));
    temp_v2 = 0;
    do {
      temp_v4 = param_1 + temp_v2 * 0x30;
      if (*(int *)(temp_v1 + 0xd8) == *(int *)(temp_v4 + 0x1398)) {
        temp_v1 = param_1 + temp_v2 * 0x30 + 0x1398;
LAB_003dd294:
        temp_v3 = FUN_00293c98();
        if (temp_v1 != 0) {
          FUN_0034d67c(*(unsigned int *)(param_1 + 0x304c),temp_v1 + 8);
          FUN_0034c9f4(*(unsigned int *)(param_1 + 0x304c),*(int *)(param_1 + 0x3048) + 0xc);
          FUN_0034d750(*(unsigned int *)(param_1 + 0x304c));
          FUN_002406ac(temp_v3,*(unsigned int *)(param_1 + 0x3048),0);
        }
        goto LAB_003dd2e8;
      }
      if (*(int *)(temp_v1 + 0xd8) == *(int *)(temp_v4 + 0x13c8)) {
        temp_v1 = param_1 + temp_v2 * 0x30 + 0x13c8;
        goto LAB_003dd294;
      }
      temp_v2 = temp_v2 + 2;
    } while (temp_v2 < 0x32);
    FUN_00293c98();
LAB_003dd2e8:
    FUN_0034cb1c(*(unsigned int *)(param_1 + 0x304c));
    *(unsigned char *)(param_1 + 0x3040) = 8;
    FUN_00227154(param_1);
    temp_v0 = *(short *)(*(int *)(param_1 + 0x3054) + 4);
    if (temp_v0 == 0xf || temp_v0 == 0x10) {
      FUN_00250800(0,0,0x1000106,0,0,0,0);
      return;
    }
    FUN_00250800(0,0,0x1000108,0,0,0,0);
  }
  return;
}
