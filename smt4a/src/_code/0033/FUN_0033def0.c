/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033def0` (_code @ 0x33def0, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern signed char DAT_005f161f; /* 0x5f161f */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
extern int FUN_004ffb58(int);


void FUN_0033def0(char *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*param_1 == '\0') {
    return;
  }
  temp_v2 = *(int *)(*(int *)(param_1 + 0x20) + 4);
  if (DAT_005f161f != '\0') {
    if ((*(unsigned int *)(temp_v2 + 4) & 1) != 0) {
      return;
    }
    *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
    return;
  }
  if (param_1[2] == '\0') {
    return;
  }
  temp_v0 = *(unsigned int *)(temp_v2 + 4);
  if (param_1[1] != '\0') {
    if ((temp_v0 & 1) != 0) {
      temp_v0 = temp_v0 & 0xfffffffc;
      *(unsigned int *)(temp_v2 + 4) = temp_v0;
    }
  }
  else if ((temp_v0 & 1) == 0) {
    temp_v0 = temp_v0 | 3;
    *(unsigned int *)(temp_v2 + 4) = temp_v0;
  }
  temp_v1 = FUN_0018719c(0xc);
  if ((temp_v1 != 0) && (temp_v1 = FUN_0018719c(0x10), temp_v1 == 0)) {
    *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
  }
  FUN_003fd76c(temp_v2,param_1 + 0xc);
  FUN_003fdb18(temp_v2);
  temp_v1 = FUN_004ffb58(temp_v2);
  if (temp_v1 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_003fe86c(temp_v2,*(int *)(param_1 + 0x1c),2);
  return;
}
