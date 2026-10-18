/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea458` (_code @ 0x2ea458, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0017fd20. */
extern int FUN_001d3ed4(int);
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002ea3f4. */


void FUN_002ea458(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int temp_v1;
  
  piVar1 = &temp_v1;
  piVar3 = (int *)(param_1 + 0x118);
  if (*(char *)(param_1 + 0x11c) != '\0') {
    temp_v1 = param_4;
    FUN_002ea3f4(piVar3);
  }
  temp_v1 = 0;
  if (*piVar3 != 0) {
    piVar1 = (int *)0xe0a0183b;
  }
  else {
    FUN_0017fd20();
    if (-1 < (int)piVar1) {
      piVar1 = (int *)0x0;
      *piVar3 = temp_v1;
    }
  }
  if ((int)piVar1 < 0) {
    FUN_002e3140();
  }
  temp_v0 = FUN_001d3ed4(*piVar3);
  if (temp_v0 < 0) {
    FUN_002e3140();
  }
  *(unsigned char *)(param_1 + 0x11c) = 1;
  return;
}
