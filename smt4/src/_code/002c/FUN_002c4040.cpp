/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4040` (_code @ 0x2c4040, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a8554(...);
int hasExclusiveAccess(int *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002a8554. */
extern void nn_os_SimpleLock_Lock(unsigned int);


void FUN_002c4040(int *param_1)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  int *piVar4;
  unsigned int in_lr;
  
  if (*param_1 != -1) {
    if (*param_1 == -2) {
      piVar4 = param_1 + 1;
      nn_os_SimpleLock_Lock((unsigned int)piVar4);
      do {
        temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
      } while (!temp_v0);
      *param_1 = 1;
      FUN_002a8554(DAT_00471b58,param_1,0,0xffffffff,0,0);
      do {
        temp_v2 = *piVar4;
        temp_v1 = -temp_v2;
        temp_v0 = (unsigned char)hasExclusiveAccess(piVar4);
      } while (!temp_v0);
      *piVar4 = temp_v1;
      if (temp_v2 != -1 && 0 < temp_v1) {
        FUN_002a8554(DAT_00471b58,piVar4,0,1,0,0,unaff_r4,in_lr);
      }
      return;
    }
  }
  else {
    do {
      temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
    } while (!temp_v0);
    *param_1 = 0;
    FUN_002a8554(DAT_00471b58,param_1,0,1,0,0);
  }
  return;
}

} /* extern "C" */
