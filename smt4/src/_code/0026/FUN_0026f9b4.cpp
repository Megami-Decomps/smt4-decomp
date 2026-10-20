/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f9b4` (_code @ 0x26f9b4, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002106f0(unsigned int, int);

extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53c8; /* 0x4c53c8 */
extern unsigned int DAT_004c53cc; /* 0x4c53cc */
extern unsigned int DAT_004c53d0; /* 0x4c53d0 */
extern unsigned int DAT_004c53d4; /* 0x4c53d4 */
extern unsigned int DAT_004c53e0; /* 0x4c53e0 */

/* Supplied declaration required: FUN_002106f0. */
extern int FUN_002c564c(unsigned int);


unsigned int FUN_0026f9b4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    temp_v0 = 0;
    do {
      if (((&DAT_004c53e0)[temp_v0 * 8] & 2) != 0 && ((&DAT_004c53e0)[temp_v0 * 8] & 0x30) != 0) {
        FUN_002106f0((&DAT_004c53c4)[temp_v0 * 8],0);
        (&DAT_004c53d0)[temp_v0 * 8] = 0;
        (&DAT_004c53c8)[temp_v0 * 8] = 0;
        (&DAT_004c53cc)[temp_v0 * 8] = 0;
        (&DAT_004c53d4)[temp_v0 * 8] = 0;
        *(unsigned int *)(temp_v0 * 0x20 + 0x4c53dc) = 0;
        *(unsigned int *)(temp_v0 * 0x20 + 0x4c53d8) = 0;
        temp_v1 = 1;
        (&DAT_004c53e0)[temp_v0 * 8] = 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
  }
  return temp_v1;
}

} /* extern "C" */
