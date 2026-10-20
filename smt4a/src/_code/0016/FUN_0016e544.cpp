/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e544` (_code @ 0x16e544, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001894f4(void);
int FUN_00189570(void);
int sysFatalBreak(void);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern signed char DAT_005b4790; /* 0x5b4790 */
extern int DAT_005b4798; /* 0x5b4798 */
extern int DAT_005b479c; /* 0x5b479c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001894f4. */
/* Supplied declaration required: FUN_00189570. */
/* Supplied declaration required: sysFatalBreak. */
extern unsigned int FUN_001a0e10(void);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0016e544(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 == 0) {
    temp_v0 = FUN_001a0e10();
    nn_os_CriticalSection_Enter(temp_v0);
    if (0 < DAT_005b4798) {
      DAT_005b4798 = DAT_005b4798 - 1;
    }
    if ((DAT_005b4798 == 0) && (DAT_005b4790 != '\0')) {
      DAT_005b4790 = '\0';
      if (DAT_005b479c != 0) {
        software_interrupt(0x23);
        if (DAT_005b479c < 0) {
          sysFatalBreak();
        }
        DAT_005b479c = 0;
      }
    }
    nn_os_CriticalSection_Leave(temp_v0);
    return;
  }
  if (param_1 == 1) {
    FUN_001894f4();
    return;
  }
  if (param_1 != 2) {
    return;
  }
  FUN_00189570();
  return;
}

} /* extern "C" */
