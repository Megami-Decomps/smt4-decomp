/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356664` (_code @ 0x356664, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */
extern unsigned int DAT_004d431c; /* 0x4d431c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);
extern unsigned int nn_fs_ipc_FileSystem_CloseArchive(unsigned int, unsigned long long);
extern unsigned int nn_fs_ipc_FileSystem_OpenArchive(unsigned int, unsigned long long *, unsigned int, unsigned int, unsigned char *, unsigned int);


unsigned int FUN_00356664(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int uStack_2c;
  unsigned int temp_v6;
  unsigned char **temp_v7;
  unsigned int uStack_20;
  int temp_v8;
  
  temp_v7 = (unsigned char **)&temp_v7;
  temp_v6 = 1;
  uStack_20 = 1;
  temp_v8 = DAT_0044e660;
  temp_v4 = 1;
  temp_v1 = nn_fs_ipc_FileSystem_OpenArchive
                    ((unsigned int)&temp_v8,(unsigned long long *)&temp_v5,param_2,1,(unsigned char *)temp_v7,1);
  temp_v0 = DAT_0044e660;
  if (-1 < (int)temp_v1) {
    puVar3 = (unsigned int *)
             nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                       (&DAT_004d431c);
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = (unsigned int)"挼5悼5怐5";
      puVar3[2] = temp_v5;
      puVar3[3] = uStack_2c;
      puVar3[1] = temp_v0;
      temp_v2 = 0;
    }
    else {
      temp_v2 = 0xd8604659;
    }
    *param_1 = (unsigned int)puVar3;
    temp_v1 = 0;
    if ((int)temp_v2 < 0) {
      nn_fs_ipc_FileSystem_CloseArchive((unsigned int)&temp_v3,romwright_piece_4_4(temp_v4,DAT_0044e660));
      temp_v1 = temp_v2;
    }
  }
  return temp_v1;
}

} /* extern "C" */
