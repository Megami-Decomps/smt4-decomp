/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048389c` (_code @ 0x48389c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_0040aa6c(void);
int FUN_0040aad4(unsigned int, int);
int FUN_0040ace8(unsigned int, int);

extern unsigned char LAB_0048394c; /* 0x48394c */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


void FUN_0048389c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x20;
  FUN_00178b04(0x20,&LAB_0048394c,0xe2);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0040ac08();
  }
  *(unsigned int *)(param_1 + 0x98) = temp_v1;
  FUN_0040aa6c();
  FUN_0040aad4(*(unsigned int *)(param_1 + 0x98),0);
  temp_v0 = *(int *)(*(int *)(param_1 + 0x98) + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  temp_v0 = 0x20;
  FUN_00178b04(0x20,&LAB_0048394c,0xec);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0040ac08();
  }
  *(unsigned int *)(param_1 + 0x9c) = temp_v1;
  FUN_0040aa6c();
  FUN_0040aad4(*(unsigned int *)(param_1 + 0x9c),0);
  temp_v0 = *(int *)(*(int *)(param_1 + 0x9c) + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  return;
}

} /* extern "C" */
