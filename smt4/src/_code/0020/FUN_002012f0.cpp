/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002012f0` (_code @ 0x2012f0, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b47f4(int);
int dataTableGetEntries(void);
int dataTableGet(...);

extern unsigned int FUN_00254484(void);
/* Supplied declaration required: FUN_002b47f4. */
extern unsigned int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: dataTableGet. */


void FUN_002012f0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  FUN_002b47f4(0x19);
  temp_v0 = FUN_00254484();
  temp_v1 = dataTableGet(0x19,0);
  temp_v2 = dataTableGetEntries();
  temp_v3 = dataTableGetCount(temp_v1);
  temp_v5 = 0;
  if (temp_v5 < temp_v3) {
    do {
      if ((*(char *)(temp_v2 + 0x2a) != '\0') && (temp_v4 = 1, temp_v0 >= 2)) {
        do {
          dataTableGet(0x19,temp_v4);
          piVar5 = (int *)dataTableGetEntries();
          if (*piVar5 == (int)*(short *)(temp_v2 + 0x20)) {
            *(char *)(temp_v2 + 0x2a) = (char)temp_v4;
            break;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v0);
      }
      temp_v5 = temp_v5 + 1;
      temp_v2 = temp_v2 + 0x2c;
    } while (temp_v5 < temp_v3);
  }
  return;
}

} /* extern "C" */
