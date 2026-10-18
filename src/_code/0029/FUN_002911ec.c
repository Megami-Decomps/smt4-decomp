/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002911ec` (_code @ 0x2911ec, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044e09c; /* 0x44e09c */
extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53c8; /* 0x4c53c8 */
extern unsigned int DAT_004c53cc; /* 0x4c53cc */
extern unsigned int DAT_004c53e0; /* 0x4c53e0 */
extern unsigned int DAT_004c53e4; /* 0x4c53e4 */
extern unsigned int DAT_004c53e8; /* 0x4c53e8 */
extern unsigned int DAT_004c53ec; /* 0x4c53ec */
extern unsigned int DAT_004c5400; /* 0x4c5400 */

extern int FUN_002c583c(unsigned int);


void FUN_002911ec(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c583c(1);
  if (temp_v0 == 0) {
    if ((DAT_004c53e0 & 2) != 0) {
      if ((DAT_004c53e0 & 0x20) != 0) {
        DAT_004c53e0 = (DAT_004c53e0 & 0xffffffdf) | 0x40;
        DAT_0044e09c = DAT_004c53c4;
        DAT_004c53c8 = param_1;
      }
      else if ((DAT_004c53e0 & 0x400) == 0) {
        DAT_004c53cc = 0x1e;
        DAT_004c53e0 = DAT_004c53e0 | 8;
      }
    }
    if ((DAT_004c5400 & 2) != 0) {
      if ((DAT_004c5400 & 0x20) != 0) {
        DAT_004c5400 = (DAT_004c5400 & 0xffffffdf) | 0x40;
        DAT_0044e09c = DAT_004c53e4;
        DAT_004c53e8 = param_1;
      }
      else if ((DAT_004c5400 & 0x400) == 0) {
        DAT_004c53ec = 0x1e;
        DAT_004c5400 = DAT_004c5400 | 8;
        return;
      }
    }
  }
  return;
}
