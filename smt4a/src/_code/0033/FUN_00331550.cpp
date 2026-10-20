/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331550` (_code @ 0x331550, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetCounters(void);

/* Supplied declaration required: gameGetCounters. */
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_00331550(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = gameGetCounters();
  if (*(unsigned int *)(temp_v2 + (temp_v0 & 0xff) * 4) < temp_v1) {
    temp_v2 = gameGetCounters();
    *(unsigned int *)(temp_v2 + (temp_v0 & 0xff) * 4) = temp_v1;
  }
  gameGetCounters();
  temp_v2 = gameGetCounters();
  if (*(unsigned int *)(temp_v2 + (temp_v0 & 0xff) * 4 + 0x200) < temp_v1) {
    temp_v2 = gameGetCounters();
    *(unsigned int *)(temp_v2 + (temp_v0 & 0xff) * 4 + 0x200) = temp_v1;
  }
  return 1;
}

} /* extern "C" */
