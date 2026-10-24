/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj559edcC1Ev` (_code @ 0x117b3c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012cfde(int, int);
int vectorDestroyWords(unsigned char [12]);

extern unsigned char DAT_00559ee4; /* 0x559ee4 */

/* Supplied declaration required: FUN_0012cfde. */
extern unsigned int vectorInitEmpty(unsigned char *);
/* Supplied declaration required: vectorDestroyWords. */
extern int _ZN9Obj55aff4C1Ev(unsigned int *);
extern int _ZN12ZeroWordPairC1Ev(int);
extern int _ZN9Obj55b104C1Ejj(int, unsigned int);
extern int _ZN9Obj5596acC1EhRK10WordVector(int, unsigned int, unsigned int);
extern int _ZN15Obj55aff4VectorC1Ej(int, unsigned int);


int _ZN9Obj559edcC1Ev(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned char temp_v3 [12];
  
  *param_1 = (unsigned int)&DAT_00559ee4;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = _ZN9Obj55aff4C1Ev(param_1 + 6);
  temp_v0 = _ZN9Obj55b104C1Ejj(temp_v0 + 0xc,0);
  temp_v1 = vectorInitEmpty(temp_v2);
  temp_v0 = _ZN9Obj5596acC1EhRK10WordVector(temp_v0 + 0x20,3,temp_v1);
  vectorDestroyWords(temp_v2);
  temp_v1 = vectorInitEmpty(temp_v3);
  temp_v0 = _ZN9Obj5596acC1EhRK10WordVector(temp_v0 + 0x14,3,temp_v1);
  vectorDestroyWords(temp_v3);
  temp_v0 = _ZN12ZeroWordPairC1Ev(temp_v0 + 0x18);
  temp_v0 = _ZN12ZeroWordPairC1Ev(temp_v0 + 8);
  temp_v0 = _ZN12ZeroWordPairC1Ev(temp_v0 + 0x18);
  temp_v0 = _ZN12ZeroWordPairC1Ev(temp_v0 + 8);
  temp_v0 = _ZN15Obj55aff4VectorC1Ej(temp_v0 + 8,0);
  temp_v0 = temp_v0 + 0xc;
  FUN_0012cfde(temp_v0,0);
  return temp_v0 - 0xac;
}

} /* extern "C" */
