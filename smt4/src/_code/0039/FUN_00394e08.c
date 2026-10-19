/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394e08` (_code @ 0x394e08, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002471d8(void);
/* Supplied declaration required: FUN_002b45e8. */
extern unsigned short *FUN_002b63ac(void);


void FUN_00394e08(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  
  temp_v2 = FUN_002471d8();
  temp_v3 = param_1;
  FUN_002b45e8();
  if ((temp_v3 != 0) &&
     ((((temp_v0 = *(unsigned char *)(temp_v3 + 0x60), (temp_v0 & 1) != 0 && (temp_v2 == 4)) ||
       (((temp_v0 & 4) != 0 && (temp_v2 == 5)))) || (((temp_v0 & 2) != 0 && (temp_v2 == 1)))))) {
    puVar5 = (unsigned short *)FUN_002b63ac();
    temp_v3 = param_1;
    FUN_002b45e8();
    temp_v1 = (unsigned short)param_1;
    switch(*(unsigned char *)(temp_v3 + 0x52)) {
    case 2:
      *puVar5 = temp_v1;
      return;
    case 3:
      puVar5[1] = temp_v1;
      return;
    case 4:
      puVar5[3] = temp_v1;
      return;
    case 5:
      puVar5[4] = temp_v1;
      return;
    case 6:
      puVar5[5] = temp_v1;
      return;
    case 7:
      puVar5[6] = temp_v1;
      return;
    case 8:
      puVar5[2] = temp_v1;
      return;
    }
  }
  return;
}
