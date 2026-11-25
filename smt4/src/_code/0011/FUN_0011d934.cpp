#include "nn/err/Fatal.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d934` (_code @ 0x11d934, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


extern int DAT_00465660; /* 0x465660 */
extern int DAT_00465664; /* 0x465664 */
extern int DAT_004656b0; /* 0x4656b0 */

/* Supplied declaration required: errThrowFatal. */
extern int srvGetServiceHandle(unsigned int *, int, unsigned int, unsigned int); // declcheck: local (the shared declaration does not compile here or changes this unit)
extern unsigned int libc_strlen(void);


int FUN_0011d934(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00465664 == 0) {
    DAT_00465664 = DAT_00465660;
  }
  temp_v0 = DAT_00465664;
  if (DAT_004656b0 != 0) {
    temp_v0 = -0x1f5f3007;
  }
  else {
    temp_v1 = libc_strlen();
    temp_v0 = srvGetServiceHandle((unsigned int *)&DAT_004656b0,temp_v0,temp_v1,0);
  }
  if (temp_v0 < 0) {
    errThrowFatal(temp_v0,0x11d98c);
  }
  return temp_v0;
}

} /* extern "C" */
