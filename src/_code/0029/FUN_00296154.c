/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296154` (_code @ 0x296154, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00296154_arg1 fn_00296154_arg1;
struct fn_00296154_arg1 {
    unsigned char pad_0x0[0x8];
    ushort field_0x8; /* +0x8 */
    ushort field_0xa; /* +0xa */
    short *field_0xc; /* +0xc */
};

extern int FUN_002bf6d0(fn_00296154_arg1 *, unsigned int);


void FUN_00296154(int param_1,fn_00296154_arg1 *param_2,unsigned int param_3)

{
  short temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  short *psVar5;
  
  temp_v3 = FUN_002bf6d0(param_2,param_3);
  psVar5 = *(short **)(temp_v3 + 0xc);
  if (psVar5 != (short *)0x0) {
    temp_v0 = *(short *)(temp_v3 + 10);
    temp_v2 = psVar5[1];
    *(short *)(param_1 + 0x18) = *(short *)(temp_v3 + 8) + *psVar5 / 2;
    *(short *)(param_1 + 0x1a) = temp_v0 + temp_v2 / 2;
    return;
  }
  temp_v1 = *(unsigned short *)(temp_v3 + 6);
  temp_v0 = *(short *)(temp_v3 + 10);
  *(short *)(param_1 + 0x18) =
       *(short *)(temp_v3 + 8) + (short)((*(unsigned short *)(temp_v3 + 4) & 0xffff7fff) >> 1);
  *(short *)(param_1 + 0x1a) = temp_v0 + (short)((temp_v1 & 0xffff7fff) >> 1);
  return;
}
