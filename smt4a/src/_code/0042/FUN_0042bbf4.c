/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042bbf4` (_code @ 0x42bbf4, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int DAT_005893a8; /* 0x5893a8 */
extern unsigned int DAT_0062d34c; /* 0x62d34c */

/* Supplied declaration required: FUN_001885b8. */
extern unsigned long long nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);
extern unsigned int nn_fs_ipc_FileSystem_OpenArchive(unsigned int, unsigned long long *, unsigned int, unsigned int, unsigned char *, unsigned int);


unsigned int FUN_0042bbf4(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  char *pcVar6;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char **temp_v10;
  unsigned int uStack_20;
  int temp_v11;
  
  temp_v10 = (unsigned char **)&temp_v10;
  temp_v9 = 1;
  uStack_20 = 1;
  temp_v11 = DAT_005893a8;
  temp_v3 = nn_fs_ipc_FileSystem_OpenArchive
                    ((unsigned int)&temp_v11,(unsigned long long *)&temp_v7,param_2,1,(unsigned char *)temp_v10,1);
  temp_v2 = temp_v8;
  temp_v1 = temp_v7;
  temp_v0 = DAT_005893a8;
  if (-1 < (int)temp_v3) {
    temp_v5 = nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                      (&DAT_0062d34c);
    pcVar6 = (char *)((unsigned long long)temp_v5 >> 0x20);
    puVar5 = (unsigned int *)temp_v5;
    if (puVar5 != (unsigned int *)0x0) {
      pcVar6 = "룜B떨B듼B";
      *puVar5 = (unsigned int)"룜B떨B듼B";
      puVar5[1] = temp_v0;
      puVar5[3] = temp_v2;
      puVar5[2] = temp_v1;
      temp_v4 = 0;
    }
    else {
      temp_v4 = 0xd8604659;
    }
    *param_1 = (unsigned int)puVar5;
    temp_v3 = 0;
    if ((int)temp_v4 < 0) {
      FUN_001885b8(&temp_v6,pcVar6,temp_v7,temp_v8);
      temp_v3 = temp_v4;
    }
  }
  return temp_v3;
}
