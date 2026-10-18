/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7218` (_code @ 0x2f7218, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002eb588. */


void FUN_002f7218(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [16];
  
  FUN_002e6e34(temp_v3,param_1 + 0x4c);
  if ((*(char *)(param_1 + 0x30) != param_2) &&
     (*(char *)(param_1 + 0x30) = (char)param_2, param_2 != 0)) {
    FUN_002eb588(&temp_v1);
    *(unsigned int *)(param_1 + 0x38) = temp_v1;
    *(unsigned int *)(param_1 + 0x3c) = temp_v2;
    pcVar1 = *(romwright_code **)(param_1 + 0x40);
    if (pcVar1 != (romwright_code *)0x0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x44);
      *(unsigned int *)(param_1 + 0x40) = 0;
      FUN_002e6e5c(temp_v3);
      (*pcVar1)(temp_v0);
      return;
    }
  }
  FUN_002e6e5c(temp_v3);
  return;
}
