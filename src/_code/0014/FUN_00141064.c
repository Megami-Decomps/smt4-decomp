/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141064` (_code @ 0x141064, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00148520. */
/* Supplied declaration required: FUN_001485c4. */
/* Supplied declaration required: FUN_001500b4. */
/* Supplied declaration required: FUN_00151400. */
/* Supplied declaration required: FUN_002ac1a0. */
/* Supplied declaration required: FUN_002ac22c. */
/* Supplied declaration required: FUN_002ac900. */
/* Supplied declaration required: FUN_002b743c. */


void FUN_00141064(unsigned int *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  if (param_2 == 0) {
    FUN_002ac22c();
    FUN_001500b4(*param_1,3);
    FUN_002ac1a0(param_1);
    return;
  }
  puVar1 = param_1;
  FUN_00151400();
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
    FUN_002ac900(temp_v1 + 8,*(unsigned int *)(temp_v1 + 0xc),temp_v1 + 0xc);
    FUN_002b743c(param_1 + 1,temp_v1);
  }
  FUN_00148520(*param_1,param_2);
  FUN_001485c4(*param_1,param_1[1]);
  FUN_002ac1a0(param_1);
  return;
}
