/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d094` (_code @ 0x12d094, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fb008(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int *DAT_005c4c18; /* 0x5c4c18 */

/* Supplied declaration required: FUN_002fb008. */


void FUN_0012d094(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  (**(romwright_code **)(*DAT_005c4c18 + 0xc))(DAT_005c4c18,param_1,&temp_v0);
  FUN_002fb008(param_2,temp_v0);
  return;
}

} /* extern "C" */
