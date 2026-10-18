/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047ff00` (_code @ 0x47ff00, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short *FUN_001801a4(void);
/* Supplied declaration required: FUN_00192608. */
extern int FUN_003dfe60(void);


void FUN_0047ff00(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  
  temp_v2 = FUN_003dfe60();
  temp_v3 = param_1;
  FUN_00192608();
  if ((temp_v3 != 0) &&
     ((((temp_v0 = *(unsigned char *)(temp_v3 + 0x30), (temp_v0 & 1) != 0 && (temp_v2 == 4)) ||
       (((temp_v0 & 4) != 0 && (temp_v2 == 5)))) || (((temp_v0 & 2) != 0 && (temp_v2 == 1)))))) {
    puVar5 = (unsigned short *)FUN_001801a4();
    temp_v3 = param_1;
    FUN_00192608();
    temp_v1 = (unsigned short)param_1;
    switch(*(unsigned char *)(temp_v3 + 0x22)) {
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
