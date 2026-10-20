/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a69e0` (_code @ 0x4a69e0, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);
int FUN_00480ba0(void);

/* Supplied declaration required: dataTable04FindById. */
extern int FUN_003a6868(unsigned short);
/* Supplied declaration required: FUN_00480ba0. */


int FUN_004a69e0(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v1 = (unsigned int)*param_1;
  FUN_00480ba0();
  temp_v2 = (unsigned int)*param_2;
  FUN_00480ba0();
  temp_v3 = FUN_003a6868(*(unsigned short *)(temp_v1 + 0x26));
  temp_v4 = FUN_003a6868(*(unsigned short *)(temp_v2 + 0x26));
  temp_v3 = temp_v3 - temp_v4;
  if (temp_v3 == 0) {
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
    dataTable04FindById();
    temp_v0 = *(unsigned short *)(temp_v1 + 0x2c);
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x26);
    dataTable04FindById();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x2c) - (unsigned int)temp_v0;
    if (temp_v3 == 0) {
      temp_v3 = (unsigned int)*param_1 - (unsigned int)*param_2;
    }
  }
  return temp_v3;
}

} /* extern "C" */
