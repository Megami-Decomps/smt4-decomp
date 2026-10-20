/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310d9c` (_code @ 0x310d9c, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int onlineJobSetStateDone(void);
int FUN_002fa722(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: FUN_002fa722. */


void FUN_00310d9c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  onlineJobSetStateDone();
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002fa722();
  }
  return;
}

} /* extern "C" */
