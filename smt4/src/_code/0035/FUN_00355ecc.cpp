/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00355ecc` (_code @ 0x355ecc, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */
extern unsigned int DAT_004d431c; /* 0x4d431c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);
extern unsigned int nn_fs_ipc_FileSystem_CloseArchive(unsigned int, unsigned long long);
extern unsigned int nn_fs_ipc_FileSystem_OpenArchive(unsigned int, unsigned long long *, unsigned int, unsigned int, unsigned char *, unsigned int);


unsigned int FUN_00355ecc(unsigned int *param_1,unsigned char *param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int uStack_24;
  
  if (param_3 == 0) {
    temp_v1 = 6;
  }
  else {
    temp_v1 = 0x12345678;
  }
  temp_v4 = DAT_0044e660;
  temp_v1 = nn_fs_ipc_FileSystem_OpenArchive((unsigned int)&temp_v4,(unsigned long long *)&temp_v5,temp_v1,2,param_2,0xc);
  temp_v0 = DAT_0044e660;
  if (-1 < (int)temp_v1) {
    puVar2 = (unsigned int *)
             nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                       (&DAT_004d431c);
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = (unsigned int)"挼5悼5怐5";
      puVar2[2] = temp_v5;
      puVar2[3] = uStack_24;
      puVar2[1] = temp_v0;
      temp_v2 = 0;
    }
    else {
      temp_v2 = 0xd8604659;
    }
    *param_1 = (unsigned int)puVar2;
    temp_v1 = 0;
    if ((int)temp_v2 < 0) {
      nn_fs_ipc_FileSystem_CloseArchive((unsigned int)&temp_v3,romwright_piece_4_4(DAT_0044e660,param_2));
      temp_v1 = temp_v2;
    }
  }
  return temp_v1;
}

} /* extern "C" */
