/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042a16c` (_code @ 0x42a16c, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned int *DAT_005893a8; /* 0x5893a8 */
extern unsigned int DAT_0062d34c; /* 0x62d34c */

/* Supplied declaration required: FUN_001885b8. */
extern int FUN_001aeefc(unsigned int, int *, unsigned int);
extern unsigned long long nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(unsigned int *);
extern int nn_fs_ipc_FileSystem_OpenArchive(unsigned int **, int *, unsigned int, unsigned int);


int FUN_0042a16c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar5;
  char *pcVar6;
  unsigned long long temp_v3;
  unsigned int *temp_v4;
  unsigned int uStack_34;
  int temp_v5;
  int iStack_2c;
  int temp_v6;
  unsigned int uStack_24;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  
  temp_v7 = (param_1 & 0xffffff00) | param_4;
  temp_v4 = (unsigned int *)&temp_v6;
  temp_v8 = DAT_005893a8;
  uStack_34 = 0xc;
  temp_v6 = param_2;
  uStack_24 = param_3;
  temp_v2 = nn_fs_ipc_FileSystem_OpenArchive(&temp_v8,&temp_v5,0x567890b4,2);
  temp_v1 = iStack_2c;
  temp_v0 = temp_v5;
  puVar1 = DAT_005893a8;
  if (-1 < temp_v2) {
    temp_v3 = nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
                      (&DAT_0062d34c);
    pcVar6 = (char *)((unsigned long long)temp_v3 >> 0x20);
    piVar5 = (int *)temp_v3;
    if (piVar5 == (int *)0x0) {
      temp_v2 = -0x279fb9a7;
    }
    else {
      pcVar6 = "룜B떨B듼B";
      *piVar5 = (int)"룜B떨B듼B";
      piVar5[2] = temp_v0;
      piVar5[3] = temp_v1;
      temp_v2 = 0;
      piVar5[1] = (int)puVar1;
    }
    if (temp_v2 >= 0) {
      temp_v2 = FUN_001aeefc(param_1,piVar5,0);
      if (temp_v2 < 0) {
        (**(romwright_code **)(*piVar5 + 0x30))(piVar5);
      }
    }
    else {
      temp_v4 = DAT_005893a8;
      FUN_001885b8(&temp_v4,pcVar6,temp_v5,iStack_2c);
    }
  }
  return temp_v2;
}
