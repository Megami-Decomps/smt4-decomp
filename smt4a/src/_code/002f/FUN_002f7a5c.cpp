/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7a5c` (_code @ 0x2f7a5c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002edb54(int *, unsigned int, int);

extern unsigned char DAT_0055ae64; /* 0x55ae64 */

extern unsigned int *FUN_002e9f80(void);
extern int *FUN_002ed912(unsigned int *);
/* Supplied declaration required: FUN_002edb54. */
extern unsigned int FUN_002eea7c(int);


int * FUN_002f7a5c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  puVar1 = (unsigned int *)FUN_002e9f80();
  *puVar1 = (unsigned int)&DAT_0055ae64;
  piVar2 = (int *)FUN_002ed912(puVar1 + 3);
  temp_v0 = FUN_002eea7c(param_2);
  FUN_002edb54(piVar2,temp_v0 >> 1,0);
  for (temp_v1 = 0; temp_v1 < temp_v0 >> 1; temp_v1 = temp_v1 + 1) {
    temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 4) + temp_v1 * 4);
    temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 4) + temp_v1 * 4 + 2);
    temp_v3 = temp_v2 - 0x30;
    if (temp_v3 >= 10) {
      temp_v3 = temp_v2 - 0x57;
    }
    temp_v2 = temp_v4 - 0x30;
    if (temp_v2 >= 10) {
      temp_v2 = temp_v4 - 0x57;
    }
    *(unsigned char *)(*piVar2 + temp_v1) = (unsigned char)(temp_v3 << 4) | (unsigned char)temp_v2;
  }
  return piVar2 + -3;
}

} /* extern "C" */
