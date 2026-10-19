/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3424` (_code @ 0x2c3424, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: ClearExclusiveLocal (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002a8554. */


void FUN_002c3424(int *param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  do {
    temp_v1 = *param_1;
    if (temp_v1 == -2) {
      FUN_002a8554(DAT_00471b58,param_1,1,0,0,0);
      return;
    }
    if (temp_v1 != -1) {
      if (temp_v1 != 0) {
        if (temp_v1 == 1) {
          return;
        }
      }
      else {
        do {
          temp_v1 = *param_1;
          if (temp_v1 != 0) {
            ClearExclusiveLocal();
            goto LAB_002c34b0;
          }
          temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
        } while (!temp_v0);
        *param_1 = -1;
LAB_002c34b0:
        if (temp_v1 == 0) {
          return;
        }
      }
    }
    FUN_002a8554(DAT_00471b58,param_1,1,0,0,0);
  } while( 1 );
}
