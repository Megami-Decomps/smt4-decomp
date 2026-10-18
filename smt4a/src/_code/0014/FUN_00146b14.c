/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146b14` (_code @ 0x146b14, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_005c0ac8; /* 0x5c0ac8 */
extern unsigned int DAT_005c0acc; /* 0x5c0acc */

/* Supplied declaration required: FUN_0016236c. */


void FUN_00146b14(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1 [2];
  
  if ((param_1 & 0xfff) == 0) {
    if (DAT_005c0acc < param_1) {
      if ((DAT_005c0acc == 0) || (((DAT_005c0acc | param_1) & 0xfffff) == 0)) {
        if (DAT_005c0acc != 0) {
          temp_v0 = DAT_005c0ac8 + DAT_005c0acc;
        }
        else {
          temp_v0 = 0;
        }
        piVar1 = temp_v1;
        FUN_0016236c(piVar1,temp_v0,0,param_1 - DAT_005c0acc,0x10003,3);
        if (-1 < (int)piVar1) {
          if (DAT_005c0acc != 0) {
            DAT_005c0acc = param_1;
            return;
          }
          DAT_005c0ac8 = temp_v1[0];
          DAT_005c0acc = param_1;
          return;
        }
      }
    }
    else {
      piVar1 = temp_v1;
      FUN_0016236c(piVar1,DAT_005c0ac8 + param_1,0,DAT_005c0acc - param_1,1,0);
      if (-1 < (int)piVar1) {
        if (param_1 == 0) {
          DAT_005c0ac8 = 0;
        }
        DAT_005c0acc = param_1;
        return;
      }
    }
  }
  return;
}
