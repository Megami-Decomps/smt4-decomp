/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_LightEvent_Wait` (_code @ 0x1af148, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ClearExclusiveLocal(void);
int FUN_001b4a58(unsigned int, int *, int, int, int, int);
int hasExclusiveAccess(int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: ClearExclusiveLocal (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001b4a58. */


void nn_os_LightEvent_Wait(int *param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  do {
    temp_v1 = *param_1;
    if (temp_v1 == -2) {
      FUN_001b4a58(DAT_005c0ad8,param_1,1,0,0,0);
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
            goto LAB_001af1d8;
          }
          temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
        } while (!temp_v0);
        *param_1 = -1;
LAB_001af1d8:
        if (temp_v1 == 0) {
          return;
        }
      }
    }
    FUN_001b4a58(DAT_005c0ad8,param_1,1,0,0,0);
  } while( 1 );
}

} /* extern "C" */
