/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348e10` (_code @ 0x348e10, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b63c0(void);

extern int FUN_00240a6c(unsigned int);
/* Supplied declaration required: FUN_002b63c0. */
extern int FUN_002bbb5c(void);


void FUN_00348e10(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *pbVar5;
  
  temp_v0 = FUN_002bbb5c();
  temp_v3 = 0;
  pbVar5 = (unsigned char *)(temp_v0 + param_1 + 0x25c);
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2;
    FUN_002b63c0();
    if ((((temp_v1 != 0) && ((*(unsigned char *)(temp_v1 + 7) & 1) == 0)) &&
        (*(unsigned short *)(temp_v1 + 0x19c) == param_1)) &&
       (temp_v0 = FUN_00240a6c(temp_v2 & 0xffff), temp_v0 != 0)) {
      temp_v3 = temp_v3 + 1;
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 400);
  if ((int)(unsigned int)*pbVar5 < temp_v3) {
    *pbVar5 = (unsigned char)temp_v3;
  }
  return;
}

} /* extern "C" */
