/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_SimpleLock_Lock` (_code @ 0x1465e0, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ClearExclusiveLocal(void);
int FUN_002a8554(unsigned int, int *, int, int, int, int);
int hasExclusiveAccess(int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Unsupported intrinsic, declaration required: ClearExclusiveLocal (CALLOTHER). */
/* Supplied declaration required: FUN_002a8554. */


void nn_os_SimpleLock_Lock(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  
  while (0 < *param_1) {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
    if (temp_v0) {
      *param_1 = -*param_1;
      return;
    }
  }
  ClearExclusiveLocal();
  do {
    while (-1 < *param_1) {
      ClearExclusiveLocal();
      while (0 < *param_1) {
        temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
        if (temp_v0) {
          *param_1 = -*param_1;
          return;
        }
      }
      ClearExclusiveLocal();
    }
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = *param_1 - 1;
  do {
    FUN_002a8554(DAT_00471b58,param_1,1,0,0,0);
    while (0 < *param_1) {
      temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
      if (temp_v0) {
        *param_1 = 1 - *param_1;
        return;
      }
    }
    ClearExclusiveLocal();
  } while( 1 );
}

} /* extern "C" */
