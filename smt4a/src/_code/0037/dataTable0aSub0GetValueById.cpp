/* NON_MATCHING: romwright 0.5.0 decompilation of `dataTable0aSub0GetValueById` (_code @ 0x37d9fc, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


unsigned short dataTable0aSub0GetValueById(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar6;
  
  temp_v0 = dataTableGet(10,0);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v3 = temp_v2 & 1;
    temp_v4 = 0;
    if (temp_v3 != 0) {
      do {
        if (*(unsigned short *)(temp_v1 + temp_v4 * 8) == param_1) {
          return *(unsigned short *)(temp_v1 + temp_v4 * 8 + 6);
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < (int)temp_v3);
    }
  }
  while( 1 ) {
    temp_v4 = temp_v3;
    if (temp_v2 <= temp_v4) {
      return 0;
    }
    puVar6 = (unsigned short *)(temp_v1 + temp_v4 * 8);
    if (*puVar6 == param_1) break;
    if (puVar6[4] == param_1) {
      return *(unsigned short *)(temp_v1 + temp_v4 * 8 + 0xe);
    }
    temp_v3 = temp_v4 + 2;
  }
  return *(unsigned short *)(temp_v1 + temp_v4 * 8 + 6);
}

} /* extern "C" */
