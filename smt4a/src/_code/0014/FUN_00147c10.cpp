/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147c10` (_code @ 0x147c10, 0x2b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00173818(unsigned int);
int FUN_0018c87c(...);
int FUN_001911a4(...);
int FUN_00191260(void);
int FUN_002f5020(...);
int UnsignedDoesSaturate(...);
int UnsignedSaturate(...);
int nw_ut_internal_LinkListImpl_insert(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_00161d74; /* 0x161d74 */
extern unsigned char LAB_00161d8c; /* 0x161d8c */
extern unsigned char LAB_00161da4; /* 0x161da4 */

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_00173818. */
extern unsigned int objectCommandQueueGet(void);
/* Supplied declaration required: FUN_0018c87c. */
/* Supplied declaration required: FUN_001911a4. */
/* Supplied declaration required: FUN_00191260. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00147c10(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int iStack_620;
  unsigned int temp_v5 [383];
  
  temp_v4 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      FUN_00173818(*(int *)(param_1 + 0x1c) + (temp_v4 & 0xffffff) * 0x5c);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(unsigned int *)(param_1 + 0x18));
  }
  if (*(unsigned int *)(param_1 + 0x28) >= 2) {
    FUN_002f5020(&iStack_620,&LAB_00161d8c,0xc,0x80);
    temp_v0 = *(int *)(param_1 + 0x28);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0x2c);
      FUN_0018c87c(param_1 + 0x28);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x5b) + *(int *)(temp_v2 - 0xa8);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      nw_ut_internal_LinkListImpl_insert
                (&iStack_620 + temp_v0 * 3,(int)temp_v5 + temp_v0 * 0xc,temp_v2);
      temp_v0 = *(int *)(param_1 + 0x28);
    }
    temp_v0 = 0;
    do {
      if ((&iStack_620)[temp_v0 * 3] != 0) {
        do {
          temp_v3 = *(unsigned int *)((int)temp_v5 + temp_v0 * 0xc);
          FUN_0018c87c(&iStack_620 + temp_v0 * 3);
          nw_ut_internal_LinkListImpl_insert(param_1 + 0x28,param_1 + 0x2c,temp_v3);
        } while ((&iStack_620)[temp_v0 * 3] != 0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
  }
  if (*(unsigned int *)(param_1 + 0x74) >= 2) {
    FUN_002f5020(&iStack_620,&LAB_00161da4,0xc,0x80);
    temp_v0 = *(int *)(param_1 + 0x74);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0x78);
      FUN_0018c87c(param_1 + 0x74);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x5b) + *(int *)(temp_v2 - 0xa8);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      nw_ut_internal_LinkListImpl_insert
                (&iStack_620 + temp_v0 * 3,(int)temp_v5 + temp_v0 * 0xc,temp_v2);
      temp_v0 = *(int *)(param_1 + 0x74);
    }
    temp_v0 = 0;
    do {
      if ((&iStack_620)[temp_v0 * 3] != 0) {
        do {
          temp_v3 = *(unsigned int *)((int)temp_v5 + temp_v0 * 0xc);
          FUN_0018c87c(&iStack_620 + temp_v0 * 3);
          nw_ut_internal_LinkListImpl_insert(param_1 + 0x74,param_1 + 0x78,temp_v3);
        } while ((&iStack_620)[temp_v0 * 3] != 0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
  }
  if (*(unsigned int *)(param_1 + 0xc0) >= 2) {
    FUN_002f5020(&iStack_620,&LAB_00161d74,0xc,0x80);
    temp_v0 = *(int *)(param_1 + 0xc0);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0xc4);
      FUN_0018c87c(param_1 + 0xc0);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x5b) + *(int *)(temp_v2 - 0xa8);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      nw_ut_internal_LinkListImpl_insert
                (&iStack_620 + temp_v0 * 3,(int)temp_v5 + temp_v0 * 0xc,temp_v2);
      temp_v0 = *(int *)(param_1 + 0xc0);
    }
    temp_v0 = 0;
    do {
      if ((&iStack_620)[temp_v0 * 3] != 0) {
        do {
          temp_v3 = *(unsigned int *)((int)temp_v5 + temp_v0 * 0xc);
          FUN_0018c87c(&iStack_620 + temp_v0 * 3);
          nw_ut_internal_LinkListImpl_insert(param_1 + 0xc0,param_1 + 0xc4,temp_v3);
        } while ((&iStack_620)[temp_v0 * 3] != 0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
  }
  temp_v3 = objectCommandQueueGet();
  FUN_00191260();
  FUN_001911a4(temp_v3,0);
  return;
}

} /* extern "C" */
