/* NON_MATCHING: romwright 0.5.0 decompilation of `asdMemoryAlloc` (_code @ 0x2c5300, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b23f4(void);
int FUN_002b24d8(...);
int FUN_002c3944(unsigned int *, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_00465120; /* 0x465120 */

/* Supplied declaration required: FUN_002b23f4. */
/* Supplied declaration required: FUN_002b24d8. */
/* Supplied declaration required: FUN_002c3944. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int * asdMemoryAlloc(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4,
                   unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  if (param_1 != (unsigned int *)0x20000 && param_1 != (unsigned int *)0x30000) {
    nn_os_CriticalSection_Enter((*(unsigned int *)((unsigned char *)&DAT_00465120 + 0x4)));
    temp_v0 = (param_4 + 0x13bU) & 0xffffff80;
    FUN_002b24d8(param_1,param_2,param_3,temp_v0,param_5);
    *param_1 = temp_v0;
    *(unsigned short *)(param_1 + 1) = 0x80;
    temp_v0 = (0x80 - ((unsigned int)(param_1 + 0xf) & 0x7f)) & 0x7f;
    *(unsigned short *)((int)param_1 + 6) = 0;
    puVar1 = (unsigned int *)((int)param_1 + temp_v0 + 0x3c);
    *(unsigned int **)((int)param_1 + temp_v0 + 0x38) = param_1;
    FUN_002b23f4();
    FUN_002c3944(puVar1,param_4);
    nn_os_CriticalSection_Leave((*(unsigned int *)((unsigned char *)&DAT_00465120 + 0x4)));
    return puVar1;
  }
  nn_os_CriticalSection_Enter((*(unsigned int *)((unsigned char *)&DAT_00465120 + 0x4)));
  FUN_002b24d8(param_1,param_2,param_3,param_4,param_5);
  nn_os_CriticalSection_Leave((*(unsigned int *)((unsigned char *)&DAT_00465120 + 0x4)));
  return param_1;
}

} /* extern "C" */
