/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2158` (_code @ 0x1d2158, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c32a0(int, int, int, int, int, int);
int FUN_002c3944(void);
int rt_memcpy(unsigned int *, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_00472480; /* 0x472480 */

/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_001d2158(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 * 0x18 + 0x472494);
  puVar1 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,temp_v1 + 0x30,0x10,1);
  FUN_002c3944();
  puVar1[4] = 0xffffffff;
  puVar1[6] = param_1;
  puVar1[5] = 0x3f800000;
  puVar1[10] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[3] = 0x3f800000;
  puVar1[9] = (unsigned int)(puVar1 + 0xc);
  rt_memcpy(puVar1 + 0xc,param_2,temp_v1);
  if (*(romwright_code **)(&DAT_00472480 + param_1 * 0x18) != (romwright_code *)0x0) {
    temp_v0 = (**(romwright_code **)(&DAT_00472480 + param_1 * 0x18))(param_2);
    puVar1[8] = temp_v0;
  }
  return puVar1;
}

} /* extern "C" */
