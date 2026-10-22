/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001036b6` (_code @ 0x1036b6, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00111dc4(int, int *);
int _ZN9Obj55b28cC1EPv(unsigned char [16], int);
int _ZN9Obj55b28cD1Ev(unsigned char [16]);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_00111dc4. */
extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


void FUN_001036b6(unsigned int param_1,unsigned int *param_2,int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned char temp_v2 [16];
  
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(temp_v2,temp_v0 + 0x58);
  if (*(char *)(*param_3 + 0x22) == '\x02') {
    temp_v1 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    FUN_00111dc4(*param_3,&temp_v1);
  }
  _ZN9Obj55b28cD1Ev(temp_v2);
  return;
}

} /* extern "C" */
