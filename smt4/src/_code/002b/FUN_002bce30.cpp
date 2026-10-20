/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bce30` (_code @ 0x2bce30, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);
int dataTableGetCount(unsigned int);

extern unsigned int g_aocSystem; /* 0x433158 */

extern int entryListFindById(unsigned int, unsigned int);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


int FUN_002bce30(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  devilGetRecord();
  if (param_1 != 0) {
    temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 2);
    temp_v0 = entryListFindById(g_aocSystem,temp_v4);
    if (temp_v0 == 0) {
      temp_v1 = dataTableGet(1,0);
      temp_v0 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v1);
      if ((temp_v4 < temp_v2) && (temp_v0 = temp_v0 + temp_v4 * 0x28, param_2 != 0)) {
        temp_v0 = temp_v0 + 0x10;
      }
      return temp_v0;
    }
  }
  else {
    temp_v0 = entryListFindById(g_aocSystem,0);
    if (temp_v0 == 0) {
      temp_v1 = dataTableGet(1,0);
      temp_v0 = dataTableGetEntries();
      temp_v3 = dataTableGetCount(temp_v1);
      if ((temp_v3 != 0) && (param_2 != 0)) {
        return temp_v0 + 0x10;
      }
      return temp_v0;
    }
  }
  return temp_v0 + 2;
}

} /* extern "C" */
