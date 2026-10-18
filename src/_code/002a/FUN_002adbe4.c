/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adbe4` (_code @ 0x2adbe4, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern signed char DAT_0044e650; /* 0x44e650 */
extern unsigned char DAT_0044e651; /* 0x44e651 */
extern int DAT_0044e668; /* 0x44e668 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002bb490. */
extern int FUN_002c6c10(unsigned int, char);


void FUN_002adbe4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  long long temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if (param_1 == 0) {
    temp_v3 = 0x17c;
  }
  else {
    temp_v3 = 100;
  }
  temp_v2 = 0;
  if (DAT_0044e650 != '\0') {
    if ((DAT_0044e651 != 0) && (software_interrupt(0x28), (DAT_0044e651 & 0x10) != 0)) {
      temp_v2 = FUN_002c6c10(temp_v3,(DAT_0044e651 & 0xf) + 1);
    }
    temp_v0 = DAT_0044e668 + temp_v2;
    if (temp_v0 != 0) {
      temp_v1 = (unsigned long long)temp_v0 * 1000000;
      FUN_002bb490((int)temp_v1,(int)((unsigned long long)temp_v1 >> 0x20));
      return;
    }
  }
  return;
}
