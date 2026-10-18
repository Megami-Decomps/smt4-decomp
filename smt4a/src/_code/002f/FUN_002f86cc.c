/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f86cc` (_code @ 0x2f86cc, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0059496c; /* 0x59496c */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);
extern int FUN_002f9e1c(int, unsigned int *);


unsigned int FUN_002f86cc(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [16];
  int iStack_10;
  int uStack_c;
  
  iStack_10 = param_1;
  uStack_c = param_2;
  if (DAT_0059496c != '\0') {
    temp_v0 = FUN_002ea714();
    FUN_002e6e34(temp_v2,temp_v0);
    temp_v1 = FUN_002f9e1c(param_1 + 0x160,(unsigned int *)&uStack_c);
    if (*(int *)(param_1 + 0x168) != temp_v1) {
      temp_v0 = *(unsigned int *)(temp_v1 + 4);
      FUN_002e6e5c(temp_v2);
      return temp_v0;
    }
    FUN_002e6e5c(temp_v2);
  }
  else {
    temp_v1 = FUN_002f9e1c(param_1 + 0x160,(unsigned int *)&uStack_c);
    if (*(int *)(param_1 + 0x168) != temp_v1) {
      return *(unsigned int *)(temp_v1 + 4);
    }
  }
  return 0;
}
