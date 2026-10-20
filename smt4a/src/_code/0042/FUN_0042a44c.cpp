/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042a44c` (_code @ 0x42a44c, 0x274 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001885b8(...);
int FUN_0042b8dc(char **, int **, int *, int);
int FUN_00500924(char **);

typedef int romwright_code(...);
/* stack frame of void: 16 slot(s), 64 byte(s) */
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
} void_stack;

extern unsigned int DAT_005893a8; /* 0x5893a8 */

/* Supplied declaration required: FUN_001885b8. */
/* Supplied declaration required: FUN_0042b8dc. */
/* Supplied declaration required: FUN_00500924. */
extern unsigned int nn_fs_ipc_FileSystem_OpenArchive(unsigned int, unsigned long long *, unsigned int, unsigned int, unsigned char *, unsigned int);


char ** FUN_0042a44c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char **ppcVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  unsigned char temp_v5;
  char *temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int *temp_v10;
  int temp_v11;
  int temp_v12;
  int iStack_4c;
  unsigned int temp_v13;
  unsigned char **temp_v14;
  unsigned int uStack_40;
  int temp_v15;
  unsigned int uStack_38;
  unsigned int uStack_34;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int *puStack_20;
  unsigned int uStack_1c;
  unsigned char temp_v20 [4];
  
  temp_v14 = (unsigned char **)&temp_v14;
  temp_v7 = 0;
  temp_v6 = "룜B떨B듼B";
  temp_v13 = 1;
  uStack_40 = 1;
  temp_v19 = DAT_005893a8;
  ppcVar3 = (char **)nn_fs_ipc_FileSystem_OpenArchive
                               ((unsigned int)&temp_v19,(unsigned long long *)&temp_v12,3,1,(unsigned char *)temp_v14,1);
  if ((int)ppcVar3 < 0) {
    temp_v6 = "룜B떨B듼B";
    if (temp_v8 != 0 || temp_v9 != 0) {
      temp_v4 = FUN_00500924(&temp_v6);
      temp_v11 = (unsigned int)temp_v4;
      FUN_001885b8(&temp_v11,(int)((unsigned long long)temp_v4 >> 0x20),temp_v8,temp_v9);
    }
  }
  else {
    temp_v7 = DAT_005893a8;
    temp_v8 = temp_v12;
    temp_v9 = iStack_4c;
    temp_v15 = 2;
    uStack_38 = 0x6e6f6369;
    uStack_34 = 0;
    puStack_20 = (unsigned int *)&temp_v15;
    temp_v19 = 2;
    uStack_1c = 0xc;
    ppcVar3 = &temp_v6;
    FUN_0042b8dc(ppcVar3,&temp_v10,&temp_v19,1);
    if ((int)ppcVar3 < 0) {
      temp_v6 = "룜B떨B듼B";
      if (temp_v8 != 0 || temp_v9 != 0) {
        temp_v4 = FUN_00500924(&temp_v6);
        temp_v16 = (unsigned int)temp_v4;
        FUN_001885b8(&temp_v16,(int)((unsigned long long)temp_v4 >> 0x20),temp_v8,temp_v9);
      }
    }
    else {
      ppcVar3 = (char **)(**(romwright_code **)*temp_v10)(temp_v10,temp_v20,0,0);
      if (-1 < (int)ppcVar3) {
        (**(romwright_code **)(*temp_v10 + 0x30))();
        temp_v1 = temp_v9;
        temp_v0 = temp_v8;
        if (temp_v8 != 0 || temp_v9 != 0) {
          FUN_00500924(&temp_v6);
          FUN_001885b8(&temp_v5,temp_v2,temp_v0,temp_v1);
          temp_v8 = 0;
          temp_v9 = 0;
        }
        temp_v1 = temp_v9;
        temp_v0 = temp_v8;
        temp_v7 = 0;
        temp_v6 = "룜B떨B듼B";
        if (temp_v8 != 0 || temp_v9 != 0) {
          FUN_00500924(&temp_v6);
          FUN_001885b8(&temp_v5,temp_v3,temp_v0,temp_v1);
        }
        return (char **)0x0;
      }
      (**(romwright_code **)(*temp_v10 + 0x30))();
      if (temp_v8 != 0 || temp_v9 != 0) {
        temp_v4 = FUN_00500924(&temp_v6);
        temp_v17 = (unsigned int)temp_v4;
        FUN_001885b8(&temp_v17,(int)((unsigned long long)temp_v4 >> 0x20),temp_v8,temp_v9);
        temp_v8 = 0;
        temp_v9 = 0;
      }
      temp_v7 = 0;
      temp_v6 = "룜B떨B듼B";
      if (temp_v9 != 0 || temp_v8 != 0) {
        temp_v4 = FUN_00500924(&temp_v6);
        temp_v18 = (unsigned int)temp_v4;
        FUN_001885b8(&temp_v18,(int)((unsigned long long)temp_v4 >> 0x20),temp_v8,temp_v9);
      }
    }
  }
  return ppcVar3;
}

} /* extern "C" */
