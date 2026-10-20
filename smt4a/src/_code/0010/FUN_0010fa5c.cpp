/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fa5c` (_code @ 0x10fa5c, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea41e(int *);
int FUN_002fa6e8(int);
int FUN_002fa6f8(int, int, int *);

extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002fa6e8. */
/* Supplied declaration required: FUN_002fa6f8. */


void FUN_0010fa5c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xe0) != '\x02') {
      temp_v0 = param_1 + 0xd0;
    }
    else {
      temp_v0 = param_1 + 0x130;
    }
    FUN_002ea41e(&uStack_18);
    FUN_002fa6f8(param_1,*(unsigned char *)(temp_v0 + 0x10),&uStack_18);
    return;
  }
  FUN_002fa6e8(param_1);
  return;
}

} /* extern "C" */
