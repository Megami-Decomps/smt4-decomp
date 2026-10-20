/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113cd0` (_code @ 0x113cd0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned int onlineUrlGetAddress(unsigned int);


void FUN_00113cd0(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [12];
  int *piStack_24;
  unsigned int uStack_20;
  unsigned int temp_v4;
  unsigned int uStack_18;
  
  temp_v0 = param_1[3];
  temp_v1 = param_1[1];
  piStack_24 = param_1;
  uStack_20 = param_2;
  temp_v4 = param_3;
  uStack_18 = param_4;
  temp_v2 = onlineUrlGetAddress(param_2);
  (**(romwright_code **)(*param_1 + 0x18))
            (temp_v3,param_1,temp_v2,(char)temp_v1,(char)temp_v0,temp_v4,param_4,0);
  return;
}

} /* extern "C" */
