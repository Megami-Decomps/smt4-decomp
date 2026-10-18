/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338e6c` (_code @ 0x338e6c, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00245be8. */
/* Supplied declaration required: FUN_0027e964. */
extern unsigned int *FUN_0027eb98(unsigned int);
extern int FUN_002b6e10(void);


void FUN_00338e6c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  if ((((*(char *)(param_1 + 0x44b4) == '\0') && (*(char *)(param_1 + 0x44b7) == '\0')) &&
      ((puVar1 = (unsigned int *)FUN_0027eb98(DAT_0043427c), puVar1 == (unsigned int *)0x0 ||
       ((*puVar1 & 0x80) == 0 && (*puVar1 & 0x1000) == 0)))) &&
     (((temp_v0 = FUN_002b6e10(), temp_v0 != 0 && (temp_v0 = param_1, FUN_0027e964(param_1,1), temp_v0 < 0))
      && (puVar1 = (unsigned int *)(param_1 + 0x44a0), (*puVar1 & 0x200) == 0 && (*puVar1 & 0x8000000) == 0)
      ))) {
    temp_v1 = 0;
    FUN_00245be8(0,*(unsigned int *)(param_1 + 0x49e0));
    *(unsigned int *)(param_1 + 0x49e0) = temp_v1;
    *puVar1 = *puVar1 | 0x8000000;
  }
  return;
}
