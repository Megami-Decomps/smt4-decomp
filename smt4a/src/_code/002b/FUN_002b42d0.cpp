/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b42d0` (_code @ 0x2b42d0, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int handleBlockRefCreate(void);
int handleBlockRefDrop(void);
int handleBlockUnref(void);
int FUN_00271d28(void);
int effPolyTexCreate(void);
int rt_memcpy_w(int, int, int);

/* Supplied declaration required: handleBlockRefCreate. */
extern unsigned int handleRefIncrement(unsigned int);
/* Supplied declaration required: handleBlockRefDrop. */
/* Supplied declaration required: handleBlockUnref. */
/* Supplied declaration required: FUN_00271d28. */
/* Supplied declaration required: effPolyTexCreate. */
/* Supplied declaration required: rt_memcpy_w. */


int FUN_002b42d0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  effPolyTexCreate();
  temp_v1 = *(unsigned int *)(param_1 + 200);
  FUN_00271d28();
  *(unsigned int *)(temp_v0 + 200) = temp_v1;
  rt_memcpy_w(temp_v0 + 0x30,param_1 + 0x30,0x98);
  if (*(int *)(param_1 + 0xd0) != 0) {
    if (*(int *)(temp_v0 + 0xd0) != 0) {
      handleBlockRefDrop();
    }
    temp_v1 = *(unsigned int *)(param_1 + 0xd0);
    handleBlockRefCreate();
    *(unsigned int *)(temp_v0 + 0xd0) = temp_v1;
  }
  else if (*(int *)(param_1 + 0xcc) != 0) {
    if (*(int *)(temp_v0 + 0xcc) != 0) {
      handleBlockUnref();
    }
    temp_v1 = handleRefIncrement(*(unsigned int *)(param_1 + 0xcc));
    *(unsigned int *)(temp_v0 + 0xcc) = temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
