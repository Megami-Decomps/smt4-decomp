/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a640` (_code @ 0x40a640, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable18Sub0GetCount(void);
int dataTable18Sub0GetEntries(void);

extern int gameDataBlocksGetStats(void);
/* Supplied declaration required: dataTable18Sub0GetCount. */
/* Supplied declaration required: dataTable18Sub0GetEntries. */


void FUN_0040a640(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  dataTable18Sub0GetEntries();
  temp_v1 = param_1;
  dataTable18Sub0GetCount();
  temp_v3 = 0;
  if (temp_v3 < temp_v1) {
    do {
      temp_v2 = param_1 + temp_v3 * 0x94;
      temp_v4 = (unsigned int)*(unsigned char *)(param_1 + temp_v3 * 0x94);
      temp_v0 = *(char *)(temp_v2 + 1);
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v2 + 2);
      if (temp_v0 != '\0') {
        if (temp_v5 == 6) {
          temp_v5 = 0;
        }
        else if (temp_v5 == 7) {
          temp_v5 = 1;
        }
      }
      else if (temp_v5 == 7) {
        temp_v5 = 6;
      }
      temp_v2 = gameDataBlocksGetStats();
      if (temp_v0 != '\0') {
        puVar3 = (unsigned short *)0x0;
        if (temp_v0 == '\x01') {
          puVar3 = (unsigned short *)(temp_v2 + ((temp_v4 * 2 - 2) + temp_v5) * 4 + 0x16c);
        }
      }
      else {
        puVar3 = (unsigned short *)(temp_v2 + ((temp_v4 - 1) * 7 + temp_v5) * 4 + 0x1c);
      }
      temp_v3 = temp_v3 + 1;
      *puVar3 = 0;
      *(unsigned char *)((int)puVar3 + 3) = *(unsigned char *)((int)puVar3 + 3) & 0xe0;
    } while (temp_v3 < temp_v1);
  }
  return;
}

} /* extern "C" */
