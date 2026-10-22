/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e300` (_code @ 0x10e300, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010e05c(...);
int _ZN9Obj55b28cC1EPv(...);
int _ZN9Obj55b28cD1Ev(...);
int FUN_002e93c2(...);
int FUN_002ea704(...);
int FUN_002f7270(...);
int FUN_002f8728(...);
int FUN_002f874c(...);
int FUN_002f8760(...);
int FUN_002f8aa8(...);

typedef struct fn_0010e300_arg0 fn_0010e300_arg0;
struct fn_0010e300_arg0 {
    unsigned char pad_0x0[0xe];
    ushort field_0xe; /* +0xe */
    unsigned char pad_0x10[0x64];
    undefined4 field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x28];
    unsigned char field_0xa0; /* +0xa0 */
    unsigned char pad_0xa1[0x1f];
    ushort field_0xc0; /* +0xc0 */
};

typedef int romwright_code(...);
/* stack frame of param_5: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

extern unsigned char DAT_005949d8; /* 0x5949d8 */

/* Supplied declaration required: FUN_0010e05c. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002e93c2. */
/* Supplied declaration required: FUN_002ea704. */
extern unsigned int onlineGetActiveLock(void);
extern unsigned int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002f7270. */
extern int FUN_002f86cc(fn_0010e300_arg0 *, unsigned int);
/* Supplied declaration required: FUN_002f8728. */
extern unsigned int FUN_002f8744(unsigned char *);
/* Supplied declaration required: FUN_002f874c. */
/* Supplied declaration required: FUN_002f8760. */
extern int rangeIsEmpty3(void);
/* Supplied declaration required: FUN_002f8aa8. */


unsigned int
FUN_0010e300(fn_0010e300_arg0 *param_1,unsigned int param_2,unsigned short *param_3,int param_4,int param_5)

{
/* irregular: 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  fn_0010e300_arg0 *pfVar4;
  unsigned int temp_v3;
  unsigned short temp_v4 [2];
  unsigned char temp_v5 [20];
  int temp_v6;
  unsigned char temp_v7 [16];
  fn_0010e300_arg0 *pfStack_24;
  unsigned int uStack_20;
  unsigned short *puStack_1c;
  int temp_v8;
  
  pfStack_24 = param_1;
  uStack_20 = param_2;
  puStack_1c = param_3;
  temp_v8 = param_4;
  temp_v1 = onlineGetActiveLock();
  _ZN9Obj55b28cC1EPv(temp_v7,temp_v1);
  temp_v0 = 0;
  temp_v4[0] = 0;
  if (param_2 == 0) {
    temp_v2 = rangeIsEmpty3();
    if ((temp_v2 == 0) &&
       (*(int *)(*(int *)(*(unsigned short **)&param_1[1].field_0xa0 + 2) + 0x30) == param_5)) {
      param_2 = (unsigned int)**(unsigned short **)&param_1[1].field_0xa0;
    }
    if (temp_v4[0] != 0) {
      if (param_3 != (unsigned short *)0x0) {
        *param_3 = temp_v4[0];
      }
      if (temp_v0) {
        param_1->field_0xc0 = temp_v4[0];
      }
      _ZN9Obj55b28cD1Ev(temp_v7);
      return 1;
    }
  }
  temp_v2 = FUN_002f86cc(param_1,param_2);
  if (temp_v2 != 0) {
    *(int *)(temp_v2 + 0x74) = *(int *)(temp_v2 + 0x74) + 1;
    temp_v4[0] = (*(unsigned short *)(temp_v2 + 0xe) << 8) | (*(unsigned short *)(temp_v2 + 0xe) >> 8);
  }
  if (temp_v4[0] == 0) {
    pfVar4 = param_1;
    FUN_0010e05c(param_1,param_2,temp_v4,param_5);
    if (pfVar4 == (fn_0010e300_arg0 *)0x0) {
      FUN_002ea704();
      FUN_002f7270();
      _ZN9Obj55b28cD1Ev(temp_v7);
      return 0;
    }
    if (temp_v8 != 0) {
      temp_v0 = 1;
      FUN_002f8728(temp_v5);
      (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_005949d8 + 0x2c)) + 8))((*(int * *)((unsigned char *)&DAT_005949d8 + 0x2c)),temp_v5);
      while (temp_v6 != 0) {
        temp_v1 = FUN_002f8744(temp_v5);
        FUN_002e93c2(temp_v1,temp_v4[0]);
        (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_005949d8 + 0x2c)) + 0x30))((*(int * *)((unsigned char *)&DAT_005949d8 + 0x2c)),temp_v4[0]);
        temp_v1 = FUN_002f8744(temp_v5);
        temp_v3 = FUN_002eb5f4();
        FUN_002f8aa8(temp_v3,temp_v1);
        FUN_002f874c(temp_v5);
      }
      FUN_002f8760();
    }
  }
  if (param_3 != (unsigned short *)0x0) {
    *param_3 = temp_v4[0];
  }
  if (temp_v0) {
    param_1->field_0xc0 = temp_v4[0];
  }
  _ZN9Obj55b28cD1Ev(temp_v7);
  return 1;
}

} /* extern "C" */
