/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155b2c` (_code @ 0x155b2c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a775c(void);
int FUN_002c415c(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00155b2c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int *piVar5;
  
  for (temp_v2 = *(int *)(param_1 + 0xc); temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 0x18)) {
    piVar5 = *(int **)(temp_v2 + 8);
    if (*piVar5 != 0) {
      FUN_002a775c();
      *piVar5 = 0;
    }
  }
  piVar5 = (int *)(param_1 + 0xc);
  temp_v2 = *piVar5;
  while (temp_v2 != 0) {
    temp_v0 = *(int *)(temp_v2 + 0x18);
    if (piVar5 != (int *)0x0 && temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0x14);
      if (temp_v1 == 0 && temp_v0 == 0) {
        *piVar5 = 0;
        *(unsigned int *)(param_1 + 0x10) = 0;
      }
      else {
        if (temp_v1 != 0) {
          *(int *)(temp_v1 + 0x18) = temp_v0;
        }
        else {
          *(unsigned int *)(temp_v0 + 0x14) = 0;
          *piVar5 = temp_v0;
        }
        if (temp_v0 != 0) {
          *(int *)(temp_v0 + 0x14) = temp_v1;
        }
        else {
          *(unsigned int *)(temp_v1 + 0x18) = 0;
          *(int *)(param_1 + 0x10) = temp_v1;
        }
      }
      temp_v1 = 0;
      for (piVar2 = (int *)*piVar5; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[6]) {
        *piVar2 = temp_v1;
        temp_v1 = temp_v1 + 1;
      }
      *(int *)(param_1 + 0x14) = temp_v1;
    }
    if (*(romwright_code **)(temp_v2 + 0x10) != (romwright_code *)0x0) {
      (**(romwright_code **)(temp_v2 + 0x10))(*(unsigned int *)(temp_v2 + 8));
    }
    FUN_002c415c(temp_v2);
    temp_v2 = temp_v0;
  }
  return;
}

} /* extern "C" */
