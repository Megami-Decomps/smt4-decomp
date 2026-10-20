/* NON_MATCHING: romwright 0.5.0 decompilation of `QcUtility_CountFlaggedSubQuests` (_code @ 0x348b2c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);

extern int gameGetFlagBlock(void);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */


int QcUtility_CountFlaggedSubQuests(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v2 = 100;
  do {
    temp_v0 = temp_v2;
    dataTable1bOr1cGetRecord();
    if ((temp_v0 != 0) &&
       (temp_v1 = gameGetFlagBlock(), (*(unsigned char *)(temp_v1 + (temp_v2 & 0xffff) * 4 + 0x200) & 8) != 0)) {
      temp_v3 = temp_v3 + 1;
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 400);
  return temp_v3;
}

} /* extern "C" */
