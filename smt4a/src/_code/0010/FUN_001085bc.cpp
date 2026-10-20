/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001085bc` (_code @ 0x1085bc, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(...);
int FUN_002e6e5c(...);
int FUN_002e7908(int *, int *);
int vectorCopyHeader(...);

typedef int romwright_code(...);
/* stack frame of param_2: 7 slot(s), 22 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern signed char DAT_00594973; /* 0x594973 */
extern int *DAT_00594aa8; /* 0x594aa8 */

extern unsigned int FUN_00123830(int *);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: vectorCopyHeader. */
extern int FUN_002ea6fc(int, unsigned char *);
extern unsigned int *FUN_002f12d0(unsigned int, unsigned char *);


void FUN_001085bc(unsigned int param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  int temp_v4;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char temp_v5 [4];
  unsigned char temp_v6 [4];
  int temp_v7;
  unsigned int uStack_38;
  unsigned int uStack_34;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10 [12];
  unsigned int *temp_v11;
  int *piStack_18;
  
  temp_v6[0] = 1;
  temp_v11 = (unsigned int *)param_1;
  piStack_18 = param_2;
  temp_v11 = (unsigned int *)FUN_002f12d0(param_1,temp_v6);
  param_2[200] = param_2[200] + 1;
  *(unsigned char *)((int)param_2 + 0x14a) = 10;
  (**(romwright_code **)(*param_2 + 0x88))(param_2,2,1);
  piVar1 = DAT_00594aa8;
  if (*(char *)(param_2[1] + 4) != '\n') {
    if (*(char *)(param_2[1] + 4) == '\x01') {
      if (DAT_00594973 == '\x01') {
        return;
      }
      if (DAT_00594aa8 != (int *)0x0) {
        temp_v0 = FUN_00123830(param_2 + 2);
        temp_v1 = (**(romwright_code **)(*piVar1 + 0x30))(piVar1,temp_v0);
        if (temp_v1 == 0) {
          return;
        }
      }
    }
    temp_v8 = 0x8005000d;
    temp_v0 = FUN_002e7908(&temp_v7,&temp_v8);
    vectorCopyHeader(temp_v11,temp_v0);
    temp_v1 = param_2[0x22];
    if (temp_v1 != 0) {
      FUN_002e6e34(temp_v3,temp_v1 + 4);
      temp_v7 = *(int *)(temp_v1 + 0x34);
      uStack_38 = *(unsigned int *)(temp_v1 + 0x38);
      uStack_34 = *(unsigned int *)(temp_v1 + 0x3c);
      FUN_002e6e5c(temp_v3,uStack_38,uStack_34,&temp_v8);
      if (-1 < temp_v7) {
        temp_v9 = 0x8005000d;
        FUN_002e7908(&temp_v4,&temp_v9);
        temp_v1 = param_2[0x22];
        temp_v4 = *temp_v11;
        uStack_4c = temp_v11[1];
        uStack_48 = temp_v11[2];
        FUN_002e6e34(temp_v10,temp_v1 + 4,uStack_48,temp_v5);
        temp_v5[0] = 1;
        temp_v1 = temp_v1 + 0x34;
        temp_v2 = FUN_002ea6fc(temp_v1,temp_v5);
        if (temp_v2 != 0) {
          vectorCopyHeader(temp_v1,&temp_v4);
        }
        FUN_002e6e5c(temp_v10);
      }
    }
  }
  return;
}

} /* extern "C" */
