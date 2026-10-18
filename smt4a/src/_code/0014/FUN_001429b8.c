/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001429b8` (_code @ 0x1429b8, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char LAB_001536e0; /* 0x1536e0 */
extern int DAT_0061a50c; /* 0x61a50c */

/* Supplied declaration required: FUN_0016117c. */
/* Supplied declaration required: FUN_0016120c. */
/* Supplied declaration required: FUN_00161474. */
/* Supplied declaration required: FUN_001615e4. */
/* Supplied declaration required: FUN_001615fc. */
/* Supplied declaration required: FUN_0016163c. */
/* Supplied declaration required: FUN_0017cff0. */


/* WARNING: Removing unreachable block (ram,0x00161458) */

void FUN_001429b8(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  
  param_1[5] = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  temp_v0 = 0;
  if (param_2 != 0) {
    do {
      param_1[temp_v0] = 0;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (unsigned int)param_1[2]);
  }
  FUN_00161474(param_1[2],param_1);
  temp_v0 = 0;
  if (temp_v0 < (unsigned int)param_1[2]) {
    do {
      FUN_0017cff0(param_1[temp_v0]);
      FUN_0016120c(param_1[3],param_1[4]);
      FUN_001615fc(0x200,0x300);
      FUN_0016117c();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (unsigned int)param_1[2]);
  }
  FUN_0017cff0(*param_1);
  FUN_0016163c();
  FUN_001615e4(&LAB_001536e0);
  if (DAT_0061a50c != 0) {
    *(unsigned char *)(DAT_0061a50c + 0x3c) = 1;
  }
  return;
}
