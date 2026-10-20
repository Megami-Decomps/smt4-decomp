/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f72d4` (_code @ 0x1f72d4, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00256fec(void);
int FUN_00257108(void);
int FUN_0025715c(void);
int FUN_00268fc4(void);
int effPolyTexCreate(void);
int rt_memcpy_w(int, int, int);

extern unsigned int FUN_00256fdc(unsigned int);
/* Supplied declaration required: FUN_00256fec. */
/* Supplied declaration required: FUN_00257108. */
/* Supplied declaration required: FUN_0025715c. */
/* Supplied declaration required: FUN_00268fc4. */
/* Supplied declaration required: effPolyTexCreate. */
/* Supplied declaration required: rt_memcpy_w. */


int FUN_001f72d4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  effPolyTexCreate();
  temp_v1 = *(unsigned int *)(param_1 + 200);
  FUN_00268fc4();
  *(unsigned int *)(temp_v0 + 200) = temp_v1;
  rt_memcpy_w(temp_v0 + 0x30,param_1 + 0x30,0x98);
  if (*(int *)(param_1 + 0xd0) != 0) {
    if (*(int *)(temp_v0 + 0xd0) != 0) {
      FUN_0025715c();
    }
    temp_v1 = *(unsigned int *)(param_1 + 0xd0);
    FUN_00256fec();
    *(unsigned int *)(temp_v0 + 0xd0) = temp_v1;
  }
  else if (*(int *)(param_1 + 0xcc) != 0) {
    if (*(int *)(temp_v0 + 0xcc) != 0) {
      FUN_00257108();
    }
    temp_v1 = FUN_00256fdc(*(unsigned int *)(param_1 + 0xcc));
    *(unsigned int *)(temp_v0 + 0xcc) = temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
