/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002193bc` (_code @ 0x2193bc, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);

extern unsigned int questIsCompleted(unsigned short);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */


void FUN_002193bc(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = questIsCompleted(*param_1);
  temp_v1 = questIsCompleted(*param_2);
  if (((temp_v0 & ~temp_v1) == 0) && ((temp_v1 & ~temp_v0) == 0)) {
    temp_v0 = (unsigned int)*param_1;
    dataTable1bOr1cGetRecord();
    temp_v1 = (unsigned int)*param_2;
    dataTable1bOr1cGetRecord();
    if ((temp_v0 != 0) && (temp_v1 != 0)) {
      if (*(char *)(temp_v0 + 6) != '\x06') {
        if (*(char *)(temp_v1 + 6) == '\x06') {
          return;
        }
      }
      else if (*(char *)(temp_v1 + 6) != '\x06') {
        return;
      }
      dataTable1bOr1cGetRecord();
      dataTable1bOr1cGetRecord();
    }
  }
  return;
}

} /* extern "C" */
