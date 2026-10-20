/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341098` (_code @ 0x341098, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int slotInit(unsigned int, unsigned int, int, int);

extern unsigned char LAB_003410e8; /* 0x3410e8 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: slotInit. */
extern unsigned int slotReset(void);


unsigned int FUN_00341098(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x4c;
  FUN_00178b04(0x4c,&LAB_003410e8,0x32);
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = slotReset();
  }
  slotInit(temp_v1,param_2,param_1 * 6,param_1 << 2);
  return temp_v1;
}

} /* extern "C" */
