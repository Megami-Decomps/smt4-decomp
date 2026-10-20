/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001247f4` (_code @ 0x1247f4, 0xba bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNewC(void);
int libc_strcmp(int, unsigned char *);
int FUN_0030eca8(int *);
int FUN_0030ed04(int *, int, int);

extern unsigned char LAB_001248b0; /* 0x1248b0 */
extern unsigned char LAB_001248b4; /* 0x1248b4 */
extern unsigned char DAT_0055780c; /* 0x55780c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int *FUN_002e2a98(void);
/* Supplied declaration required: asdOperatorNewC. */
/* Supplied declaration required: libc_strcmp. */
/* Supplied declaration required: FUN_0030eca8. */
/* Supplied declaration required: FUN_0030ed04. */


unsigned long long FUN_001247f4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v1 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  libc_strcmp(param_1,&LAB_001248b0);
  if ((temp_v1 != 0) && (temp_v1 = param_1, libc_strcmp(param_1,&LAB_001248b4), temp_v1 != 0)) {
    temp_v1 = 0x200;
    asdOperatorNewC();
    FUN_0030ed04(&uStack_20,param_1,2);
    temp_v5 = 0;
    piVar3 = (int *)FUN_002e2a98();
    do {
      temp_v0 = *(unsigned char *)(*piVar3 + temp_v5);
      temp_v2 = (unsigned int)temp_v0;
      temp_v4 = (unsigned short)((int)(temp_v2 << 0x1f) < 0);
      if ((temp_v0 & 0x3e) != 0) {
        temp_v4 = temp_v4 | 2;
      }
      if ((temp_v0 & 0x40) != 0) {
        temp_v4 = temp_v4 | 4;
      }
      if ((temp_v0 & 0x10) != 0) {
        temp_v4 = temp_v4 | 8;
      }
      if ((temp_v0 & 8) != 0) {
        temp_v4 = temp_v4 | 0x10;
      }
      if ((temp_v0 & 0x98) != 0) {
        temp_v4 = temp_v4 | 0x20;
      }
      if (temp_v2 == 0x20) {
        temp_v4 = temp_v4 | 0x40;
      }
      if ((temp_v0 & 2) != 0) {
        temp_v4 = temp_v4 | 0x80;
      }
      if ((((temp_v2 << 2) ^ temp_v2) & 0x80) != 0) {
        temp_v4 = temp_v4 | 0x100;
      }
      temp_v3 = temp_v5 * 2;
      temp_v5 = temp_v5 + 1;
      *(unsigned short *)(temp_v1 + temp_v3) = temp_v4;
    } while (temp_v5 != 0x100);
    FUN_0030eca8(&uStack_20);
    return romwright_piece_4_4(uStack_20,temp_v1);
  }
  return romwright_piece_4_4(uStack_20,&DAT_0055780c);
}

} /* extern "C" */
