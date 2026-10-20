/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310e7a` (_code @ 0x310e7a, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9520(unsigned int, int);
int FUN_0030f234(unsigned int, unsigned int, int, unsigned int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002e9520. */
extern int FUN_002eea7c(int);
/* Supplied declaration required: FUN_0030f234. */


void FUN_00310e7a(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002eea7c(param_2);
  temp_v2 = param_3;
  if ((temp_v0 != 0) && (temp_v1 = FUN_002eea7c(param_3), temp_v2 = param_2, temp_v1 != 0)) {
    FUN_0030f234(param_1,*(unsigned int *)(param_2 + 4),temp_v0,*(unsigned int *)(param_3 + 4),temp_v1);
    return;
  }
  FUN_002e9520(param_1,temp_v2);
  return;
}

} /* extern "C" */
