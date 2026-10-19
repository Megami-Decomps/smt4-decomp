/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001272fc` (_code @ 0x1272fc, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
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


unsigned int FUN_001272fc(unsigned int *param_1,unsigned char *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int uStack_24;
  unsigned int temp_v6 [2];
  
  temp_v6[0] = DAT_0044e660;
  temp_v4 = 0xc;
  temp_v1 = nn_fs_ipc_FileSystem_OpenArchive((unsigned int)temp_v6,(unsigned long long *)&temp_v5,7,2,param_2,0xc);
  temp_v0 = DAT_0044e660;
  if (-1 < (int)temp_v1) {
    puVar3 = (unsigned int *)
             nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                       (&DAT_004d431c);
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = (unsigned int)"挼5悼5怐5";
      puVar3[2] = temp_v5;
      puVar3[3] = uStack_24;
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
