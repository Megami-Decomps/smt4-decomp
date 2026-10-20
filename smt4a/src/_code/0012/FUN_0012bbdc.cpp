/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012bbdc` (_code @ 0x12bbdc, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(int *);
int FUN_002e78d0(unsigned int, int *, int);
int FUN_002f3dde(int, unsigned int);
int refIsNonNegative(unsigned char [12]);

typedef int romwright_code(...);
/* stack frame of param_12: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
} param_12_stack;

extern int *FUN_0011db00(void);
extern unsigned int FUN_002e6e26(void);
/* Supplied declaration required: sharedRefRelease. */
extern int operatorNew(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002f3dde. */
/* Supplied declaration required: refIsNonNegative. */
extern int FUN_0030c8d6(int, int);


unsigned int
FUN_0012bbdc(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
            unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9,
            unsigned int param_10,unsigned int param_11,unsigned int param_12)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
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
      temp_v0 = operatorNew(0x170);
      if (temp_v0 != 0) {
        piVar2 = (int *)FUN_0011db00();
      }
      else {
        piVar2 = (int *)0x0;
      }
      temp_v9 = param_12;
      temp_v8 = param_9;
      uStack_3c = param_10;
      uStack_38 = param_11;
      temp_v6 = param_7;
      temp_v7 = param_8;
      temp_v5 = param_6;
      temp_v4 = param_5;
      uStack_5c = *(unsigned int *)(param_1 + 0x6c);
      temp_v2 = *(unsigned int *)(param_1 + 0x60);
      temp_v3 = temp_v12;
      uStack_58 = temp_v11;
      (**(romwright_code **)(*piVar2 + 0x34))
                (temp_v10,piVar2,*(unsigned int *)(param_2 + 0x44),param_1 + 0x10);
      temp_v0 = refIsNonNegative(temp_v10);
      if (temp_v0 != 0) {
        temp_v1 = FUN_002e6e26();
        FUN_002e78d0(temp_v1,piVar2,0);
        temp_v1 = 1;
      }
      else {
        sharedRefRelease(piVar2);
        temp_v1 = refIsNonNegative(temp_v10);
      }
    }
    else {
      temp_v3 = 0x80010001;
      temp_v1 = FUN_002e7908((unsigned int *)&temp_v2,(unsigned int *)&temp_v3);
      FUN_002f3dde(param_2,temp_v1);
      temp_v1 = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
