/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046564c` (_code @ 0x46564c, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001753d4(...);
int __aeabi_vec_ctor_nocookie_nodtor(unsigned char [4], unsigned char *, int, int);
int FUN_00461004(unsigned char *, unsigned int, unsigned int);
int FUN_00461470(unsigned char [12]);
int FUN_004614b4(unsigned char [12]);
int FUN_00461888(...);
int FUN_00508a6c(unsigned char *, int);
int nw_snd_internal_PlayerHeapDataManager_Finalize(unsigned char [12]);
int nw_snd_internal_PlayerHeapDataManager_Initialize(unsigned char [12], unsigned int);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp2D8; /* 0x2d8: local_2d8 */
} param_1_stack;

extern unsigned char LAB_001b1aa8; /* 0x1b1aa8 */

/* Supplied declaration required: FUN_001753d4. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: FUN_00461004. */
/* Supplied declaration required: FUN_00461470. */
/* Supplied declaration required: FUN_004614b4. */
/* Supplied declaration required: FUN_00461888. */
/* Supplied declaration required: FUN_00508a6c. */
/* Supplied declaration required: nw_snd_internal_PlayerHeapDataManager_Finalize. */
/* Supplied declaration required: nw_snd_internal_PlayerHeapDataManager_Initialize. */


void FUN_0046564c(int param_1)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5 [12];
  unsigned char temp_v6 [600];
  unsigned char temp_v7 [4];
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char *temp_v12;
  int temp_v13;
  unsigned char *temp_v14;
  
  FUN_00461470(temp_v5);
  nw_snd_internal_PlayerHeapDataManager_Initialize(temp_v5,*(unsigned int *)(param_1 + 0x1c));
  if ((*(int *)(param_1 + 0x2c) == 0) && (temp_v0 = *(int *)(param_1 + 0x28), temp_v0 != -1)) {
    puVar1 = temp_v6;
    FUN_001753d4(puVar1,temp_v0,*(unsigned int *)(param_1 + 0x78),1,0);
    if (puVar1 == (unsigned char *)0x0) {
      *(unsigned char *)(*(int *)(param_1 + 0x78) + 0x18) = 2;
      *(unsigned char *)(param_1 + 0x7c) = 0;
      FUN_004614b4(temp_v5);
      return;
    }
    puVar1 = temp_v6;
    FUN_00508a6c(puVar1,temp_v0);
    *(unsigned char **)(param_1 + 0x2c) = puVar1;
  }
  temp_v0 = 8;
  __aeabi_vec_ctor_nocookie_nodtor(temp_v7,&LAB_001b1aa8,8,4);
  temp_v14 = temp_v6;
  temp_v1 = 0;
  temp_v13 = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 8;
    if (*(int *)(temp_v2 + 0x34) == 0) {
      temp_v3 = *(int *)(temp_v2 + 0x30);
      if (temp_v3 != -1) {
        temp_v0 = *(int *)(param_1 + 0x78);
        puVar1 = temp_v6;
        FUN_001753d4(puVar1,temp_v3,temp_v0,4,0);
        if (puVar1 != (unsigned char *)0x0) {
          puVar1 = temp_v6;
          FUN_00508a6c(puVar1,temp_v3);
          *(unsigned char **)(temp_v2 + 0x34) = puVar1;
          goto LAB_00465738;
        }
        *(unsigned char *)(*(int *)(param_1 + 0x78) + 0x18) = 2;
        *(unsigned char *)(param_1 + 0x7c) = 0;
        FUN_004614b4(temp_v5);
        return;
      }
    }
    else {
LAB_00465738:
      temp_v4 = *(int *)(temp_v2 + 0x30) != -1;
      if (temp_v4) {
        temp_v0 = *(int *)(temp_v2 + 0x34);
      }
      if (temp_v4 && temp_v0 != 0) {
        puVar1 = temp_v7 + temp_v1 * 8;
        temp_v12 = puVar1;
        FUN_00461888(puVar1,(int)&temp_v13 + temp_v1);
        if ((puVar1 == (unsigned char *)0xffffffff) ||
           (((unsigned char *)0x1 < puVar1 && (puVar1 == (unsigned char *)0x2)))) {
          puVar1 = temp_v6;
          FUN_00461004(puVar1,*(unsigned int *)(temp_v2 + 0x34),*(unsigned int *)(param_1 + 0x78));
          if (puVar1 == (unsigned char *)0x0) {
            *(unsigned char *)(*(int *)(param_1 + 0x78) + 0x18) = 2;
            *(unsigned char *)(param_1 + 0x7c) = 0;
            FUN_004614b4(temp_v5);
            return;
          }
          temp_v0 = *(int *)(temp_v2 + 0x34);
          FUN_00461888(temp_v12,(int)&temp_v13 + temp_v1,temp_v0,*(unsigned int *)(param_1 + 0x1c),
                       temp_v14);
        }
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 4) {
      *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_1 + 0x2c);
      *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x34);
      *(unsigned int *)(param_1 + 100) = temp_v8;
      *(unsigned char *)(param_1 + 0x74) = (unsigned char)temp_v13;
      *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_1 + 0x3c);
      *(unsigned int *)(param_1 + 0x68) = temp_v9;
      *(unsigned char *)(param_1 + 0x75) = (*(unsigned char *)((unsigned char *)&temp_v13 + 1));
      *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(param_1 + 0x44);
      *(unsigned int *)(param_1 + 0x6c) = temp_v10;
      *(unsigned char *)(param_1 + 0x76) = (*(unsigned char *)((unsigned char *)&temp_v13 + 2));
      *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_1 + 0x4c);
      *(unsigned int *)(param_1 + 0x70) = temp_v11;
      *(unsigned char *)(param_1 + 0x77) = (*(unsigned char *)((unsigned char *)&temp_v13 + 3));
      *(unsigned char *)(*(int *)(param_1 + 0x78) + 0x18) = 2;
      nw_snd_internal_PlayerHeapDataManager_Finalize(temp_v5);
      *(unsigned char *)(param_1 + 0x7c) = 1;
      FUN_004614b4(temp_v5);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
