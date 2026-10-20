/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcc60` (_code @ 0x2bcc60, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00124178(...);

typedef int romwright_code(...);
/* stack frame of param_8: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_8_stack;

extern int nn_os_Thread_ThreadStart(...); /* 0x144f44 */

/* Supplied declaration required: FUN_00124178. */


void FUN_002bcc60(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned int param_4,int param_5
                 ,unsigned int param_6,unsigned int param_7,unsigned char param_8)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v1 = (param_5 - *param_2) & 0xfffffff8;
  (*(romwright_code *)param_2[1])(param_4,temp_v1);
  piVar3 = (int *)(temp_v1 - 0x18);
  *piVar3 = param_2[2];
  temp_v0 = param_2[3];
  *(unsigned int *)(temp_v1 - 0xc) = temp_v1;
  *(unsigned int *)(temp_v1 - 0x14) = temp_v0;
  *(unsigned int *)(temp_v1 - 0x10) = param_3;
  *(unsigned char *)(temp_v1 - 4) = param_8;
  *(int *)(temp_v1 - 8) = param_5;
  if (param_6 < 0x21) {
    temp_v0 = param_6 + 0x20;
  }
  temp_v2 = 0;
  if (param_6 >= 0x21) {
    if (param_6 + 0xaef62b00 < 0x28) {
      temp_v0 = param_6 + 0xaef62b18;
    }
    else {
      temp_v0 = param_6 + 0x93725b00;
      if (temp_v0 >= 0x41) {
        temp_v0 = 0xffffffff;
      }
    }
  }
  puVar2 = (unsigned int *)&temp_v2;
  FUN_00124178(puVar2,nn_os_Thread_ThreadStart,piVar3,piVar3,temp_v0,param_7);
  if (-1 < (int)puVar2) {
    *param_1 = temp_v2;
    *(unsigned char *)(param_1 + 1) = 0;
    *(unsigned char *)((int)param_1 + 5) = 0;
  }
  return;
}

} /* extern "C" */
