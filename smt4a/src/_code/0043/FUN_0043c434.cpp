/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043c434` (_code @ 0x43c434, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016f988(unsigned int *, unsigned int, unsigned int, int);
int FUN_00170358(unsigned int *, int);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern signed char DAT_005c0aa0; /* 0x5c0aa0 */
extern unsigned int DAT_005c0ab0; /* 0x5c0ab0 */
extern unsigned int DAT_005c0ab4; /* 0x5c0ab4 */
extern unsigned int DAT_00643080; /* 0x643080 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0016f988. */
/* Supplied declaration required: FUN_00170358. */
extern unsigned int FUN_002e3390(void);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0043c434(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_005c0aa0 != '\0') {
    FUN_00170358(&DAT_005c0ab4,1);
    return;
  }
  nn_os_CriticalSection_Enter((unsigned int)&DAT_00643080);
  temp_v0 = (*(unsigned int *)((unsigned char *)&DAT_005c0ab4 - 0x10));
  temp_v1 = FUN_002e3390();
  FUN_0016f988(&DAT_005c0ab0,temp_v0,temp_v1,0);
  DAT_005c0ab4 = DAT_005c0ab0;
  FUN_00170358(&DAT_005c0ab4,1);
  software_interrupt(0x23);
  DAT_005c0ab4 = 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_00643080);
  return;
}

} /* extern "C" */
