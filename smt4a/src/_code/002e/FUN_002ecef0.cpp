/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecef0` (_code @ 0x2ecef0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010d300(void);
int FUN_00120d60(void);
int sharedRefAddRef(void);
int onlineInstantiationContextGetCurrent(void);
int lockedLeave(unsigned char *);
int lockedEnter(unsigned char *);

extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

/* Supplied declaration required: FUN_0010d300. */
/* Supplied declaration required: FUN_00120d60. */
/* Supplied declaration required: sharedRefAddRef. */
extern int _Znwj(unsigned int);
/* Supplied declaration required: onlineInstantiationContextGetCurrent. */
/* Supplied declaration required: lockedLeave. */
/* Supplied declaration required: lockedEnter. */


void FUN_002ecef0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  lockedEnter(&DAT_0062e6a0);
  FUN_0010d300();
  temp_v0 = onlineInstantiationContextGetCurrent();
  if (temp_v0 != 0) {
    onlineInstantiationContextGetCurrent();
    sharedRefAddRef();
  }
  else {
    temp_v0 = _Znwj(0x80);
    if (temp_v0 != 0) {
      FUN_00120d60();
    }
  }
  lockedLeave(&DAT_0062e6a0);
  return;
}

} /* extern "C" */
