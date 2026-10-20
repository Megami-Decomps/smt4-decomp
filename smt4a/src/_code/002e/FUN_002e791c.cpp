/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e791c` (_code @ 0x2e791c, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e26(void);
int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int sharedRefRelease(void);
int sharedRefAddRef(int);
int FUN_002e78d0(unsigned int, int, int);
int onlineStringConstruct(unsigned char [12], unsigned int);
int onlineStringDestroy(unsigned char [12]);
int FUN_002f7218(unsigned int, int);

typedef struct fn_002e791c_arg0 fn_002e791c_arg0;
struct fn_002e791c_arg0 {
    unsigned char pad_0x0[0x74];
    unsigned char field_0x74; /* +0x74 */
    unsigned char pad_0x75[0x3];
    int field_0x78; /* +0x78 */
    unsigned char pad_0x7c[0x14];
    unsigned char field_0x90; /* +0x90 */
    unsigned char pad_0x91[0x3];
    int field_0x94; /* +0x94 */
    int field_0x98; /* +0x98 */
    int field_0x9c; /* +0x9c */
};

/* stack frame of param_10: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_10_stack;

extern int FUN_00103fd4(void);
extern int FUN_0011997c(int, unsigned int, fn_002e791c_arg0 *, unsigned int, unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e6e26. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: sharedRefAddRef. */
extern int operatorNew(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: onlineStringConstruct. */
/* Supplied declaration required: onlineStringDestroy. */
extern unsigned int onlineInstantiationContextGetCurrent(void);
/* Supplied declaration required: FUN_002f7218. */


unsigned int
FUN_002e791c(fn_002e791c_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
            unsigned int param_9,unsigned int param_10)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [12];
  unsigned char temp_v4 [12];
  fn_002e791c_arg0 *pfStack_24;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  pfStack_24 = param_1;
  temp_v5 = param_2;
  temp_v6 = param_3;
  temp_v7 = param_4;
  temp_v0 = onlineInstantiationContextGetCurrent();
  FUN_002f7218(temp_v0,0);
  temp_v1 = FUN_002e6e26();
  FUN_002e6e34(temp_v3,temp_v1 + 0x58);
  if (param_1->field_0x9c != 0) {
    if (*(char *)(param_1->field_0x9c + 0x22) != '\x05') {
      FUN_002e6e5c(temp_v3);
      return 0;
    }
    sharedRefRelease();
    param_1->field_0x9c = 0;
  }
  if (param_1->field_0x94 != 0) {
    if (*(char *)(param_1->field_0x94 + 0x22) != '\x05') {
      FUN_002e6e5c(temp_v3);
      return 0;
    }
    sharedRefRelease();
    param_1->field_0x94 = 0;
  }
  if (param_1->field_0x98 != 0) {
    if (*(char *)(param_1->field_0x98 + 0x22) != '\x05') {
      FUN_002e6e5c(temp_v3);
      return 0;
    }
    sharedRefRelease();
    param_1->field_0x98 = 0;
  }
  temp_v1 = FUN_002e789a(temp_v5);
  if (temp_v1 != 0) {
    if (param_1->field_0x78 == 0) {
      temp_v2 = operatorNew(0x30);
      temp_v1 = 0;
      if (temp_v2 != 0) {
        temp_v1 = FUN_00103fd4();
      }
      param_1->field_0x78 = temp_v1;
    }
    if (*(int *)(param_1 + 1) == 0) {
      *(unsigned int *)(param_1 + 1) = *(unsigned int *)&param_1->field_0x74;
    }
    temp_v1 = operatorNew(0x328);
    if (temp_v1 != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 1);
      onlineStringConstruct(temp_v4,temp_v7);
      temp_v1 = FUN_0011997c(temp_v1,*(unsigned int *)(temp_v5 + 0x44),param_1,temp_v6,temp_v4,
                           param_5,param_6,param_7,param_8,param_9,param_10,temp_v0,
                           *(unsigned int *)&param_1->field_0x90);
      param_1->field_0x94 = temp_v1;
      onlineStringDestroy(temp_v4);
      temp_v1 = param_1->field_0x94;
    }
    else {
      param_1->field_0x94 = 0;
      temp_v1 = 0;
    }
    sharedRefAddRef(temp_v1);
    temp_v0 = FUN_002e6e26();
    FUN_002e78d0(temp_v0,param_1->field_0x94,0);
    FUN_002e6e5c(temp_v3);
    return 1;
  }
  FUN_002e6e5c(temp_v3);
  return 0;
}

} /* extern "C" */
