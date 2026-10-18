/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c59b8` (_code @ 0x2c59b8, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_004e3f4c; /* 0x4e3f4c */
extern int DAT_004e3f54; /* 0x4e3f54 */
extern int DAT_004e3f58; /* 0x4e3f58 */
extern unsigned int DAT_004e3f5c; /* 0x4e3f5c */
extern unsigned int DAT_004e3f60; /* 0x4e3f60 */

extern unsigned int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5ff4. */


void FUN_002c59b8(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(DAT_004e3f4c + param_1 * 0xc) != 0) {
    DAT_004e3f58 = param_1;
    if (param_2 != 0) {
      DAT_004e3f5c = FUN_002c4b84(0x100,0x100,0,param_3,1);
      DAT_004e3f60 = param_3;
      FUN_002c5ff4(DAT_004e3f5c,param_2,param_3);
    }
    else {
      DAT_004e3f5c = 0;
      DAT_004e3f60 = 0;
    }
    if (-1 < DAT_004e3f54) {
                    /* WARNING: Could not recover jumptable at 0x002c5a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(romwright_code **)(DAT_004e3f4c + DAT_004e3f54 * 0xc + 4))();
      return;
    }
  }
  return;
}
