/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350ee0` (_code @ 0x350ee0, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int libc_strcpy(unsigned int *, unsigned int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: libc_strcpy. */


void FUN_00350ee0(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  puVar2 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,0x44,0x10,1);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar2[2] = param_5;
  libc_strcpy(puVar2 + 3,param_2);
  temp_v1 = param_1[2];
  if (temp_v1 != 0) {
    for (temp_v0 = *(int *)(temp_v1 + 0x40); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x40)) {
      temp_v1 = temp_v0;
    }
    *(unsigned int **)(temp_v1 + 0x40) = puVar2;
    puVar2[0xf] = temp_v1;
    puVar2[0x10] = 0;
  }
  else {
    param_1[2] = (int)puVar2;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
  }
  *param_1 = *param_1 + 1;
  return;
}

} /* extern "C" */
