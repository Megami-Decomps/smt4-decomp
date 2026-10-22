/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120d60` (_code @ 0x120d60, 0x106 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00120c88(void);
int FUN_00120cd8(void);
int FUN_00122dd0(void);
int _ZN9Obj55b28cC1EPv(...);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int onlineTimeGetNow(unsigned char [8]);
int FUN_002ed0c0(int, int);
int FUN_002fba58(unsigned int, unsigned int);
int FUN_002fd210(unsigned int);

extern unsigned char DAT_0055aefc; /* 0x55aefc */
extern unsigned char DAT_0059495b; /* 0x59495b */
extern unsigned char DAT_00594966; /* 0x594966 */
extern signed char DAT_00594967; /* 0x594967 */
extern signed char DAT_0059496a; /* 0x59496a */
extern signed char DAT_0059496c; /* 0x59496c */
extern int DAT_005949f0; /* 0x5949f0 */
extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

extern int FUN_0011081c(void);
extern unsigned int FUN_001142fc(void);
extern unsigned int FUN_001175a4(void);
/* Supplied declaration required: FUN_00120c88. */
/* Supplied declaration required: FUN_00120cd8. */
/* Supplied declaration required: FUN_00122dd0. */
extern unsigned int FUN_00123100(int, unsigned int, unsigned int);
extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int FUN_002e7168(int, unsigned int);
extern int operatorNew(unsigned int);
extern unsigned int *_ZN9Obj5593b8C1Ev(void);
/* Supplied declaration required: onlineTimeGetNow. */
extern int FUN_002ed074(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002ed0c0. */
/* Supplied declaration required: FUN_002fba58. */
/* Supplied declaration required: FUN_002fd210. */


int FUN_00120d60(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [16];
  
  puVar1 = (unsigned int *)_ZN9Obj5593b8C1Ev();
  *puVar1 = (unsigned int)&DAT_0055aefc;
  temp_v0 = FUN_002ed074(puVar1 + 7,3);
  *(unsigned char *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned char *)(temp_v0 + 0x2c) = 0;
  temp_v0 = FUN_002e7168(temp_v0 + 0x30,0x20000000);
  DAT_00594966 = 0;
  onlineTimeGetNow(temp_v4);
  FUN_00120cd8();
  if (DAT_00594967 != '\0') {
    if (DAT_0059496c == '\0') {
      DAT_0059496c = '\x01';
    }
    DAT_0059495b = 0;
  }
  else if ((DAT_0059496c == '\0') && (DAT_0059496a == '\0')) {
    DAT_0059495b = 1;
  }
  else {
    DAT_0059495b = 0;
  }
  FUN_00120c88();
  _ZN9Obj55b28cC1EPv(temp_v5,&DAT_0062e6a0);
  DAT_005949f0 = DAT_005949f0 + 1;
  _ZN9Obj55b28cD1Ev(temp_v5);
  FUN_002ed0c0(temp_v0 - 0x30,temp_v0 - 0x4c);
  temp_v1 = operatorNew(0x1f0);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_00123100(temp_v1,8,0);
  }
  *(unsigned int *)(temp_v0 - 0x40) = temp_v2;
  if (DAT_00594967 != '\0') {
    FUN_00122dd0();
  }
  temp_v1 = operatorNew(0x60);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_001142fc();
  }
  *(unsigned int *)(temp_v0 - 0x3c) = temp_v2;
  temp_v3 = operatorNew(0x48);
  temp_v1 = 0;
  if (temp_v3 != 0) {
    temp_v1 = FUN_0011081c();
  }
  *(int *)(temp_v0 - 0x38) = temp_v1;
  FUN_002fba58(*(unsigned int *)(temp_v1 + 0x44),*(unsigned int *)(temp_v0 - 0x3c));
  temp_v1 = operatorNew(0x74);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_001175a4();
  }
  *(unsigned int *)(temp_v0 - 0x34) = temp_v2;
  temp_v1 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(temp_v5,temp_v1 + 0x58);
  FUN_002fd210(*(unsigned int *)(*(int *)(temp_v0 - 0x38) + 0x44));
  _ZN9Obj55b28cD1Ev(temp_v5);
  return temp_v0 - 0x4c;
}

} /* extern "C" */
