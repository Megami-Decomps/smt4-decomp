/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001238bc` (_code @ 0x1238bc, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int FUN_002e6e5c(int *);
int __aeabi_uidivmod(...);

extern int DAT_00594b00; /* 0x594b00 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_001239a2(int, unsigned int);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: __aeabi_uidivmod. */


unsigned long long FUN_001238bc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&uStack_20,param_1 + 4);
  temp_v3 = 0;
  while( 1 ) {
    if (*(unsigned int *)(param_1 + 0x3c) <= temp_v3) {
      DAT_00594b00 = DAT_00594b00 + 1;
      FUN_002e6e5c(&uStack_20);
      return romwright_piece_4_4(uStack_20,0xffff);
    }
    __aeabi_uidivmod(temp_v3 + DAT_00594b00);
    temp_v0 = FUN_001239a2(param_1,*(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v1 * 4));
    if (temp_v0 != 0) break;
    temp_v3 = temp_v3 + 1;
  }
  __aeabi_uidivmod(temp_v3 + DAT_00594b00,*(unsigned int *)(param_1 + 0x3c));
  FUN_002e6e5c(&uStack_20);
  return romwright_piece_4_4(uStack_20,temp_v2) & 0xffffffff0000ffff;
}

} /* extern "C" */
