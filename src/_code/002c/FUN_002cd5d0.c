/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd5d0` (_code @ 0x2cd5d0, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043de68; /* 0x43de68 */

extern int FUN_002c35d4(int);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */


unsigned int FUN_002cd5d0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int iStack_18;
  unsigned char temp_v3 [4];
  
  temp_v0 = DAT_0043de68;
  temp_v2 = 0;
  if (DAT_0043de68 != 0) {
    iStack_18 = *(int *)(DAT_0043de68 + 0x42c);
    if (iStack_18 != 0) {
      puVar2 = temp_v3;
      FUN_002c42fc(puVar2,&iStack_18,1,0,0,0);
      if ((int)puVar2 < 0) {
        FUN_002c5468();
      }
      if (((unsigned int)puVar2 & 0x3ff) == 0x3fe) {
        temp_v1 = FUN_002c35d4(temp_v0 + 0x420);
        if (temp_v1 == 0) {
          return 0;
        }
        if (*(int *)(temp_v0 + 0x78) != *(int *)(temp_v0 + 0x7c)) {
          *(int *)(temp_v0 + 0x7c) = *(int *)(temp_v0 + 0x7c) + 1;
        }
        FUN_002c3a24(temp_v0 + 0x420);
        return 0;
      }
    }
    temp_v2 = 1;
    while (*(int *)(temp_v0 + 0x78) != *(int *)(temp_v0 + 0x7c)) {
      *(int *)(temp_v0 + 0x7c) = *(int *)(temp_v0 + 0x7c) + 1;
    }
  }
  return temp_v2;
}
