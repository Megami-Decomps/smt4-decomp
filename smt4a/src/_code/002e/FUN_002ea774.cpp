/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea774` (_code @ 0x2ea774, 0xb6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00109240(int, int, unsigned int, int);
int FUN_0012df8a(unsigned char [8], int, int);
int _ZN9Obj55b28cC1EPv(unsigned char [12], unsigned int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int onlineSockAddrConstruct(unsigned char [32]);
int FUN_002ea852(int, unsigned int, unsigned char [4]);
int onlineUrlGetAddress(...);

/* stack frame of param_4: 4 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char spAC; /* 0xac: local_ac */
    unsigned char spB0; /* 0xb0: local_b0 */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_4_stack;

/* Supplied declaration required: FUN_00109240. */
extern int FUN_00123820(unsigned int);
/* Supplied declaration required: FUN_0012df8a. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int _Znwj(unsigned int);
/* Supplied declaration required: onlineSockAddrConstruct. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_002ea852. */
extern unsigned char FUN_002ea928(unsigned int);
/* Supplied declaration required: onlineUrlGetAddress. */
extern unsigned int FUN_002ea948(unsigned char *, unsigned int, unsigned char);
extern int FUN_002ea962(unsigned char *, unsigned int);


int FUN_002ea774(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [4];
  unsigned char temp_v6;
  unsigned char temp_v7 [32];
  unsigned char temp_v8 [12];
  unsigned char temp_v9 [40];
  unsigned char temp_v10 [36];
  unsigned char temp_v11 [8];
  int iStack_24;
  unsigned int temp_v12;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v4 = 0;
  iStack_24 = param_1;
  temp_v12 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v1 = onlineGetActiveLock();
  _ZN9Obj55b28cC1EPv(temp_v8,temp_v1);
  onlineSockAddrConstruct(temp_v7);
  temp_v2 = FUN_00123820(temp_v12);
  if (temp_v2 != 0) {
    temp_v5[0] = FUN_002ea928(temp_v12);
    temp_v1 = onlineUrlGetAddress(temp_v12);
    temp_v2 = param_1 + 0x54;
    temp_v4 = temp_v2;
    FUN_002ea852(temp_v2,temp_v1,temp_v5);
    if (temp_v4 == 0) {
      temp_v4 = _Znwj(0x360);
      if (temp_v4 != 0) {
        FUN_00109240(temp_v4,param_1,temp_v12,param_1 + 0xa4);
      }
      else {
        temp_v4 = 0;
      }
      *(short *)(temp_v4 + 0x8e) = (short)param_3;
      temp_v0 = FUN_002ea928(temp_v12);
      temp_v6 = temp_v0;
      temp_v1 = onlineUrlGetAddress(temp_v4 + 8);
      temp_v1 = FUN_002ea948(temp_v10,temp_v1,temp_v0);
      temp_v3 = FUN_002ea962(temp_v9,temp_v1);
      *(int *)(temp_v3 + 0x24) = temp_v4;
      FUN_0012df8a(temp_v11,temp_v2,temp_v3);
    }
  }
  _ZN9Obj55b28cD1Ev(temp_v8);
  return temp_v4;
}

} /* extern "C" */
