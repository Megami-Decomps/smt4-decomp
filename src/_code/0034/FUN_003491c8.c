/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003491c8` (_code @ 0x3491c8, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00240b9c(unsigned int);
extern int FUN_00287afc(unsigned int);
/* Supplied declaration required: FUN_0028f15c. */
extern int FUN_0029923c(unsigned int, unsigned int);
extern int FUN_002adf14(void);
/* Supplied declaration required: FUN_002b6700. */
extern int FUN_002c0b94(void);


unsigned int FUN_003491c8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002c0b94();
  temp_v3 = 0;
  temp_v2 = 0;
  *(unsigned int *)(temp_v0 + 0x1f85c) = *(unsigned int *)(temp_v0 + 0x1f458);
  do {
    temp_v0 = FUN_0029923c(temp_v2 & 0xffff,0);
    if (temp_v0 == 0) {
      temp_v1 = temp_v2;
      FUN_002b6700();
      if ((((temp_v1 != 0) && (*(char *)(temp_v1 + 6) == '\x06')) && ((*(unsigned char *)(temp_v1 + 7) & 1) == 0))
         && (temp_v0 = FUN_00240b9c(temp_v2 & 0xffff), temp_v0 != 0)) {
        temp_v1 = temp_v2;
        temp_v0 = FUN_002adf14();
        temp_v0 = temp_v0 + temp_v1 * 4;
        *(unsigned char *)(temp_v0 + 0x201) = 0;
        *(unsigned char *)(temp_v0 + 0x202) = *(unsigned char *)(temp_v0 + 0x202) & 0xfe;
        *(unsigned char *)(temp_v0 + 0x200) = (*(unsigned char *)(temp_v0 + 0x200) & 0x3f) | 0x21;
        temp_v0 = FUN_00287afc(temp_v1);
        if (temp_v0 == 0) {
          FUN_0028f15c(temp_v1);
        }
        temp_v3 = 1;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 400);
  return temp_v3;
}
