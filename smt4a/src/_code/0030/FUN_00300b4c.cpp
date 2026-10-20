/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300b4c` (_code @ 0x300b4c, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned char *);
int FUN_002e6e5c(int *);

extern int DAT_00599374; /* 0x599374 */
extern unsigned int *DAT_00599378; /* 0x599378 */
extern unsigned char DAT_0059937c; /* 0x59937c */
extern unsigned char *DAT_005c4c18; /* 0x5c4c18 */
extern unsigned char DAT_006306ac; /* 0x6306ac */

extern unsigned int FUN_00132f3c(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int *FUN_002e760a(unsigned int);


void FUN_00300b4c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,&DAT_006306ac);
  if (DAT_00599374 == 0) {
    puVar1 = (unsigned int *)FUN_002e760a(0x18);
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      temp_v0 = FUN_00132f3c(puVar1,1);
      puVar1[4] = temp_v0;
      *(unsigned int *)temp_v0 = temp_v0;
      *(unsigned int *)(puVar1[4] + 4) = puVar1[4];
      DAT_00599378 = puVar1;
    }
    else {
      DAT_00599378 = (unsigned int *)0x0;
    }
  }
  DAT_00599374 = DAT_00599374 + 1;
  DAT_005c4c18 = &DAT_0059937c;
  FUN_002e6e5c(&uStack_18);
  return;
}

} /* extern "C" */
