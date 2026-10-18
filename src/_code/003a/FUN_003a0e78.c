/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0e78` (_code @ 0x3a0e78, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_00294180(void);
/* Supplied declaration required: FUN_00297920. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0dd4. */
extern unsigned int FUN_002bef70(unsigned int *);
extern unsigned int FUN_002bef7c(unsigned int *);
/* Supplied declaration required: FUN_002bf9f0. */


void FUN_003a0e78(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v0 = FUN_002a0dd4();
  if (temp_v0 != 0) {
    FUN_002a0dd4();
    FUN_00297920();
  }
  temp_v1 = param_1[2];
  if (temp_v1 == 0) {
    FUN_002333d4(param_1 + 0xea,1);
    param_1[2] = 1;
    FUN_0029f10c(0,0x323232ff);
    return;
  }
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      return;
    }
  }
  else {
    puVar5 = param_1 + 0x115;
    FUN_002bf9f0(puVar5);
    temp_v2 = FUN_002bef70(puVar5);
    temp_v3 = FUN_002bef7c(puVar5);
    FUN_002313d4(param_1 + 0xe0,temp_v3,temp_v2);
    if (*(char *)((int)param_1 + 0x4de) == '\0') {
      return;
    }
    *param_1 = *param_1 & 0xfffff1ff;
    temp_v0 = FUN_002a0dd4();
    if (temp_v0 == 0) {
      param_1[1] = 0x12;
      param_1[2] = 0;
      return;
    }
    param_1[2] = 2;
  }
  FUN_002a0dd4();
  temp_v0 = FUN_00294180();
  if (temp_v0 == 0) {
    return;
  }
  param_1[1] = 0x12;
  param_1[2] = 0;
  return;
}
