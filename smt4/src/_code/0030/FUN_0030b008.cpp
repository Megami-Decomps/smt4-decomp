/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b008` (_code @ 0x30b008, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int devilGetRecord(void);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
/* Supplied declaration required: devilGetRecord. */


unsigned int FUN_0030b008(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v0 = btlGetMainState();
    puVar2 = (unsigned int *)(*(int *)(temp_v0 + 0x1fc0) + temp_v2 * 0x288);
    temp_v1 = *puVar2;
    if (((temp_v1 & 0x10) != 0 && (temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) {
      temp_v1 = (unsigned int)*(unsigned short *)((int)puVar2 + 0xce);
      devilGetRecord();
      if (*(char *)(temp_v1 + 5) == '\x01') {
        scrSetResult(1);
        return 1;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
