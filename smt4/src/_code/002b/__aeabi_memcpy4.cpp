/* NON_MATCHING: romwright 0.5.0 decompilation of `__aeabi_memcpy4` (_code @ 0x2bcd68, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int HintPreloadData(unsigned char *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long __aeabi_memcpy4(unsigned int *param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  
  temp_v0 = param_3 - 0x20;
  if (param_3 >= 0x20) {
    param_4 = *(unsigned int *)param_2;
    temp_v2 = *(unsigned int *)(param_2 + 4);
    temp_v3 = *(unsigned int *)(param_2 + 8);
    temp_v4 = *(unsigned int *)(param_2 + 0xc);
    HintPreloadData(param_2 + 0x50);
    temp_v5 = *(unsigned int *)(param_2 + 0x10);
    temp_v6 = *(unsigned int *)(param_2 + 0x14);
    temp_v7 = *(unsigned int *)(param_2 + 0x18);
    temp_v8 = *(unsigned int *)(param_2 + 0x1c);
    param_2 = param_2 + 0x20;
    while( 1 ) {
      *param_1 = param_4;
      param_1[1] = temp_v2;
      param_1[2] = temp_v3;
      param_1[3] = temp_v4;
      temp_v9 = temp_v0 >= 0x20;
      temp_v0 = temp_v0 - 0x20;
      param_1[4] = temp_v5;
      param_1[5] = temp_v6;
      param_1[6] = temp_v7;
      param_1[7] = temp_v8;
      param_1 = param_1 + 8;
      if (temp_v9) {
        param_4 = *(unsigned int *)param_2;
        temp_v2 = *(unsigned int *)(param_2 + 4);
        temp_v3 = *(unsigned int *)(param_2 + 8);
        temp_v4 = *(unsigned int *)(param_2 + 0xc);
        param_2 = param_2 + 0x10;
      }
      HintPreloadData(param_2 + 0x40);
      if (!temp_v9) break;
      temp_v5 = *(unsigned int *)param_2;
      temp_v6 = *(unsigned int *)(param_2 + 4);
      temp_v7 = *(unsigned int *)(param_2 + 8);
      temp_v8 = *(unsigned int *)(param_2 + 0xc);
      param_2 = param_2 + 0x10;
    }
  }
  if ((unsigned char)((unsigned char)(temp_v0 >> 4) & 1)) {
    param_4 = *(unsigned int *)param_2;
    temp_v2 = *(unsigned int *)(param_2 + 4);
    temp_v3 = *(unsigned int *)(param_2 + 8);
    temp_v4 = *(unsigned int *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *param_1 = param_4;
    param_1[1] = temp_v2;
    param_1[2] = temp_v3;
    param_1[3] = temp_v4;
    param_1 = param_1 + 4;
  }
  if ((int)(temp_v0 << 0x1c) < 0) {
    param_4 = *(unsigned int *)param_2;
    temp_v2 = *(unsigned int *)(param_2 + 4);
    param_2 = param_2 + 8;
    *param_1 = param_4;
    param_1[1] = temp_v2;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  pbVar3 = param_2;
  if ((unsigned char)((unsigned char)(temp_v0 >> 2) & 1)) {
    pbVar3 = param_2 + 4;
    param_4 = *(unsigned int *)param_2;
    puVar2 = param_1 + 1;
    *param_1 = param_4;
  }
  temp_v1 = (unsigned short)param_4;
  if ((temp_v0 & 3) != 0) {
    temp_v10 = (unsigned char)((unsigned char)(temp_v0 >> 1) & 1);
    temp_v0 = temp_v0 << 0x1f;
    temp_v9 = (int)temp_v0 < 0;
    pbVar4 = pbVar3;
    if (temp_v10) {
      pbVar4 = pbVar3 + 2;
      temp_v1 = *(unsigned short *)pbVar3;
    }
    pbVar3 = pbVar4;
    if (temp_v9) {
      pbVar3 = pbVar4 + 1;
      temp_v0 = (unsigned int)*pbVar4;
    }
    puVar1 = puVar2;
    if (temp_v10) {
      puVar1 = (unsigned int *)((int)puVar2 + 2);
      *(unsigned short *)puVar2 = temp_v1;
    }
    puVar2 = puVar1;
    if (temp_v9) {
      puVar2 = (unsigned int *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)temp_v0;
    }
    return romwright_piece_4_4(pbVar3,puVar2);
  }
  return romwright_piece_4_4(pbVar3,puVar2);
}

} /* extern "C" */
