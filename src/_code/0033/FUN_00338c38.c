/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338c38` (_code @ 0x338c38, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00245a7c. */
/* Supplied declaration required: FUN_0027e6f4. */
extern unsigned int *FUN_0027e928(unsigned int);
extern int FUN_002b6ad0(void);


void FUN_00338c38(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  if ((((*(char *)(param_1 + 0x44b4) == '\0') && (*(char *)(param_1 + 0x44b7) == '\0')) &&
      ((puVar1 = (unsigned int *)FUN_0027e928(DAT_0043427c), puVar1 == (unsigned int *)0x0 ||
       ((*puVar1 & 0x80) == 0 && (*puVar1 & 0x1000) == 0)))) &&
     (((temp_v0 = FUN_002b6ad0(), temp_v0 != 0 && (temp_v0 = param_1, FUN_0027e6f4(param_1,1), temp_v0 < 0))
      && (puVar1 = (unsigned int *)(param_1 + 0x44a0), (*puVar1 & 0x200) == 0 && (*puVar1 & 0x8000000) == 0)
      ))) {
    temp_v1 = 0;
    FUN_00245a7c(0,*(unsigned int *)(param_1 + 0x49e0));
    *(unsigned int *)(param_1 + 0x49e0) = temp_v1;
    *puVar1 = *puVar1 | 0x8000000;
  }
  return;
}
