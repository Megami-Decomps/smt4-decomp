/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021073c` (_code @ 0x21073c, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSequenceRequest(unsigned int, int);

extern int DAT_004e3f68; /* 0x4e3f68 */
extern unsigned int DAT_004e3f6c; /* 0x4e3f6c */
extern unsigned int DAT_004e3f70; /* 0x4e3f70 */

extern int FUN_002b8cec(unsigned int);
extern int FUN_002bfde4(unsigned int);
/* Supplied declaration required: asdSequenceRequest. */


unsigned int FUN_0021073c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  for (temp_v0 = DAT_004e3f6c; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
  }
  temp_v1 = FUN_002bfde4(0);
  if (temp_v1 != 0) {
    asdSequenceRequest(*(unsigned int *)(DAT_004e3f68 + DAT_004e3f70 * 8 + 4),0);
    return 0xffffffff;
  }
  temp_v1 = FUN_002b8cec(5);
  if (temp_v1 != 0) {
    DAT_004e3f70 = DAT_004e3f70 - 1;
  }
  temp_v1 = FUN_002b8cec(6);
  if (temp_v1 != 0) {
    DAT_004e3f70 = DAT_004e3f70 + 1;
  }
  if ((int)DAT_004e3f70 < 0) {
    DAT_004e3f70 = DAT_004e3f6c - 1;
  }
  if (DAT_004e3f6c <= DAT_004e3f70) {
    DAT_004e3f70 = 0;
  }
  temp_v1 = FUN_002bfde4(4);
  if (temp_v1 != 0) {
    DAT_004e3f70 = DAT_004e3f70 - 0x19;
  }
  temp_v1 = FUN_002bfde4(3);
  if (temp_v1 != 0) {
    DAT_004e3f70 = DAT_004e3f70 + 0x19;
  }
  if ((int)DAT_004e3f70 < 1) {
    DAT_004e3f70 = 0;
  }
  if (DAT_004e3f6c <= DAT_004e3f70) {
    DAT_004e3f70 = DAT_004e3f6c - 1;
  }
  return 0;
}

} /* extern "C" */
