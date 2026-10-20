/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001884c8` (_code @ 0x1884c8, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int svcSleepThread(int, int);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern signed char DAT_00589398; /* 0x589398 */
extern unsigned char DAT_00589399; /* 0x589399 */
extern int DAT_005893b0; /* 0x5893b0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: svcSleepThread. */
extern int __aeabi_uidivmod(unsigned int, char);


void FUN_001884c8(int param_1)

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
  if (DAT_00589398 != '\0') {
    if ((DAT_00589399 != 0) && (software_interrupt(0x28), (DAT_00589399 & 0x10) != 0)) {
      temp_v2 = __aeabi_uidivmod(temp_v3,(DAT_00589399 & 0xf) + 1);
    }
    temp_v0 = DAT_005893b0 + temp_v2;
    if (temp_v0 != 0) {
      temp_v1 = (unsigned long long)temp_v0 * 1000000;
      svcSleepThread((int)temp_v1,(int)((unsigned long long)temp_v1 >> 0x20));
      return;
    }
  }
  return;
}

} /* extern "C" */
