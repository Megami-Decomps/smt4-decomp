/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115998` (_code @ 0x115998, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int onlineJobSetStateDone(int);
int FUN_002f3dc4(void);
int FUN_002f3dde(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */


void FUN_00115998(int param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x74));
  if (temp_v0 != 0) {
    if (*param_2 >= 0) {
      FUN_002f3dc4();
    }
    else {
      FUN_002f3dde();
    }
  }
  onlineJobSetStateDone(param_1);
  return;
}

} /* extern "C" */
