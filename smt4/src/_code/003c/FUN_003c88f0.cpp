/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c88f0` (_code @ 0x3c88f0, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable05Sub0GetEntries(void);
int devilGetRecord(void);

/* Supplied declaration required: dataTable05Sub0GetEntries. */
/* Supplied declaration required: devilGetRecord. */
extern int randNextInRange(unsigned int);


unsigned char FUN_003c88f0(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  dataTable05Sub0GetEntries();
  temp_v0 = *(unsigned char *)(param_1 + 1);
  temp_v1 = (unsigned int)*(unsigned short *)(param_2 + 0x46);
  devilGetRecord();
  temp_v3 = (unsigned int)*(unsigned short *)(param_3 + 0x46);
  devilGetRecord();
  temp_v4 = *(char *)(temp_v1 + 2) != '#';
  if (temp_v4) {
    temp_v3 = (unsigned int)*(unsigned char *)(temp_v3 + 2);
  }
  if (!temp_v4 || temp_v3 == 0x23) {
    temp_v0 = temp_v0 >> 1;
  }
  temp_v3 = (unsigned int)temp_v0;
  if ((*(unsigned short *)(param_2 + 0x44) & 2) != 0) {
    if ((*(unsigned short *)(param_3 + 0x44) & 2) != 0) {
      temp_v3 = temp_v3 / 3;
      temp_v2 = randNextInRange((temp_v3 - 1) & 0xffff);
      return temp_v2 == 1;
    }
  }
  else if ((*(unsigned short *)(param_3 + 0x44) & 2) == 0) {
    temp_v2 = randNextInRange((temp_v3 - 1) & 0xffff);
    return temp_v2 == 1;
  }
  temp_v3 = (unsigned int)(temp_v0 >> 1);
  temp_v2 = randNextInRange((temp_v3 - 1) & 0xffff);
  return temp_v2 == 1;
}

} /* extern "C" */
