/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035511c` (_code @ 0x35511c, 0x274 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_00239dec(char **);
/* Supplied declaration required: FUN_0035633c. */
extern unsigned int nn_fs_ipc_FileSystem_CloseArchive(unsigned int, unsigned long long);
extern unsigned int nn_fs_ipc_FileSystem_OpenArchive(unsigned int, unsigned long long *, unsigned int, unsigned int, unsigned char *, unsigned int);


char ** FUN_0035511c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  char **ppcVar1;
  unsigned int temp_v0;
  unsigned char ***pppbVar3;
  unsigned int temp_v1;
  char *temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *temp_v6;
  int temp_v7;
  int temp_v8;
  int iStack_4c;
  unsigned int temp_v9;
  unsigned char **temp_v10;
  unsigned int uStack_40;
  int temp_v11;
  unsigned int uStack_38;
  unsigned int uStack_34;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int *puStack_20;
  unsigned int uStack_1c;
  unsigned char temp_v16 [4];
  
  pppbVar3 = &temp_v10;
  temp_v3 = 0;
  temp_v2 = "挼5悼5怐5";
  temp_v9 = 1;
  uStack_40 = 1;
  temp_v15 = DAT_0044e660;
  temp_v1 = 1;
  temp_v10 = (unsigned char **)pppbVar3;
  ppcVar1 = (char **)nn_fs_ipc_FileSystem_OpenArchive
                               ((unsigned int)&temp_v15,(unsigned long long *)&temp_v8,3,1,(unsigned char *)pppbVar3,1);
  if ((int)ppcVar1 < 0) {
    temp_v2 = "挼5悼5怐5";
    if (temp_v4 != 0 || temp_v5 != 0) {
      temp_v7 = FUN_00239dec(&temp_v2);
      nn_fs_ipc_FileSystem_CloseArchive((unsigned int)&temp_v7,romwright_piece_4_4(temp_v1,pppbVar3));
    }
  }
  else {
    temp_v3 = DAT_0044e660;
    temp_v4 = temp_v8;
    temp_v5 = iStack_4c;
    temp_v11 = 2;
    uStack_38 = 0x6e6f6369;
    uStack_34 = 0;
    puStack_20 = (unsigned int *)&temp_v11;
    temp_v15 = 2;
    uStack_1c = 0xc;
    ppcVar1 = &temp_v2;
    FUN_0035633c(ppcVar1,&temp_v6,&temp_v15,1);
    if ((int)ppcVar1 < 0) {
      temp_v2 = "挼5悼5怐5";
      if (temp_v4 != 0 || temp_v5 != 0) {
        temp_v12 = FUN_00239dec(&temp_v2);
        nn_fs_ipc_FileSystem_CloseArchive((unsigned int)&temp_v12,romwright_piece_4_4(temp_v1,pppbVar3));
      }
    }
    else {
      temp_v1 = 0x36c0;
      ppcVar1 = (char **)(**(romwright_code **)*temp_v6)(temp_v6,temp_v16,0,0);
      if (-1 < (int)ppcVar1) {
        (**(romwright_code **)(*temp_v6 + 0x2c))();
        if (temp_v4 != 0 || temp_v5 != 0) {
          temp_v0 = FUN_00239dec(&temp_v2);
          nn_fs_ipc_FileSystem_CloseArchive((unsigned int)&pppbVar3,romwright_piece_4_4(temp_v1,temp_v0));
          temp_v4 = 0;
          temp_v5 = 0;
        }
        temp_v3 = 0;
        temp_v2 = "挼5悼5怐5";
        if (temp_v4 != 0 || temp_v5 != 0) {
          temp_v0 = FUN_00239dec(&temp_v2);
          nn_fs_ipc_FileSystem_CloseArchive((unsigned int)&pppbVar3,romwright_piece_4_4(temp_v1,temp_v0));
        }
        return (char **)0x0;
      }
      (**(romwright_code **)(*temp_v6 + 0x2c))();
      if (temp_v4 != 0 || temp_v5 != 0) {
        temp_v13 = FUN_00239dec(&temp_v2);
        nn_fs_ipc_FileSystem_CloseArchive((unsigned int)&temp_v13,romwright_piece_4_4(temp_v1,param_1));
        temp_v4 = 0;
        temp_v5 = 0;
      }
      temp_v3 = 0;
      temp_v2 = "挼5悼5怐5";
      if (temp_v4 != 0 || temp_v5 != 0) {
        temp_v14 = FUN_00239dec(&temp_v2);
        nn_fs_ipc_FileSystem_CloseArchive((unsigned int)&temp_v14,romwright_piece_4_4(temp_v1,param_1));
      }
    }
  }
  return ppcVar1;
}
