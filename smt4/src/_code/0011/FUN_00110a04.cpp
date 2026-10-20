/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110a04` (_code @ 0x110a04, 0x304 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00140e78(void);
int FUN_002bad74(...);
int FUN_002c5d5c(...);
int rt_vec_dtor(...);
int UnsignedDoesSaturate(...);
int UnsignedSaturate(...);
int nw_snd_SoundPlayer_Update(unsigned int);
int nw_ut_internal_LinkListImpl_erase_2BAE30(...);
int nw_ut_internal_LinkListImpl_insert(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0011d9b8; /* 0x11d9b8 */
extern unsigned char LAB_0011d9bc; /* 0x11d9bc */
extern unsigned char LAB_0011d9c0; /* 0x11d9c0 */
extern unsigned char LAB_00123cb8; /* 0x123cb8 */
extern unsigned char LAB_00123cd0; /* 0x123cd0 */
extern unsigned char LAB_00123ce8; /* 0x123ce8 */

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_00140e78. */
/* Supplied declaration required: FUN_002bad74. */
extern unsigned int FUN_002baed8(void);
/* Supplied declaration required: FUN_002c5d5c. */
/* Supplied declaration required: rt_vec_dtor. */
/* Supplied declaration required: nw_snd_SoundPlayer_Update. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2BAE30. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00110a04(int param_1)

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
      nw_snd_SoundPlayer_Update(*(int *)(param_1 + 0x24) + (temp_v4 & 0xffffff) * 0x48);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(unsigned int *)(param_1 + 0x20));
  }
  if (*(unsigned int *)(param_1 + 0x30) >= 2) {
    FUN_002c5d5c(&iStack_620,&LAB_00123cd0,0xc,0x80);
    temp_v0 = *(int *)(param_1 + 0x30);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0x34);
      nw_ut_internal_LinkListImpl_erase_2BAE30(param_1 + 0x30);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x3c) + *(int *)(temp_v2 - 0x84);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      nw_ut_internal_LinkListImpl_insert
                (&iStack_620 + temp_v0 * 3,(int)temp_v5 + temp_v0 * 0xc,temp_v2);
      temp_v0 = *(int *)(param_1 + 0x30);
    }
    temp_v0 = 0;
    do {
      if ((&iStack_620)[temp_v0 * 3] != 0) {
        do {
          temp_v3 = *(unsigned int *)((int)temp_v5 + temp_v0 * 0xc);
          nw_ut_internal_LinkListImpl_erase_2BAE30(&iStack_620 + temp_v0 * 3);
          nw_ut_internal_LinkListImpl_insert(param_1 + 0x30,param_1 + 0x34,temp_v3);
        } while ((&iStack_620)[temp_v0 * 3] != 0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
    rt_vec_dtor(&iStack_620,&LAB_0011d9bc,0xc,0x80);
  }
  if (*(unsigned int *)(param_1 + 0x50) >= 2) {
    FUN_002c5d5c(&iStack_620,&LAB_00123ce8,0xc,0x80);
    temp_v0 = *(int *)(param_1 + 0x50);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0x54);
      nw_ut_internal_LinkListImpl_erase_2BAE30(param_1 + 0x50);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x3c) + *(int *)(temp_v2 - 0x84);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      nw_ut_internal_LinkListImpl_insert
                (&iStack_620 + temp_v0 * 3,(int)temp_v5 + temp_v0 * 0xc,temp_v2);
      temp_v0 = *(int *)(param_1 + 0x50);
    }
    temp_v0 = 0;
    do {
      if ((&iStack_620)[temp_v0 * 3] != 0) {
        do {
          temp_v3 = *(unsigned int *)((int)temp_v5 + temp_v0 * 0xc);
          nw_ut_internal_LinkListImpl_erase_2BAE30(&iStack_620 + temp_v0 * 3);
          nw_ut_internal_LinkListImpl_insert(param_1 + 0x50,param_1 + 0x54,temp_v3);
        } while ((&iStack_620)[temp_v0 * 3] != 0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
    rt_vec_dtor(&iStack_620,&LAB_0011d9c0,0xc,0x80);
  }
  if (*(unsigned int *)(param_1 + 0x70) >= 2) {
    FUN_002c5d5c(&iStack_620,&LAB_00123cb8,0xc,0x80);
    temp_v0 = *(int *)(param_1 + 0x70);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0x74);
      nw_ut_internal_LinkListImpl_erase_2BAE30(param_1 + 0x70);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x3c) + *(int *)(temp_v2 - 0x84);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      nw_ut_internal_LinkListImpl_insert
                (&iStack_620 + temp_v0 * 3,(int)temp_v5 + temp_v0 * 0xc,temp_v2);
      temp_v0 = *(int *)(param_1 + 0x70);
    }
    temp_v0 = 0;
    do {
      if ((&iStack_620)[temp_v0 * 3] != 0) {
        do {
          temp_v3 = *(unsigned int *)((int)temp_v5 + temp_v0 * 0xc);
          nw_ut_internal_LinkListImpl_erase_2BAE30(&iStack_620 + temp_v0 * 3);
          nw_ut_internal_LinkListImpl_insert(param_1 + 0x70,param_1 + 0x74,temp_v3);
        } while ((&iStack_620)[temp_v0 * 3] != 0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
    rt_vec_dtor(&iStack_620,&LAB_0011d9b8,0xc,0x80);
  }
  temp_v3 = FUN_002baed8();
  FUN_00140e78();
  FUN_002bad74(temp_v3,0);
  return;
}

} /* extern "C" */
