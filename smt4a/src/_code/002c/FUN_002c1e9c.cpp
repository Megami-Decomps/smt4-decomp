/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1e9c` (_code @ 0x2c1e9c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableValueOrZero(int);
int dataTableGet(...);
int dataTableGetEntries(void);

/* Supplied declaration required: dataTableValueOrZero. */
/* Supplied declaration required: dataTableGet. */
extern unsigned int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
extern unsigned int tbcrBlockGetPayload(void);


void FUN_002c1e9c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  dataTableValueOrZero(0x19);
  temp_v0 = tbcrBlockGetPayload();
  temp_v1 = dataTableGet(0x19,0);
  temp_v2 = dataTableGetEntries();
  temp_v3 = dataTableGetCount(temp_v1);
  temp_v5 = 0;
  if (temp_v5 < temp_v3) {
    do {
      if ((*(char *)(temp_v2 + 0x26) != '\0') && (temp_v4 = 1, temp_v0 >= 2)) {
        do {
          dataTableGet(0x19,temp_v4);
          piVar5 = (int *)dataTableGetEntries();
          if (*piVar5 == (int)*(short *)(temp_v2 + 0x20)) {
            *(char *)(temp_v2 + 0x26) = (char)temp_v4;
            break;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v0);
      }
      temp_v5 = temp_v5 + 1;
      temp_v2 = temp_v2 + 0x28;
    } while (temp_v5 < temp_v3);
  }
  return;
}

} /* extern "C" */
