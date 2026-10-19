/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011be58` (_code @ 0x11be58, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e459; /* 0x44e459 */
extern unsigned char DAT_0044e45a; /* 0x44e45a */
extern unsigned short DAT_0044e45c; /* 0x44e45c */
extern unsigned short DAT_0044e45e; /* 0x44e45e */
extern unsigned int *DAT_0044e460; /* 0x44e460 */
extern unsigned int DAT_0044e468; /* 0x44e468 */
extern unsigned int DAT_0044e46c; /* 0x44e46c */
extern unsigned int DAT_0044e470; /* 0x44e470 */
extern unsigned int DAT_0044e474; /* 0x44e474 */
extern unsigned char DAT_004c6484; /* 0x4c6484 */
extern unsigned char DAT_004c64a4; /* 0x4c64a4 */
extern unsigned char DAT_004c64c4; /* 0x4c64c4 */

/* Supplied declaration required: FUN_0012a294. */
extern int FUN_002c1364(unsigned int *, char *, unsigned int, unsigned int);
extern int FUN_002c1398(unsigned int);
extern unsigned int FUN_002c30c4(char *);


int FUN_0011be58(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (DAT_0044e460 != (unsigned int *)0x0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = FUN_002c1398(0);
    if (-1 < temp_v0) {
      temp_v1 = FUN_002c30c4("dsp::DSP");
      temp_v0 = FUN_002c1364(&DAT_0044e46c,"dsp::DSP",temp_v1,0);
      if (-1 < temp_v0) {
        DAT_0044e460 = &DAT_0044e468;
        DAT_0044e468 = DAT_0044e46c;
        temp_v0 = 0;
        temp_v2 = 8;
        do {
          *(unsigned int *)(&DAT_004c64a4 + temp_v0 * 4) = 0;
          *(unsigned int *)(&DAT_004c6484 + temp_v0 * 4) = 0;
          *(unsigned int *)(temp_v0 * 4 + 0x4c6464) = 0;
          temp_v2 = temp_v2 - 1;
          temp_v0 = temp_v0 + 1;
        } while (temp_v2 != 0);
        DAT_0044e459 = 0;
        DAT_0044e470 = 0;
        DAT_0044e474 = 0;
        DAT_0044e45c = 0;
        DAT_0044e45e = 0;
        DAT_0044e45a = 0;
        FUN_0012a294(&DAT_004c64c4);
        temp_v0 = 0;
      }
    }
  }
  return temp_v0;
}
