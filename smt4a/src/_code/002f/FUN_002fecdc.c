/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fecdc` (_code @ 0x2fecdc, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int FUN_002e783c(short *);
/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e9520. */
extern int FUN_002eea7c(int);
/* Supplied declaration required: FUN_0030f234. */


void FUN_002fecdc(unsigned int param_1,int param_2,short *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002eea7c(param_2);
  if (temp_v0 == 0) {
    FUN_002e9300(param_1,param_3);
    return;
  }
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    temp_v1 = FUN_002e783c(param_3);
    FUN_0030f234(param_1,*(unsigned int *)(param_2 + 4),temp_v0,param_3,temp_v1);
    return;
  }
  FUN_002e9520(param_1,param_2);
  return;
}
