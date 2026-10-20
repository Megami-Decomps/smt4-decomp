/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd460` (_code @ 0x2fd460, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00123e86(unsigned int);
int onlineInstanceTableFind(int, unsigned int);

/* Supplied declaration required: FUN_00123e86. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern int onlineInstantiationContextGetCurrent(void);


unsigned int FUN_002fd460(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x178));
  if (((temp_v0 != 0) && (temp_v0 = onlineInstantiationContextGetCurrent(), *(char *)(temp_v0 + 0x30) == '\0')) &&
     (*(char *)(param_1 + 0x1b1) == '\0')) {
    FUN_00123e86(*(unsigned int *)(param_1 + 0x88));
    return 0;
  }
  return 1;
}

} /* extern "C" */
