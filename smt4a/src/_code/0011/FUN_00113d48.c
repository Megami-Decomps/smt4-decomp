/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113d48` (_code @ 0x113d48, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern signed char DAT_0059495d; /* 0x59495d */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int FUN_002fe9f2(int, int);


void FUN_00113d48(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned char temp_v1 [12];
  int iStack_14;
  int temp_v2;
  
  if (DAT_0059495d != '\0') {
    iStack_14 = param_1;
    temp_v2 = param_2;
    FUN_002e6e34(temp_v1,param_1 + 0x18);
    temp_v0 = FUN_002fe9f2(param_1 + 8,param_1 + 0x10);
    piVar2 = (int *)(param_1 + 0xc);
    if (temp_v0 != 0) {
      *(int *)(*piVar2 + 4) = temp_v2;
      *(int *)(temp_v2 + 8) = *piVar2;
    }
    else {
      *(int *)(param_1 + 8) = temp_v2;
    }
    *piVar2 = temp_v2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    FUN_002e6e5c(temp_v1);
  }
  return;
}
