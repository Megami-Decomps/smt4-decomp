/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029206c` (_code @ 0x29206c, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53c8; /* 0x4c53c8 */
extern unsigned int DAT_004c53cc; /* 0x4c53cc */
extern unsigned int DAT_004c53d0; /* 0x4c53d0 */
extern unsigned int DAT_004c53d4; /* 0x4c53d4 */
extern unsigned int DAT_004c53e0; /* 0x4c53e0 */

/* Supplied declaration required: FUN_002106f0. */
extern int FUN_002c564c(unsigned int);


void FUN_0029206c(int param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    temp_v0 = 0;
    do {
      temp_v1 = (&DAT_004c53e0)[temp_v0 * 8];
      if (((temp_v1 & 2) == 0) || ((temp_v1 & 0x30) != 0)) {
        if (param_3 != 0) goto LAB_002920b8;
      }
      else if (param_1 != -1) {
        if ((&DAT_004c53d0)[temp_v0 * 8] == param_1) {
          if (param_2 == 0) {
LAB_002920b8:
            FUN_002106f0((&DAT_004c53c4)[temp_v0 * 8],0);
            (&DAT_004c53d0)[temp_v0 * 8] = 0;
            (&DAT_004c53c8)[temp_v0 * 8] = 0;
            (&DAT_004c53cc)[temp_v0 * 8] = 0;
            (&DAT_004c53d4)[temp_v0 * 8] = 0;
            *(unsigned int *)(temp_v0 * 0x20 + 0x4c53dc) = 0;
            *(unsigned int *)(temp_v0 * 0x20 + 0x4c53d8) = 0;
            (&DAT_004c53e0)[temp_v0 * 8] = 0;
          }
          else {
            (&DAT_004c53cc)[temp_v0 * 8] = param_2;
            (&DAT_004c53e0)[temp_v0 * 8] = temp_v1 | 8;
          }
        }
      }
      else {
        if (param_2 == 0) goto LAB_002920b8;
        (&DAT_004c53cc)[temp_v0 * 8] = param_2;
        (&DAT_004c53e0)[temp_v0 * 8] = temp_v1 | 8;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
  }
  return;
}
