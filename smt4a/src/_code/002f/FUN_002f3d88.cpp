/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3d88` (_code @ 0x2f3d88, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00106150(void);
int FUN_002e6e34(int *, unsigned char *);
int FUN_002e6e5c(int *);
int FUN_002e75fa(void);
int FUN_002ecef0(void);
int FUN_002ecf28(void);

extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

/* Supplied declaration required: FUN_00106150. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002ecef0. */
/* Supplied declaration required: FUN_002ecf28. */


void FUN_002f3d88(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int uStack_10;
  unsigned int uStack_c;
  unsigned int uStack_8;
  
  uStack_10 = param_2;
  uStack_c = param_3;
  uStack_8 = param_4;
  FUN_002ecef0();
  FUN_002e6e34(&uStack_10,&DAT_0062e6a0);
  temp_v0 = FUN_002ecf28();
  if (temp_v0 != 0) {
    FUN_002ecf28();
    FUN_002e75fa();
  }
  else {
    temp_v0 = FUN_002e760a(0x60);
    if (temp_v0 != 0) {
      FUN_00106150();
    }
  }
  FUN_002e6e5c(&uStack_10);
  return;
}

} /* extern "C" */
