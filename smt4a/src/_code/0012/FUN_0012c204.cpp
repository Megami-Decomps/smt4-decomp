/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012c204` (_code @ 0x12c204, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(...);
int FUN_0030c7ac(...);
int FUN_0030c7b6(int, int);
int FUN_0030c7ea(int, int);
int FUN_0030c800(int, unsigned char *);
int holderSetPairAndFlush(int, int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_0012c3b0; /* 0x12c3b0 */

extern unsigned char *FUN_002e7908(int *, unsigned int *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea100(unsigned char *, int);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
extern int FUN_002f7896(int, char *);
extern int strNotEqualNullSafe(unsigned int, int);
/* Supplied declaration required: FUN_0030c7ac. */
/* Supplied declaration required: FUN_0030c7b6. */
/* Supplied declaration required: FUN_0030c7ea. */
/* Supplied declaration required: FUN_0030c800. */
/* Supplied declaration required: holderSetPairAndFlush. */


void FUN_0012c204(int param_1)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int *puVar6;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [4];
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [16];
  int temp_v14;
  unsigned char temp_v15 [8];
  unsigned char temp_v16 [12];
  int *piVar4;
  
  piVar4 = &temp_v6;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v7 = param_1 + 0x80;
    temp_v12 = 0;
    temp_v14 = param_1 + 0x3c0;
    temp_v0 = param_1 + 0x280;
    if (*(char *)(param_1 + 0x90) != '\x02') {
      if (*(char *)(param_1 + 0x408) != '\0') {
        FUN_002ea41e(temp_v8,temp_v7);
        puVar3 = temp_v8;
        FUN_0030c800(param_1,puVar3);
        return;
      }
      FUN_0030c7ea(temp_v0,*(int *)(param_1 + 0x284) + 1);
      FUN_002ea41e(temp_v15,temp_v7);
      temp_v5 = 1;
      temp_v12 = 1;
LAB_0012c32e:
      if ((*(char *)(param_1 + 0x410) != '\0') &&
         ((temp_v12 == 0 || (*(char *)(param_1 + 0x418) != '\0')))) {
        **(unsigned char **)(param_1 + 0x414) = 1;
      }
      if (temp_v5) {
        temp_v7 = *(int *)(param_1 + 0x294);
        temp_v6 = *(int *)(param_1 + 0x290);
        (**(romwright_code **)(**(int **)(temp_v14 + 0x2c) + 0xc))(*(int **)(temp_v14 + 0x2c),temp_v0,0);
      }
      if ((temp_v12 == 0) && (*(char *)(param_1 + 0x410) == '\0')) {
        temp_v2 = FUN_002ea3c0(temp_v13,0x12c3b5,0,&LAB_0012c3b0);
        FUN_002ea3d0(param_1,temp_v2);
        return;
      }
      temp_v9 = 0x10001;
      puVar6 = (unsigned int *)&temp_v9;
      puVar3 = (unsigned char *)FUN_002e7908(piVar4,puVar6);
      FUN_0030c800(param_1,puVar3);
      return;
    }
    temp_v6 = param_1 + 0x100;
    temp_v1 = FUN_002f7896(temp_v6,"invalidurl");
    temp_v10 = param_1 + 0xc0;
    if (temp_v1 == 0) {
      temp_v3 = *(int *)(param_1 + 0x284) != 0;
      if (temp_v3) {
        FUN_0030c7ea(temp_v0,0);
      }
      temp_v2 = FUN_002ea100(temp_v15,param_1 + 0x138);
      temp_v7 = strNotEqualNullSafe(temp_v2,temp_v6);
      _ZN9Obj55aff4D1Ev(temp_v15);
      temp_v4 = temp_v7 != 0;
      if (temp_v4) {
        FUN_0030c7b6(temp_v0,temp_v6);
      }
      temp_v5 = *(int *)(temp_v6 + 0x28) != *(int *)(temp_v6 + 8);
      if (temp_v5) {
        FUN_0030c7ac(temp_v0);
      }
      temp_v5 = temp_v5 || (temp_v4 || temp_v3);
      if (*(unsigned int *)(temp_v10 + 0x3c) < *(unsigned int *)(temp_v6 + 0x34) ||
          *(unsigned int *)(temp_v6 + 0x34) - *(unsigned int *)(temp_v10 + 0x3c) <
          (unsigned int)(*(unsigned int *)(temp_v10 + 0x38) <= *(unsigned int *)(temp_v6 + 0x30))) {
        temp_v12 = 1;
      }
      goto LAB_0012c32e;
    }
    holderSetPairAndFlush(temp_v0,temp_v1,*(unsigned int *)(param_1 + 0xf8),*(unsigned int *)(param_1 + 0xfc));
    FUN_0030c7b6(temp_v0,temp_v6);
    FUN_0030c7ac(temp_v0,*(unsigned int *)(temp_v6 + 8));
    temp_v7 = *(int *)(param_1 + 0x294);
    temp_v6 = *(int *)(param_1 + 0x290);
    (**(romwright_code **)(**(int **)(temp_v14 + 0x2c) + 0xc))(*(int **)(temp_v14 + 0x2c),temp_v0,0);
    puVar6 = (unsigned int *)&temp_v11;
    temp_v11 = 0x10001;
    piVar4 = (int *)temp_v16;
  }
  else {
    temp_v9 = 0x80010004;
    puVar6 = (unsigned int *)&temp_v9;
  }
  puVar3 = (unsigned char *)FUN_002e7908(piVar4,puVar6);
  FUN_0030c800(param_1,puVar3);
  return;
}

} /* extern "C" */
