/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a8a4` (_code @ 0x10a8a4, 0xba bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001322b6(int, unsigned char [4]);
int _ZN9Obj55b28cC1EPv(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int onlineTimeGetNow(unsigned char [8]);
int wordMoveOut_002f3724(unsigned char [4], int *, int);
int mapIteratorNext3(int *);
int wordMoveOut_002f3764(int *, int *, int);
int FUN_002f3774(unsigned char [4], int, int *);
int mapIteratorNext4(int *);
int SBORROW4(...);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
} param_1_stack;

extern unsigned char g_onlineRegistry; /* 0x594a58 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001322b6. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned long long _ZmiRK15OnlineTimestampS1_(unsigned char *, int);
/* Supplied declaration required: onlineTimeGetNow. */
extern int wordRefsDiffer_002f3594(int *, unsigned int *);
extern int wordRefsDiffer_002f35fc(int *, unsigned int *);
/* Supplied declaration required: wordMoveOut_002f3724. */
/* Supplied declaration required: mapIteratorNext3. */
/* Supplied declaration required: wordMoveOut_002f3764. */
/* Supplied declaration required: FUN_002f3774. */
/* Supplied declaration required: mapIteratorNext4. */


void FUN_0010a8a4(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned long long temp_v3;
  unsigned char temp_v4 [4];
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [8];
  unsigned char temp_v9 [12];
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [4];
  
  _ZN9Obj55b28cC1EPv(temp_v9,param_1 + 0x4c);
  onlineTimeGetNow(temp_v8);
  temp_v5 = *(int *)(*(int *)(param_1 + 0x18) + 8);
  while( 1 ) {
    temp_v7 = *(unsigned int *)(param_1 + 0x18);
    temp_v1 = wordRefsDiffer_002f35fc(&temp_v5,(unsigned int *)&temp_v7);
    temp_v0 = (*(unsigned int *)((unsigned char *)&g_onlineRegistry + 0x14));
    if (temp_v1 == 0) break;
    temp_v3 = _ZmiRK15OnlineTimestampS1_(temp_v8,temp_v5 + 0x50);
    temp_v1 = (int)((unsigned long long)temp_v3 >> 0x20);
    temp_v2 = temp_v0 < (unsigned int)temp_v3;
    if ((int)(-(unsigned int)temp_v2 - temp_v1) < 0 != (SBORROW4(0,temp_v1) != SBORROW4(-temp_v1,(unsigned int)temp_v2))) {
      wordMoveOut_002f3724(temp_v4,&temp_v5,0);
      FUN_001322b6(param_1 + 8,temp_v4);
    }
    else {
      mapIteratorNext3(&temp_v5);
    }
  }
  temp_v6 = *(int *)(*(int *)(param_1 + 0x34) + 8);
  while( 1 ) {
    temp_v10 = *(unsigned int *)(param_1 + 0x34);
    temp_v1 = wordRefsDiffer_002f3594(&temp_v6,(unsigned int *)&temp_v10);
    temp_v0 = (*(unsigned int *)((unsigned char *)&g_onlineRegistry + 0x14));
    if (temp_v1 == 0) break;
    temp_v3 = _ZmiRK15OnlineTimestampS1_(temp_v8,temp_v6 + 0x30);
    temp_v1 = (int)((unsigned long long)temp_v3 >> 0x20);
    temp_v2 = temp_v0 < (unsigned int)temp_v3;
    if ((int)(-(unsigned int)temp_v2 - temp_v1) < 0 != (SBORROW4(0,temp_v1) != SBORROW4(-temp_v1,(unsigned int)temp_v2))) {
      wordMoveOut_002f3764(&temp_v11,&temp_v6,0);
      temp_v12 = temp_v11;
      FUN_002f3774(temp_v13,param_1 + 0x24,&temp_v12);
    }
    else {
      mapIteratorNext4(&temp_v6);
    }
  }
  _ZN9Obj55b28cD1Ev(temp_v9);
  return;
}

} /* extern "C" */
