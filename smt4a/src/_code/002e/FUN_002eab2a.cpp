/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eab2a` (_code @ 0x2eab2a, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010788a(int);
int FUN_00107b28(int);
int FUN_002efa58(int *, int, int);
int _ZNSt6vectorIb12AsdAllocatorIbEE9referenceaSEb(int *, int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0010788a. */
/* Supplied declaration required: FUN_00107b28. */
extern unsigned long long FUN_002efa1c(void);
extern int maskSourceHasAnyBit(int, unsigned int, unsigned int, unsigned int);
extern int *arrayElementAddress_002efa50(int, unsigned int);
/* Supplied declaration required: FUN_002efa58. */
extern int bitFieldTest(int *);
/* Supplied declaration required: _ZNSt6vectorIb12AsdAllocatorIbEE9referenceaSEb. */


unsigned long long FUN_002eab2a(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned long long temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v2 = param_1;
  temp_v3 = param_2;
  temp_v4 = param_3;
  temp_v5 = param_4;
  temp_v1 = FUN_002efa1c();
  if ((int)temp_v1 != 0) {
    temp_v0 = maskSourceHasAnyBit(param_1,(int)((unsigned long long)temp_v1 >> 0x20),0x4000000,0);
    if (temp_v0 != 0) {
      FUN_0010788a(param_1);
    }
    else {
      piVar2 = (int *)arrayElementAddress_002efa50(param_1 + 0x90,0);
      if (*piVar2 != 0) {
        FUN_002efa58(&temp_v4,param_1 + 0x164,0);
        temp_v2 = temp_v4;
        temp_v3 = temp_v5;
        temp_v0 = bitFieldTest(&temp_v2);
        if (temp_v0 != 0) {
          FUN_002efa58(&temp_v4,param_1 + 0x164,0);
          temp_v3 = temp_v5;
          temp_v2 = temp_v4;
          _ZNSt6vectorIb12AsdAllocatorIbEE9referenceaSEb(&temp_v2,0);
          FUN_00107b28(param_1);
          return romwright_piece_4_4(temp_v3,temp_v2);
        }
      }
    }
  }
  return romwright_piece_4_4(temp_v3,temp_v2);
}

} /* extern "C" */
