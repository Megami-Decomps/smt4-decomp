/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c8c0` (_code @ 0x10c8c0, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned char [16], int);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);
int FUN_002ee4d2(int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002ee4d2. */


void FUN_0010c8c0(int param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  int temp_v1;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned char temp_v2 [16];
  
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(temp_v2,temp_v0 + 0x58);
  temp_v0 = *(int *)(param_1 + 0x74);
  if (temp_v0 != 0) {
    FUN_002ee4d2(temp_v0);
    pcVar2 = *(romwright_code **)(temp_v0 + 0x94);
    *(unsigned int *)(temp_v0 + 0x94) = 0;
    temp_v1 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    (*pcVar2)(temp_v0,&temp_v1,temp_v0 + 0x98);
  }
  _ZN9Obj55b28cD1Ev(temp_v2);
  return;
}

} /* extern "C" */
