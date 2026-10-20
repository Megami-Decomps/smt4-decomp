/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_LightEvent_ClearSignal` (_code @ 0x1a0990, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4a58(int *, int *, int, int, int, int, unsigned int, unsigned int);
int FUN_001bd354(void);
int hasExclusiveAccess(int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001b4a58. */
/* Supplied declaration required: FUN_001bd354. */


int * nn_os_LightEvent_ClearSignal(int *param_1)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  if (*param_1 != 1) {
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      do {
        piVar3 = (int *)*param_1;
        temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
      } while (!temp_v0);
      *param_1 = -1;
    }
    return piVar3;
  }
  piVar3 = param_1 + 1;
  FUN_001bd354();
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = -2;
  do {
    temp_v2 = *piVar3;
    temp_v1 = -temp_v2;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar3);
  } while (!temp_v0);
  *piVar3 = temp_v1;
  piVar4 = piVar3;
  if (temp_v2 != -1 && 0 < temp_v1) {
    piVar4 = DAT_005c0ad8;
    FUN_001b4a58(DAT_005c0ad8,piVar3,0,1,0,0,unaff_r4,in_lr);
  }
  return piVar4;
}

} /* extern "C" */
