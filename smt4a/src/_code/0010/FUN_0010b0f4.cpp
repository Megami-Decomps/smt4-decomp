/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b0f4` (_code @ 0x10b0f4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010cd2c(unsigned int, unsigned int *);
int FUN_002e9318(int *);
int FUN_002ea0e4(int *);
int FUN_002f42be(int *, unsigned char *, unsigned char *, int);

extern unsigned char LAB_0010b144; /* 0x10b144 */
extern unsigned char DAT_0059935c; /* 0x59935c */
extern unsigned char DAT_00630430; /* 0x630430 */

/* Supplied declaration required: FUN_0010cd2c. */
extern unsigned int *FUN_002e9300(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002ea0e4. */
extern unsigned int FUN_002eac34(unsigned char);
/* Supplied declaration required: FUN_002f42be. */


void FUN_0010b0f4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int uStack_18;
  unsigned int uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  if ((*(int *)((unsigned char *)&DAT_0059935c + 0x10)) != 0) {
    FUN_002ea0e4(&uStack_18);
    FUN_002f42be(&uStack_18,&LAB_0010b144,&DAT_00630430,(*(int *)((unsigned char *)&DAT_0059935c + 0x10)));
    temp_v0 = FUN_002eac34(*(unsigned char *)(param_1 + 0x24));
    puVar2 = (unsigned int *)&uStack_18;
  }
  else {
    puVar2 = (unsigned int *)FUN_002e9300((unsigned int *)&uStack_18,&DAT_00630430);
    temp_v0 = FUN_002eac34(*(unsigned char *)(param_1 + 0x24));
  }
  FUN_0010cd2c(temp_v0,puVar2);
  FUN_002e9318(&uStack_18);
  return;
}

} /* extern "C" */
