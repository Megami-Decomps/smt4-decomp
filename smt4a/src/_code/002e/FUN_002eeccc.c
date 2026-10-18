/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eeccc` (_code @ 0x2eeccc, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_002eed38; /* 0x2eed38 */

/* Supplied declaration required: FUN_0051440c. */


int FUN_002eeccc(int param_1,unsigned char *param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  if (((param_2 != (unsigned char *)0x0 && param_3 != 0) && (param_1 == 2)) && (param_4 >= 0x10)) {
    FUN_0051440c(param_3,param_4,&LAB_002eed38,*param_2,param_2[1],param_2[2],param_2[3]);
    return param_3;
  }
  return 0;
}
