/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f19dc` (_code @ 0x3f19dc, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001469a8(void);
int asdMemFree(void);
int FUN_001a0d08(int *);
int FUN_002e3140(void);
int FUN_002e3328(int);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_003f19dc(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x4cf8);
  software_interrupt(0x24);
  if (*piVar2 < 0) {
    FUN_002e3140();
  }
  *(unsigned char *)(param_1 + 0x4cfc) = 1;
  FUN_001a0d08(piVar2);
  if (*piVar2 != 0) {
    software_interrupt(0x23);
    *piVar2 = 0;
  }
  piVar2 = (int *)(param_1 + 0x4d04);
  if (*piVar2 != 0) {
    FUN_001469a8();
    temp_v0 = *piVar2;
    if (temp_v0 != 0) {
      FUN_001469a8();
      FUN_002e3328(temp_v0);
    }
    *piVar2 = 0;
  }
  if (*(int *)(param_1 + 0x4d00) != 0) {
    asdMemFree();
    *(int *)(param_1 + 0x4d00) = 0;
  }
  *(unsigned int *)(param_1 + 0x4d14) = 0xffffffff;
  return;
}

} /* extern "C" */
