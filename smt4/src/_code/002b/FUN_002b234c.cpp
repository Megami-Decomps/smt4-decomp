/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b234c` (_code @ 0x2b234c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryFreeRegion(unsigned int);
int FUN_00253d24(void);
int FUN_002a8554(unsigned int, int *, int, int, int, int, unsigned int, unsigned int);
int hasExclusiveAccess(int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int *DAT_00465124; /* 0x465124 */
extern unsigned int DAT_00465144; /* 0x465144 */
extern unsigned int DAT_00465148; /* 0x465148 */
extern int DAT_00465154; /* 0x465154 */
extern int DAT_00465158; /* 0x465158 */
extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: asdMemoryFreeRegion. */
extern unsigned int FUN_001246cc(unsigned int);
extern unsigned int FUN_00253ce4(unsigned int);
/* Supplied declaration required: FUN_00253d24. */
/* Supplied declaration required: FUN_002a8554. */
extern void nn_os_CriticalSection_Enter(unsigned int);


void FUN_002b234c(unsigned int param_1)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  FUN_00253d24();
  temp_v1 = FUN_00253ce4(param_1);
  if (temp_v1 == 0) {
    return;
  }
  nn_os_CriticalSection_Enter((unsigned int)DAT_00465124);
  if (((temp_v1 < DAT_00465144) || (DAT_00465154 + DAT_00465144 < temp_v1)) &&
     ((temp_v1 < DAT_00465148 || (DAT_00465148 + DAT_00465158 < temp_v1)))) {
    temp_v1 = FUN_001246cc(temp_v1);
  }
  asdMemoryFreeRegion(temp_v1);
  piVar2 = DAT_00465124;
  temp_v3 = DAT_00465124[2];
  DAT_00465124[2] = temp_v3 - 1;
  if (temp_v3 - 1 != 0) {
    return;
  }
  piVar2[1] = 0;
  do {
    temp_v2 = *piVar2;
    temp_v3 = -temp_v2;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = temp_v3;
  if (temp_v2 != -1 && 0 < temp_v3) {
    FUN_002a8554(DAT_00471b58,piVar2,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}

} /* extern "C" */
