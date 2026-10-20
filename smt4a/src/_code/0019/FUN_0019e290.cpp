/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019e290` (_code @ 0x19e290, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int, unsigned int, unsigned int, unsigned int);
int asdMemFree(unsigned int *);
int FUN_002e3328(int);
int FUN_004b7a54(void);
int FUN_004b87e4(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned int *DAT_0057f578; /* 0x57f578 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_004b7a54. */
/* Supplied declaration required: FUN_004b87e4. */


void FUN_0019e290(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int unaff_r4;
  
  FUN_004b7a54();
  FUN_004b87e4(param_1);
  if (*(int *)(param_1 + 0x1218) != 0) {
    FUN_002e3328(*(int *)(param_1 + 0x1218));
  }
  *(unsigned int *)(param_1 + 0x1218) = 0;
  puVar1 = DAT_0057f578;
  jobStop(*DAT_0057f578,0,param_3,param_4,unaff_r4);
  asdMemFree(puVar1);
  DAT_0057f578 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
