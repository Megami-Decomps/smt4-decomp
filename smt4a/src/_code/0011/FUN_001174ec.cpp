/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001174ec` (_code @ 0x1174ec, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f3b58(unsigned int, int, unsigned int);
int systemAcquireHandleList(void);
int _ZN9Obj55abd4C1Ej(...);

extern unsigned char DAT_00559e70; /* 0x559e70 */

extern int _Znwj(unsigned int);
extern int FUN_002ecf28(void);
/* Supplied declaration required: FUN_002f3b58. */
extern unsigned int *FUN_00300ae8(unsigned int, unsigned int);
/* Supplied declaration required: systemAcquireHandleList. */
/* Supplied declaration required: _ZN9Obj55abd4C1Ej. */


int FUN_001174ec(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  puVar1 = (unsigned int *)FUN_00300ae8(param_1,2);
  *puVar1 = (unsigned int)&DAT_00559e70;
  temp_v0 = _ZN9Obj55abd4C1Ej(puVar1 + 4,0);
  systemAcquireHandleList();
  *(unsigned short *)(temp_v0 + 0x20) = 0xb;
  temp_v1 = _Znwj(0x44);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = _ZN9Obj55abd4C1Ej(temp_v1,0);
  }
  temp_v1 = FUN_002ecf28();
  FUN_002f3b58(*(unsigned int *)(temp_v1 + 0xc),0xb,temp_v2);
  return temp_v0 - 0x10;
}

} /* extern "C" */
