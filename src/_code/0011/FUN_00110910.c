/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110910` (_code @ 0x110910, 0x304 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0011d8d8; /* 0x11d8d8 */
extern unsigned char LAB_0011d8dc; /* 0x11d8dc */
extern unsigned char LAB_0011d8e0; /* 0x11d8e0 */
extern unsigned char LAB_00123bdc; /* 0x123bdc */
extern unsigned char LAB_00123bf4; /* 0x123bf4 */
extern unsigned char LAB_00123c0c; /* 0x123c0c */

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_0012f36c. */
/* Supplied declaration required: FUN_001407e8. */
/* Supplied declaration required: FUN_002bb0b4. */
/* Supplied declaration required: FUN_002bb170. */
extern unsigned int FUN_002bb218(void);
/* Supplied declaration required: FUN_002bf774. */
/* Supplied declaration required: FUN_002c5f58. */
/* Supplied declaration required: FUN_002c68bc. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00110910(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int iStack_620;
  unsigned int temp_v5 [383];
  
  temp_v4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      FUN_0012f36c(*(int *)(param_1 + 0x24) + (temp_v4 & 0xffffff) * 0x48);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(unsigned int *)(param_1 + 0x20));
  }
  if (*(unsigned int *)(param_1 + 0x30) >= 2) {
    FUN_002c5f58(&iStack_620,&LAB_00123bf4,0xc,0x80);
    temp_v0 = *(int *)(param_1 + 0x30);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0x34);
      FUN_002bb170(param_1 + 0x30);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x3c) + *(int *)(temp_v2 - 0x84);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      FUN_002bf774(&iStack_620 + temp_v0 * 3,(int)temp_v5 + temp_v0 * 0xc,temp_v2);
      temp_v0 = *(int *)(param_1 + 0x30);
    }
    temp_v0 = 0;
    do {
      if ((&iStack_620)[temp_v0 * 3] != 0) {
        do {
          temp_v3 = *(unsigned int *)((int)temp_v5 + temp_v0 * 0xc);
          FUN_002bb170(&iStack_620 + temp_v0 * 3);
          FUN_002bf774(param_1 + 0x30,param_1 + 0x34,temp_v3);
        } while ((&iStack_620)[temp_v0 * 3] != 0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
    FUN_002c68bc(&iStack_620,&LAB_0011d8dc,0xc,0x80);
  }
  if (*(unsigned int *)(param_1 + 0x50) >= 2) {
    FUN_002c5f58(&iStack_620,&LAB_00123c0c,0xc,0x80);
    temp_v0 = *(int *)(param_1 + 0x50);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0x54);
      FUN_002bb170(param_1 + 0x50);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x3c) + *(int *)(temp_v2 - 0x84);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      FUN_002bf774(&iStack_620 + temp_v0 * 3,(int)temp_v5 + temp_v0 * 0xc,temp_v2);
      temp_v0 = *(int *)(param_1 + 0x50);
    }
    temp_v0 = 0;
    do {
      if ((&iStack_620)[temp_v0 * 3] != 0) {
        do {
          temp_v3 = *(unsigned int *)((int)temp_v5 + temp_v0 * 0xc);
          FUN_002bb170(&iStack_620 + temp_v0 * 3);
          FUN_002bf774(param_1 + 0x50,param_1 + 0x54,temp_v3);
        } while ((&iStack_620)[temp_v0 * 3] != 0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
    FUN_002c68bc(&iStack_620,&LAB_0011d8e0,0xc,0x80);
  }
  if (*(unsigned int *)(param_1 + 0x70) >= 2) {
    FUN_002c5f58(&iStack_620,&LAB_00123bdc,0xc,0x80);
    temp_v0 = *(int *)(param_1 + 0x70);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0x74);
      FUN_002bb170(param_1 + 0x70);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x3c) + *(int *)(temp_v2 - 0x84);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      FUN_002bf774(&iStack_620 + temp_v0 * 3,(int)temp_v5 + temp_v0 * 0xc,temp_v2);
      temp_v0 = *(int *)(param_1 + 0x70);
    }
    temp_v0 = 0;
    do {
      if ((&iStack_620)[temp_v0 * 3] != 0) {
        do {
          temp_v3 = *(unsigned int *)((int)temp_v5 + temp_v0 * 0xc);
          FUN_002bb170(&iStack_620 + temp_v0 * 3);
          FUN_002bf774(param_1 + 0x70,param_1 + 0x74,temp_v3);
        } while ((&iStack_620)[temp_v0 * 3] != 0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
    FUN_002c68bc(&iStack_620,&LAB_0011d8d8,0xc,0x80);
  }
  temp_v3 = FUN_002bb218();
  FUN_001407e8();
  FUN_002bb0b4(temp_v3,0);
  return;
}
