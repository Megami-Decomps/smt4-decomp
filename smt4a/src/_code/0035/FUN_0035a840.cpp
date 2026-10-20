/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a840` (_code @ 0x35a840, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ea0(int);
int FUN_001386e8(int);
int FUN_001469a8(...);
int FUN_0019a5a0(unsigned int);
int FUN_001a0d08(void);
int FUN_002684ac(int);
int FUN_00275bc8(int, unsigned int);
int FUN_00275f44(unsigned int, int);
int FUN_002c76d8(int);
int FUN_002e3140(void);
int FUN_002e3328(int);
int FUN_002e6dd0(int, int);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00137ea0. */
/* Supplied declaration required: FUN_001386e8. */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002684ac. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002c76d8. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_002e6dd0. */


unsigned int FUN_0035a840(int param_1)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x7f4) == 2) {
    *(unsigned char *)(param_1 + 0x7f0) = 1;
    software_interrupt(0x24);
    if (*(int *)(param_1 + 0x7fc) < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(param_1 + 0x800) = 1;
    FUN_001a0d08();
    if (*(int *)(param_1 + 0x7fc) != 0) {
      software_interrupt(0x23);
      *(int *)(param_1 + 0x7fc) = 0;
    }
    FUN_001469a8(*(unsigned int *)(param_1 + 0x7f8));
    temp_v1 = *(int *)(param_1 + 0x7f8);
    if (temp_v1 != 0) {
      FUN_001469a8();
      FUN_002e3328(temp_v1);
    }
    *(unsigned int *)(param_1 + 0x7f8) = 0;
    FUN_0019a5a0(*(unsigned int *)(param_1 + 0x804));
    *(unsigned int *)(param_1 + 0x804) = 0;
    FUN_001386e8(2);
    FUN_00137ea0(2);
    temp_v1 = *(int *)(param_1 + 0x350);
    FUN_00275bc8(temp_v1,*(unsigned int *)(param_1 + 0x354));
    *(int *)(param_1 + 0x360) = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    *(unsigned int *)(param_1 + 0x3b0) = 1;
    if (*(char *)(param_1 + 0x7d5) != '\x01') {
      *(unsigned int *)(param_1 + 0xa0) = 8;
    }
    else {
      *(unsigned int *)(param_1 + 0xa0) = 0;
      FUN_002e6dd0(param_1 + 0x3ec,1000);
      FUN_00275f44(*(unsigned int *)(param_1 + 0x360),0x28);
      FUN_002c76d8(2);
      FUN_002684ac(2);
    }
    temp_v0 = 3;
  }
  return temp_v0;
}

} /* extern "C" */
