/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c32a0` (_code @ 0x2c32a0, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b23f4(void);
int FUN_002b24d8(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002c3944(int, int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern unsigned char DAT_00465120; /* 0x465120 */

/* Supplied declaration required: FUN_002b23f4. */
/* Supplied declaration required: FUN_002b24d8. */
/* Supplied declaration required: FUN_002c3944. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_002c32a0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                unsigned int param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  nn_os_CriticalSection_Enter((*(unsigned int *)((unsigned char *)&DAT_00465120 + 0x4)));
  if (param_5 < 0x80) {
    param_5 = 0x80;
  }
  temp_v1 = (param_4 + param_5 * 2 + 0x3b) & -param_5;
  FUN_002b24d8(param_1,param_2,param_3,temp_v1,param_6);
  *param_1 = temp_v1;
  *(short *)(param_1 + 1) = (short)param_5;
  *(unsigned short *)((int)param_1 + 6) = 0;
  temp_v1 = (param_5 & 0xffff) - 1;
  temp_v1 = ((param_5 & 0xffff) - ((unsigned int)(param_1 + 0xf) & temp_v1)) & temp_v1;
  temp_v0 = (int)param_1 + temp_v1 + 0x3c;
  *(unsigned int **)((int)param_1 + temp_v1 + 0x38) = param_1;
  FUN_002b23f4();
  FUN_002c3944(temp_v0,param_4);
  nn_os_CriticalSection_Leave((*(unsigned int *)((unsigned char *)&DAT_00465120 + 0x4)));
  return temp_v0;
}

} /* extern "C" */
