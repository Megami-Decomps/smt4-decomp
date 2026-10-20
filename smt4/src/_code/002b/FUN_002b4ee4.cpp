/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4ee4` (_code @ 0x2b4ee4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4f64(unsigned int *, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002b4f64. */
extern unsigned int *FUN_002baed8(void);


unsigned int FUN_002b4ee4(int *param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002baed8();
  puVar2 = puVar1;
  FUN_002b4f64(puVar1,6);
  puVar2[3] = puVar1[0x61];
  *(unsigned char *)(puVar2 + 1) = 10;
  temp_v0 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  puVar2[4] = temp_v0;
  *(unsigned char *)((int)puVar2 + 0x15) = param_2;
  if ((unsigned int *)puVar1[0x5c] == (unsigned int *)0x0) {
    puVar1[0x5b] = (unsigned int)puVar2;
  }
  else {
    *(unsigned int **)puVar1[0x5c] = puVar2;
  }
  puVar1[0x5c] = (unsigned int)puVar2;
  *puVar2 = 0;
  return puVar1[0x5d];
}

} /* extern "C" */
