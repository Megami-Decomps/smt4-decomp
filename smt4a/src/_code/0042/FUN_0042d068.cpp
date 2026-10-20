/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d068` (_code @ 0x42d068, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4a58(unsigned int, int, int, int, int, int, unsigned int, unsigned int);
int FUN_002e3140(void);
int hasExclusiveAccess(int);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */
extern int *piRam00643318; /* 0x643318 */
extern int iRam0064331c; /* 0x64331c */
extern unsigned int uRam00643320; /* 0x643320 */
extern int iRam00643324; /* 0x643324 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001b4a58. */
/* Supplied declaration required: FUN_002e3140. */
extern void nn_os_CriticalSection_Enter(unsigned int);


void FUN_0042d068(int param_1,int *param_2,int param_3)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int in_lr;
  unsigned char temp_v1;
  
  if (param_3 == 0) {
    software_interrupt(0x24);
    if (*(int *)(param_1 + 4) < 0) {
      FUN_002e3140();
    }
    (*(romwright_code *)0x5144a0)(param_2,0x5144a0,param_2,in_lr);
    return;
  }
  if (param_2[2] != 0) {
    nn_os_CriticalSection_Enter(0x64331c);
    if ((int *)*param_2 == param_2) {
      piRam00643318 = (int *)0x0;
    }
    else {
      if (piRam00643318 == param_2) {
        piRam00643318 = (int *)piRam00643318[1];
      }
      *(int *)param_2[1] = *param_2;
      *(int *)(*param_2 + 4) = param_2[1];
    }
    param_2[1] = 0;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    iRam00643324 = iRam00643324 - 1;
    if (iRam00643324 != 0) {
      return;
    }
    uRam00643320 = 0;
    do {
      temp_v0 = -iRam0064331c;
      temp_v1 = (unsigned char)hasExclusiveAccess(0x64331c);
    } while (!temp_v1);
    temp_v1 = iRam0064331c != -1;
    iRam0064331c = temp_v0;
    if (temp_v1 && 0 < temp_v0) {
      FUN_001b4a58(DAT_005c0ad8,0x64331c,0,1,0,0,unaff_r4,in_lr);
    }
    return;
  }
  return;
}

} /* extern "C" */
