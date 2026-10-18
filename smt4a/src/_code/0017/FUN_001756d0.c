/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001756d0` (_code @ 0x1756d0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int *FUN_00175678(void);
/* Supplied declaration required: FUN_0019102c. */


unsigned int FUN_001756d0(int *param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_00175678();
  puVar2 = puVar1;
  FUN_0019102c(puVar1,6);
  puVar2[3] = puVar1[0x61];
  *(unsigned char *)(puVar2 + 1) = 9;
  temp_v0 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  puVar2[4] = temp_v0;
  *(unsigned char *)(puVar2 + 5) = param_2;
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
