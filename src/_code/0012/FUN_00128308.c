/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128308` (_code @ 0x128308, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern signed char DAT_00465710; /* 0x465710 */
extern int DAT_00465714; /* 0x465714 */
extern int DAT_00472a44; /* 0x472a44 */
extern signed char DAT_00472a48; /* 0x472a48 */
extern int DAT_00472a4c; /* 0x472a4c */
extern int DAT_00472a50; /* 0x472a50 */
extern unsigned int DAT_00473850; /* 0x473850 */
extern unsigned int DAT_00473854; /* 0x473854 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_0014661c(unsigned int *);
/* Supplied declaration required: FUN_002bce48. */


void FUN_00128308(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      if (0 < DAT_00472a4c) {
        DAT_00472a4c = DAT_00472a4c - 1;
      }
      if (DAT_00472a4c == 0) {
        if (DAT_00472a48 != '\0') {
          DAT_00472a48 = 0;
          temp_v0 = FUN_0014661c(&DAT_00473854);
          if (-1 < temp_v0) {
            DAT_00472a50 = 0;
          }
          return;
        }
        return;
      }
      return;
    }
    if (param_1 == 2) {
      if (0 < DAT_00472a44) {
        DAT_00472a44 = DAT_00472a44 - 1;
      }
      if (DAT_00472a44 == 0) {
        temp_v0 = FUN_0014661c(&DAT_00473850);
        if (-1 < temp_v0) {
          DAT_00472a50 = 0;
          DAT_00473854 = 0;
        }
        return;
      }
      return;
    }
  }
  else {
    if (0 < DAT_00465714) {
      DAT_00465714 = DAT_00465714 - 1;
    }
    if ((DAT_00465714 == 0) && (DAT_00465710 != '\0')) {
      DAT_00465710 = '\0';
      if (DAT_00472a50 != 0) {
        software_interrupt(0x23);
        if (DAT_00472a50 < 0) {
          FUN_002bce48();
        }
        DAT_00472a50 = 0;
      }
    }
  }
  return;
}
