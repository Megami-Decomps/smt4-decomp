/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00182884` (_code @ 0x182884, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_005b3bcc; /* 0x5b3bcc */

/* Supplied declaration required: FUN_00181ae0. */
extern int FUN_002e3390(unsigned int);


void FUN_00182884(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((param_1 < 9) && (temp_v0 = FUN_002e3390(param_2), temp_v0 != 0)) {
    FUN_00181ae0(*(unsigned int *)(param_1 * 4 + 0x53d130),DAT_005b3bcc,param_2);
    return;
  }
  return;
}
