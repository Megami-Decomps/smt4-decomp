/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042337c` (_code @ 0x42337c, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3140(void);
int FUN_0042349c(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_0042349c. */
extern int *FUN_00426134(void);


void FUN_0042337c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  
  do {
    temp_v1 = param_1;
    FUN_0042349c();
    if (temp_v1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) {
      temp_v1 = 0;
      temp_v0 = 0;
      if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) {
        do {
          temp_v2 = *(int *)(param_1 + 0x5c) + temp_v0;
          temp_v0 = temp_v0 + 1;
          if (*(char *)(param_1 + (temp_v2 & 3) * 0x14 + 0x18) == '\x01') {
            temp_v1 = temp_v1 + 1;
          }
        } while (temp_v0 < (unsigned int)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c)));
      }
      if (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c) == temp_v1) {
        return;
      }
    }
    piVar2 = (int *)FUN_00426134();
    software_interrupt(0x24);
    if (*piVar2 < 0) {
      FUN_002e3140();
    }
  } while( 1 );
}

} /* extern "C" */
