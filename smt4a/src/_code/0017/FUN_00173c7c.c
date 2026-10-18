/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00173c7c` (_code @ 0x173c7c, 0x2a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int FUN_00175678(void);
/* Supplied declaration required: FUN_0018fe70. */
extern unsigned int FUN_001911a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001912cc. */
/* Supplied declaration required: FUN_001914b8. */
/* Supplied declaration required: FUN_00191518. */
/* Supplied declaration required: FUN_001915bc. */
extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Finalize. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2AC900. */


void FUN_00173c7c(int param_1)

{
/* irregular: 9 native warning(s); review required */
  long long temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0xf0) = 0;
  temp_v5 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      FUN_0018fe70(*(int *)(param_1 + 0x1c) + temp_v5 * 0x5c,0);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(unsigned int *)(param_1 + 0x18));
  }
  temp_v1 = FUN_00175678();
  temp_v2 = FUN_001911a4(temp_v1,1);
  FUN_001912cc(temp_v1,temp_v2);
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    piVar5 = *(int **)(param_1 + 0x20);
    temp_v8 = 0;
    temp_v5 = (unsigned int)(((unsigned long long)*(unsigned int *)(param_1 + 0x24) * 0x2d02d02d + 0x2d02d02d) >> 0x27);
    if (temp_v5 != 0) {
      do {
        (**(romwright_code **)(*piVar5 + 4))(piVar5);
        temp_v8 = temp_v8 + 1;
        piVar5 = piVar5 + 0xb6;
      } while (temp_v8 < temp_v5);
    }
    nw_ut_internal_LinkListImpl_erase_2AC900
              (param_1 + 0x34,*(unsigned int *)(param_1 + 0x38),param_1 + 0x38);
    nw_ut_internal_LinkListImpl_erase_2AC900
              (param_1 + 0x28,*(unsigned int *)(param_1 + 0x2c),param_1 + 0x2c);
    temp_v6 = *(int *)(param_1 + 0x4c);
    temp_v8 = 0;
    temp_v7 = *(unsigned int *)(param_1 + 0x50) * -0xf0f0f0f;
    temp_v5 = *(unsigned int *)(param_1 + 0x50) / 0x88;
    if (temp_v5 != 0) {
      do {
        FUN_001914b8(temp_v6,temp_v7);
        temp_v8 = temp_v8 + 1;
        temp_v6 = temp_v6 + 0x88;
        temp_v7 = temp_v3;
      } while (temp_v8 < temp_v5);
    }
    nw_ut_internal_LinkListImpl_erase_2AC900
              (param_1 + 0x54,*(unsigned int *)(param_1 + 0x58),param_1 + 0x58);
    temp_v1 = FUN_001b1f04();
    FUN_00191518(temp_v1,param_1 + 0x40);
    FUN_001915bc(param_1 + 0xf4,*(unsigned int *)(param_1 + 0x104),*(unsigned int *)(param_1 + 0x108));
    piVar5 = *(int **)(param_1 + 0x6c);
    temp_v8 = 0;
    temp_v5 = *(unsigned int *)(param_1 + 0x70) / 0x1e8;
    if (temp_v5 != 0) {
      do {
        (**(romwright_code **)(*piVar5 + 4))(piVar5);
        temp_v8 = temp_v8 + 1;
        piVar5 = piVar5 + 0x7a;
      } while (temp_v8 < temp_v5);
    }
    nw_ut_internal_LinkListImpl_erase_2AC900
              (param_1 + 0x80,*(unsigned int *)(param_1 + 0x84),param_1 + 0x84);
    nw_ut_internal_LinkListImpl_erase_2AC900
              (param_1 + 0x74,*(unsigned int *)(param_1 + 0x78),param_1 + 0x78);
    temp_v7 = *(int *)(param_1 + 0x98);
    temp_v0 = (unsigned long long)*(unsigned int *)(param_1 + 0x9c) * 0xd79435e5 + 0xd79435e5;
    temp_v1 = (unsigned int)temp_v0;
    temp_v8 = 0;
    temp_v5 = (unsigned int)((unsigned long long)temp_v0 >> 0x26);
    if (temp_v5 != 0) {
      do {
        FUN_001914b8(temp_v7,temp_v1);
        temp_v8 = temp_v8 + 1;
        temp_v7 = temp_v7 + 0x4c;
        temp_v1 = temp_v4;
      } while (temp_v8 < temp_v5);
    }
    nw_ut_internal_LinkListImpl_erase_2AC900
              (param_1 + 0xa0,*(unsigned int *)(param_1 + 0xa4),param_1 + 0xa4);
    temp_v1 = FUN_001b1f04();
    FUN_00191518(temp_v1,param_1 + 0x8c);
    nw_snd_internal_driver_StreamBufferPool_Finalize(param_1 + 0xd8);
    piVar5 = *(int **)(param_1 + 0xb8);
    temp_v8 = 0;
    temp_v5 = *(unsigned int *)(param_1 + 0xbc) / 0x3298;
    if (temp_v5 != 0) {
      do {
        (**(romwright_code **)(*piVar5 + 4))(piVar5);
        temp_v8 = temp_v8 + 1;
        piVar5 = piVar5 + 0xca6;
      } while (temp_v8 < temp_v5);
    }
    nw_ut_internal_LinkListImpl_erase_2AC900
              (param_1 + 0xcc,*(unsigned int *)(param_1 + 0xd0),param_1 + 0xd0);
    nw_ut_internal_LinkListImpl_erase_2AC900
              (param_1 + 0xc0,*(unsigned int *)(param_1 + 0xc4),param_1 + 0xc4);
    *(unsigned int *)(param_1 + 0x104) = 0;
    *(unsigned int *)(param_1 + 0x108) = 0;
  }
  return;
}
