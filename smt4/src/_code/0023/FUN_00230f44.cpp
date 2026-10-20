/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230f44` (_code @ 0x230f44, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aocRecordLookup84(void);
int aocRecordLookup83(void);
int dataTable08Sub2GetRecord(void);
int dataTable08Sub1GetRecord(void);

/* Supplied declaration required: aocRecordLookup84. */
/* Supplied declaration required: aocRecordLookup83. */
extern unsigned int FUN_002ae3c4(unsigned int);
/* Supplied declaration required: dataTable08Sub2GetRecord. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */


unsigned short FUN_00230f44(unsigned short *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = 0;
  temp_v2 = (unsigned int)*param_1;
  temp_v0 = FUN_002ae3c4(temp_v2);
  switch(temp_v0) {
  case 1:
    dataTable08Sub1GetRecord();
    if (temp_v2 != 0) {
      temp_v1 = (unsigned short)*(unsigned char *)(temp_v2 + 0x6f);
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    dataTable08Sub2GetRecord();
    if (temp_v2 != 0) {
      temp_v1 = *(unsigned short *)(temp_v2 + 0x98);
    }
    break;
  case 9:
    aocRecordLookup83();
    if (temp_v2 != 0) {
      temp_v1 = *(unsigned short *)(temp_v2 + 0x26);
    }
    break;
  case 10:
    aocRecordLookup84();
    if (temp_v2 != 0) {
      temp_v1 = *(unsigned short *)(temp_v2 + 0x28);
    }
  }
  return temp_v1;
}

} /* extern "C" */
