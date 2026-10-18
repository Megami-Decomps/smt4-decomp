/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312edc` (_code @ 0x312edc, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00245318(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);
extern int FUN_002c0bcc(unsigned int);
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned short *FUN_002c0e9c(void);


unsigned int FUN_00312edc(void)

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
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00293c98();
  temp_v1 = FUN_00245318(temp_v1,8);
  puVar3 = (unsigned short *)FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v1);
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
  temp_v3 = FUN_002c0bcc((temp_v3 - 1U) & 0xffff);
  FUN_0028df54(temp_v4[temp_v3]);
  return 1;
}
