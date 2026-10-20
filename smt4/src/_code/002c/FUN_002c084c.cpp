/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c084c` (_code @ 0x2c084c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001245c4(int *);
int FUN_002694f8(void);
int FUN_0028c854(void);
int FUN_002a8554(unsigned int, int *, int, int, int, int, unsigned int, unsigned int);
int FUN_002c415c(void);
int hasExclusiveAccess(int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int *DAT_00465124; /* 0x465124 */
extern unsigned int DAT_00465144; /* 0x465144 */
extern unsigned int DAT_00465148; /* 0x465148 */
extern int DAT_00465154; /* 0x465154 */
extern int DAT_00465158; /* 0x465158 */
extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001245c4. */
extern int *FUN_001246cc(int *);
/* Supplied declaration required: FUN_002694f8. */
extern int *FUN_0028c814(void);
/* Supplied declaration required: FUN_0028c854. */
extern int FUN_0028c904(int *);
/* Supplied declaration required: FUN_002a8554. */
/* Supplied declaration required: FUN_002c415c. */
extern void nn_os_CriticalSection_Enter(unsigned int);


void FUN_002c084c(int param_1,int *param_2)

{
/* irregular: irregular input(s): in_lr; 6 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v1 = FUN_0028c904(param_2);
  if (temp_v1 != 0) {
    FUN_0028c854();
  }
  else {
    param_2 = (int *)FUN_0028c814();
  }
  *(int **)(param_1 + 0x14) = param_2;
  FUN_002694f8();
  temp_v1 = *param_2;
  *param_2 = temp_v1 - 1;
  if (temp_v1 - 1 != 0) {
    return;
  }
  if ((param_2[9] != 0) && ((param_2[0xb] & 0x10U) == 0)) {
    FUN_002c415c();
    param_2[9] = 0;
  }
  if (param_2[0x11] != 0) {
    FUN_002c415c();
    param_2[0x11] = 0;
  }
  nn_os_CriticalSection_Enter((unsigned int)DAT_00465124);
  if ((((unsigned int)param_2 < DAT_00465144) || ((int *)(DAT_00465154 + (int)DAT_00465144) < param_2)) &&
     (((unsigned int)param_2 < DAT_00465148 || ((int *)((int)DAT_00465148 + DAT_00465158) < param_2)))) {
    param_2 = (int *)FUN_001246cc(param_2);
  }
  FUN_001245c4(param_2);
  piVar2 = DAT_00465124;
  temp_v1 = DAT_00465124[2];
  DAT_00465124[2] = temp_v1 - 1;
  if (temp_v1 - 1 != 0) {
    return;
  }
  piVar2[1] = 0;
  do {
    temp_v2 = *piVar2;
    temp_v1 = -temp_v2;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = temp_v1;
  if (temp_v2 != -1 && 0 < temp_v1) {
    FUN_002a8554(DAT_00471b58,piVar2,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}

} /* extern "C" */
