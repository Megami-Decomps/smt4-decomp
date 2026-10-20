/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035edac` (_code @ 0x35edac, 0x1d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100b88(...);
int FUN_002bb5a4(...);
int FUN_002c52f8(...);
int FUN_0035efa0(...);
int FUN_0035f50c(...);
int builtin_strncpy(...);

/* stack frame of param_5: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_5_stack;

extern unsigned char LAB_0035ef7c; /* 0x35ef7c */

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
/* Supplied declaration required: FUN_00100b88. */
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_0035efa0. */
/* Supplied declaration required: FUN_0035f50c. */
extern unsigned int FUN_003e0e24(unsigned int *, unsigned int *, unsigned int, unsigned int);
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


unsigned int * FUN_0035edac(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                   unsigned int param_5)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  char temp_v3 [4];
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [132];
  unsigned char temp_v10 [8];
  unsigned int *puStack_34;
  unsigned int *puStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v11;
  
  puStack_34 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  temp_v11 = param_4;
  puVar1 = (unsigned int *)FUN_003e0e24(param_1,param_2,param_4,param_5);
  if ((int)puVar1 < 0) {
    return puVar1;
  }
  if (param_5 != 0) {
    puVar2 = param_2 + -1;
    if ((param_5 & 1) != 0) {
      *param_2 = 0;
      puVar2 = param_2;
    }
    for (temp_v0 = param_5 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
    }
  }
  FUN_0035f50c(param_1,temp_v10,&temp_v2,param_3);
  temp_v1 = 0;
  if (temp_v1 < temp_v2) {
    do {
      FUN_00100b88(temp_v9,0x40,&LAB_0035ef7c,temp_v10[temp_v1]);
      temp_v4 = 0;
      puVar1 = &temp_v4;
      builtin_strncpy(temp_v3,"h\fB",4);
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v5 = 0;
      temp_v6 = 0;
      FUN_002bb5a4(puVar1,temp_v9,1);
      if ((int)puVar1 < 0) {
joined_r0x0035eeb0:
        if ((temp_v4 & 0xfffffffe) == 0) {
          return puVar1;
        }
        if ((temp_v4 & 1) != 0) {
          FUN_002c52f8();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v4 & 0xfffffffe);
        return puVar1;
      }
      *(unsigned char *)((int)param_1 + 0x1b) = temp_v10[temp_v1];
      puVar1 = param_1;
      FUN_0035efa0(param_1,param_2,temp_v3,temp_v11,param_5);
      if ((int)puVar1 < 0) goto joined_r0x0035eeb0;
      if ((temp_v4 & 0xfffffffe) != 0) {
        if ((temp_v4 & 1) != 0) {
          FUN_002c52f8();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v4 & 0xfffffffe);
        temp_v4 = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
