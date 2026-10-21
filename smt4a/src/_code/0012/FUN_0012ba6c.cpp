/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012ba6c` (_code @ 0x12ba6c, 0xb2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(int *);
int FUN_002e78d0(unsigned int, int *, int);
int FUN_002f3dde(int, unsigned int);
int refIsNonNegative(unsigned char [12]);

typedef int romwright_code(...);
/* stack frame of param_8: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_8_stack;

extern int *FUN_0012a9e4(void);
extern unsigned int onlineContextGetInstance(void);
/* Supplied declaration required: sharedRefRelease. */
extern int operatorNew(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002f3dde. */
/* Supplied declaration required: refIsNonNegative. */
extern int FUN_0030c8d6(int, int);


unsigned int
FUN_0012ba6c(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
            unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int temp_v9;
  unsigned char temp_v10 [12];
  int iStack_24;
  int iStack_20;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  temp_v11 = param_3;
  temp_v12 = param_4;
  temp_v0 = FUN_002e789a(param_2);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v0 = FUN_0030c8d6(param_1,param_2);
    if (temp_v0 != 0) {
      temp_v0 = operatorNew(0x198);
      if (temp_v0 != 0) {
        piVar2 = (int *)FUN_0012a9e4();
      }
      else {
        piVar2 = (int *)0x0;
      }
      temp_v9 = param_8;
      temp_v8 = param_5;
      uStack_3c = param_6;
      uStack_38 = param_7;
      temp_v7 = *(unsigned int *)(param_1 + 0x70);
      uStack_4c = *(unsigned int *)(param_1 + 0x6c);
      temp_v6 = *(unsigned int *)(param_1 + 0x68);
      uStack_48 = temp_v12;
      temp_v3 = *(unsigned int *)(param_1 + 0x60);
      temp_v4 = (int)*(char *)(param_1 + 100);
      temp_v5 = *(unsigned int *)(param_1 + 0x74);
      temp_v2 = temp_v11;
      (**(romwright_code **)(*piVar2 + 0x34))
                (temp_v10,piVar2,*(unsigned int *)(param_2 + 0x44),param_1 + 0x10);
      temp_v0 = refIsNonNegative(temp_v10);
      if (temp_v0 != 0) {
        temp_v1 = onlineContextGetInstance();
        FUN_002e78d0(temp_v1,piVar2,0);
        temp_v1 = 1;
      }
      else {
        sharedRefRelease(piVar2);
        temp_v1 = refIsNonNegative(temp_v10);
      }
    }
    else {
      temp_v5 = 0x80010001;
      temp_v1 = FUN_002e7908((unsigned int *)&temp_v2,(unsigned int *)&temp_v5);
      FUN_002f3dde(param_2,temp_v1);
      temp_v1 = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
