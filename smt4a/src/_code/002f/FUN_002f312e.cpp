/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f312e` (_code @ 0x2f312e, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int buffersClearFlagsRefresh(int);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: buffersClearFlagsRefresh. */


void FUN_002f312e(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [12];
  unsigned char *temp_v6;
  int temp_v7;
  int iStack_20;
  int temp_v8;
  unsigned int temp_v9;
  
  iStack_20 = param_1;
  temp_v8 = param_2;
  temp_v9 = param_3;
  FUN_002e6e34(temp_v5,*(unsigned int *)(param_1 + 0x22c));
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14)) {
    if (*(char *)(param_1 + 0x22a) != '\0') {
      buffersClearFlagsRefresh(param_1);
    }
    temp_v3 = (unsigned int)*(unsigned char *)(param_1 + 0x228);
    temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 0x229);
    for (temp_v2 = 0; temp_v2 < temp_v9; temp_v2 = temp_v2 + 1) {
      temp_v3 = (temp_v3 + 1) & 0xff;
      temp_v1 = param_1 + temp_v3;
      temp_v7 = temp_v1 + 0x120;
      temp_v0 = *(unsigned char *)(temp_v1 + 0x128);
      temp_v6 = (unsigned char *)(temp_v1 + 0x128);
      temp_v4 = (temp_v0 + temp_v4) & 0xff;
      pbVar3 = (unsigned char *)(param_1 + temp_v4 + 0x128);
      *temp_v6 = *pbVar3;
      *pbVar3 = temp_v0;
      *(unsigned char *)(temp_v8 + temp_v2) =
           *(unsigned char *)(temp_v8 + temp_v2) ^
           *(unsigned char *)(param_1 + (unsigned int)(unsigned char)(*(char *)(temp_v1 + 0x128) +
                                           *(char *)(param_1 + temp_v4 + 0x128)) + 0x128);
    }
    *(char *)(param_1 + 0x228) = (char)temp_v3;
    *(char *)(param_1 + 0x229) = (char)temp_v4;
  }
  _ZN9Obj55b28cD1Ev(temp_v5);
  return;
}

} /* extern "C" */
