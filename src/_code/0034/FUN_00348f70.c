/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348f70` (_code @ 0x348f70, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00240a6c(unsigned int);
extern int FUN_00287894(unsigned int);
/* Supplied declaration required: FUN_0028eeb8. */
extern int FUN_00298fa0(unsigned int, unsigned int);
extern int FUN_002adc88(void);
/* Supplied declaration required: FUN_002b63c0. */
extern int FUN_002c09bc(void);


unsigned int FUN_00348f70(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002c09bc();
  temp_v3 = 0;
  temp_v2 = 0;
  *(unsigned int *)(temp_v0 + 0x1f85c) = *(unsigned int *)(temp_v0 + 0x1f458);
  do {
    temp_v0 = FUN_00298fa0(temp_v2 & 0xffff,0);
    if (temp_v0 == 0) {
      temp_v1 = temp_v2;
      FUN_002b63c0();
      if ((((temp_v1 != 0) && (*(char *)(temp_v1 + 6) == '\x06')) && ((*(unsigned char *)(temp_v1 + 7) & 1) == 0))
         && (temp_v0 = FUN_00240a6c(temp_v2 & 0xffff), temp_v0 != 0)) {
        temp_v1 = temp_v2;
        temp_v0 = FUN_002adc88();
        temp_v0 = temp_v0 + temp_v1 * 4;
        *(unsigned char *)(temp_v0 + 0x201) = 0;
        *(unsigned char *)(temp_v0 + 0x202) = *(unsigned char *)(temp_v0 + 0x202) & 0xfe;
        *(unsigned char *)(temp_v0 + 0x200) = (*(unsigned char *)(temp_v0 + 0x200) & 0x3f) | 0x21;
        temp_v0 = FUN_00287894(temp_v1);
        if (temp_v0 == 0) {
          FUN_0028eeb8(temp_v1);
        }
        temp_v3 = 1;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 400);
  return temp_v3;
}
