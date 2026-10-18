/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001409d4` (_code @ 0x1409d4, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00148438. */
/* Supplied declaration required: FUN_001484dc. */
/* Supplied declaration required: FUN_0014ffb8. */
/* Supplied declaration required: FUN_00151304. */
/* Supplied declaration required: FUN_002ac42c. */
/* Supplied declaration required: FUN_002ac4b8. */
/* Supplied declaration required: FUN_002acb8c. */
/* Supplied declaration required: FUN_002b777c. */


void FUN_001409d4(unsigned int *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  if (param_2 == 0) {
    FUN_002ac4b8();
    FUN_0014ffb8(*param_1,3);
    FUN_002ac42c(param_1);
    return;
  }
  puVar1 = param_1;
  FUN_00151304();
  while (param_2 < (int)param_1[1]) {
    temp_v1 = param_1[3];
    if (puVar1 != (unsigned int *)0x0) {
      *(unsigned char *)(temp_v1 + 0x14) = 0;
    }
    if (*(char *)(temp_v1 + 0x14) != '\0') {
      temp_v0 = temp_v1 + 0xc;
      while (temp_v0 != *(int *)(temp_v1 + 0xc)) {
        temp_v0 = *(int *)(temp_v0 + 4);
        if (*(romwright_code **)(temp_v0 + 0x10) != (romwright_code *)0x0) {
          (**(romwright_code **)(temp_v0 + 0x10))
                    (*(unsigned int *)(temp_v0 + 8),*(unsigned int *)(temp_v0 + 0xc),
                     *(unsigned int *)(temp_v0 + 0x14));
        }
      }
    }
    FUN_002acb8c(temp_v1 + 8,*(unsigned int *)(temp_v1 + 0xc),temp_v1 + 0xc);
    FUN_002b777c(param_1 + 1,temp_v1);
  }
  FUN_00148438(*param_1,param_2);
  FUN_001484dc(*param_1,param_1[1]);
  FUN_002ac42c(param_1);
  return;
}
