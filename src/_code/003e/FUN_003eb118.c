/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb118` (_code @ 0x3eb118, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b7770. */
extern unsigned int FUN_002bd630(void);
/* Supplied declaration required: FUN_0037e488. */
/* Supplied declaration required: FUN_0037e5e0. */


void FUN_003eb118(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v3 = *(char *)(param_1 - 0x44) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(param_1 - 0x43);
  }
  if (temp_v3 && temp_v0 != '\0') {
    if (*(char *)(param_1 - 0x42) != '\0') {
      FUN_0037e5e0(param_1 - 0x50);
      return;
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_0037e5e0(param_1 - 0x50);
        return;
      }
      *(unsigned char *)(param_1 - 0x41) = 1;
      if (*(char *)(param_1 - 0x43) == '\0') {
        return;
      }
    }
    else {
      temp_v2 = param_1 - 0x50;
      FUN_0037e488();
      if (temp_v2 != 0) {
        FUN_0037e5e0(param_1 - 0x50);
        return;
      }
      if (*(char *)(param_1 - 0x43) == '\0') {
        return;
      }
    }
    temp_v1 = FUN_002bd630();
    FUN_002b7770(temp_v1,param_1);
    *(unsigned char *)(param_1 - 0x43) = 0;
  }
  return;
}
