/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001112f0` (_code @ 0x1112f0, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001111f8(int *, unsigned int *);
int asdOperatorDeleteArray(int);
int vectorDestroyBytes(...);
int FUN_002fb244(unsigned int *);
int FUN_002fb25c(unsigned int, unsigned int);
int FUN_0043afa0(unsigned int *);

extern unsigned char DAT_00559454; /* 0x559454 */
extern unsigned char DAT_00594a58; /* 0x594a58 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001111f8. */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: vectorDestroyBytes. */
extern int FUN_002f5966(int);
/* Supplied declaration required: FUN_002fb244. */
/* Supplied declaration required: FUN_002fb25c. */
extern int FUN_002fd02a(int);
/* Supplied declaration required: FUN_0043afa0. */
extern int FUN_0043b044(int);


unsigned long long
FUN_001112f0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  *param_1 = (unsigned int)&DAT_00559454;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_001111f8(&uStack_20,param_1);
  if (param_1[0x12] != 0) {
    FUN_002fb244(param_1 + 0x12);
  }
  if (param_1[0x427] != 0) {
    temp_v0 = vectorDestroyBytes(param_1[0x427] + 4);
    asdOperatorDeleteArray(temp_v0 - 4);
  }
  if (*(char *)(param_1 + 0x42d) != '\0') {
    FUN_002fb25c((*(unsigned int *)((unsigned char *)&DAT_00594a58 + 0x64)),param_1[0x42c]);
  }
  FUN_0043afa0(param_1 + 0xe);
  temp_v0 = vectorDestroyBytes(param_1 + 0x428);
  temp_v0 = FUN_002f5966(temp_v0 - 0x44);
  temp_v0 = FUN_002fd02a(temp_v0 - 0x1014);
  temp_v0 = FUN_0043b044(temp_v0 - 0x10);
  return romwright_piece_4_4(uStack_20,temp_v0 - 0x38);
}

} /* extern "C" */
