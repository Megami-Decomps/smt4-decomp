/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00375874` (_code @ 0x375874, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003811ec(unsigned int *, unsigned int *);
int FUN_0039a598(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int idIsAbove400(unsigned int);
/* Supplied declaration required: FUN_003811ec. */
/* Supplied declaration required: FUN_0039a598. */


void FUN_00375874(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = idIsAbove400(*param_1);
  if (temp_v0 != 0) {
    temp_v0 = 99;
  }
  else {
    temp_v0 = FUN_0039a598(*param_1);
  }
  temp_v1 = idIsAbove400(*param_2);
  if (temp_v1 != 0) {
    temp_v1 = 99;
  }
  else {
    temp_v1 = FUN_0039a598();
  }
  if (temp_v1 != temp_v0) {
    return;
  }
  FUN_003811ec(param_1,param_2);
  return;
}

} /* extern "C" */
