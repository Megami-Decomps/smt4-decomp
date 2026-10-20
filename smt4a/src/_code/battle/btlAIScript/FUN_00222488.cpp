/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222488` (_code @ 0x222488, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0014aa78(void);
int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_0019cac4(unsigned int);
int FUN_002e342c(int *, unsigned char [132]);
int FUN_002e6354(unsigned char [132], int);

extern int DAT_00570280; /* 0x570280 */
extern int *DAT_00571130; /* 0x571130 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_00240c34(unsigned char *);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_0046c474(int, unsigned short);


void FUN_00222488(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [132];
  
  piVar1 = DAT_00571130;
  if (DAT_00571130 != (int *)0x0) {
    if (DAT_00571130[1] != 0) {
      FUN_0019c364();
      piVar1[1] = 0;
    }
    if (*piVar1 != 0) {
      FUN_0019a5a0();
      *piVar1 = 0;
    }
    piVar1[3] = 1;
    *(unsigned int *)(DAT_00570280 + 0x460) = 0xffffffff;
    FUN_0014aa78();
    temp_v0 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x28) + 2);
    FUN_0019cac4(temp_v0);
    FUN_002e6354(temp_v2,0x80);
    FUN_00100388(temp_v2,"battle/AI/%s.bf",temp_v0 + 0x8e);
    temp_v1 = FUN_00240c34(temp_v2);
    if (temp_v1 == 0) {
      FUN_00100388(temp_v2,"battle/AI/tmp.bf");
    }
    FUN_002e342c(piVar1 + 4,temp_v2);
    temp_v1 = FUN_0046c474(DAT_00570280,*(unsigned short *)(*(int *)(param_1 + 0x28) + 2));
    if (temp_v1 != 0) {
      *(unsigned int *)(DAT_00570280 + 0x460) = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x28) + 2);
    }
  }
  return;
}

} /* extern "C" */
