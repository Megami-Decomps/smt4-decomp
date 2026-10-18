/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9cac` (_code @ 0x3a9cac, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014aa78(void);
extern int FUN_0014bef4(unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned short *FUN_00192798(void);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern unsigned int FUN_003ef960(unsigned int, unsigned int);


unsigned int FUN_003a9cac(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short *puVar6;
  unsigned short *puVar7;
  unsigned short temp_v4 [12];
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_0014aa78();
  temp_v1 = FUN_003ef960(temp_v1,8);
  puVar3 = (unsigned short *)FUN_00192798();
  temp_v2 = FUN_00192748(temp_v1);
  temp_v2 = temp_v2 >> 1;
  temp_v3 = 0;
  if (temp_v2 != 0) {
    puVar6 = puVar3 + 1;
    do {
      if (*puVar6 == temp_v0) {
        puVar7 = temp_v4 + temp_v3;
        temp_v3 = temp_v3 + 1;
        *puVar7 = *puVar3;
      }
      temp_v2 = temp_v2 - 1;
      puVar6 = puVar6 + 2;
      puVar3 = puVar3 + 2;
    } while (temp_v2 != 0);
  }
  temp_v3 = FUN_0014bef4((temp_v3 - 1U) & 0xffff);
  FUN_003283ac(temp_v4[temp_v3]);
  return 1;
}
