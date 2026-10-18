/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f57c` (_code @ 0x10f57c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0010f5d0; /* 0x10f5d0 */
extern unsigned char LAB_0010f8fd; /* 0x10f8fd */

extern int FUN_001038ea(unsigned int, int, unsigned int);
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002fa474. */


void FUN_0010f57c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v2 = param_1 + 0x1d0;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = FUN_001038ea(*(unsigned int *)(param_1 + 0xd4),temp_v2,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    FUN_002f7cb0(param_1);
    temp_v0 = FUN_002e760a(0x10);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0010f8fd,0,&LAB_0010f5d0);
    }
    FUN_002f7cba(param_1,temp_v2,temp_v1);
    return;
  }
  FUN_002ea41e(&uStack_18,temp_v2);
  FUN_002fa474(param_1,&uStack_18);
  return;
}
