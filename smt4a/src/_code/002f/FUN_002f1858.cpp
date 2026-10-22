/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1858` (_code @ 0x2f1858, 0x8e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00109724(int, unsigned char [8]);
int _ZN9Obj55b28cC1EPv(unsigned char [16], unsigned char *);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int onlineTimeGetNow(unsigned char [8]);

extern unsigned char DAT_00558bd8; /* 0x558bd8 */
extern int DAT_005949e4; /* 0x5949e4 */
extern int DAT_0062e600; /* 0x62e600 */
extern int DAT_0062e604; /* 0x62e604 */
extern unsigned char DAT_0062e608; /* 0x62e608 */
extern int DAT_0062e60c; /* 0x62e60c */
extern unsigned char DAT_0062e610; /* 0x62e610 */

/* Supplied declaration required: FUN_00109724. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int _ZN9Obj55aff4C1EPKc(unsigned int *);
extern int _ZN9Obj55aff4C1Ev(int);
/* Supplied declaration required: onlineTimeGetNow. */
extern int wordRefsDiffer_002f2968(unsigned int *, unsigned char *);


int FUN_002f1858(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [16];
  unsigned char temp_v5 [8];
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (unsigned int)&DAT_00558bd8;
  temp_v0 = _ZN9Obj55aff4C1EPKc(param_1 + 0x12);
  temp_v0 = _ZN9Obj55aff4C1Ev(temp_v0 + 0x18);
  temp_v1 = _ZN9Obj55aff4C1Ev(temp_v0 + 8);
  temp_v3 = temp_v1 - 0x68;
  onlineTimeGetNow(temp_v5);
  FUN_00109724(temp_v3,temp_v5);
  *(unsigned char *)(temp_v1 - 0x18) = 0;
  *(unsigned int *)(temp_v1 - 0x24) = param_3;
  *(unsigned short *)(temp_v1 - 0x16) = 0;
  *(unsigned int *)(temp_v1 - 0x10) = 0;
  *(unsigned int *)(temp_v1 - 0xc) = 0;
  _ZN9Obj55b28cC1EPv(temp_v4,&DAT_0062e610);
  temp_v2 = wordRefsDiffer_002f2968((unsigned int *)&DAT_0062e600,&DAT_0062e608);
  temp_v0 = temp_v3;
  if (temp_v2 != 0) {
    *(int *)(DAT_0062e604 + 4) = temp_v3;
    *(int *)(temp_v1 - 0x60) = DAT_0062e604;
    temp_v0 = DAT_0062e600;
  }
  DAT_0062e600 = temp_v0;
  DAT_0062e60c = DAT_0062e60c + 1;
  DAT_0062e604 = temp_v3;
  *(int *)(temp_v1 - 0x14) = DAT_005949e4;
  DAT_005949e4 = DAT_005949e4 + 1;
  _ZN9Obj55b28cD1Ev(temp_v4);
  return temp_v3;
}

} /* extern "C" */
