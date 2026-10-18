/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c1dc` (_code @ 0x25c1dc, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043e2b4; /* 0x43e2b4 */

/* Supplied declaration required: FUN_0025456c. */
/* Supplied declaration required: FUN_002545c4. */
/* Supplied declaration required: FUN_0025461c. */
/* Supplied declaration required: FUN_002a8730. */
/* Supplied declaration required: FUN_002c586c. */
extern int FUN_003e0eac(unsigned int *);
extern int FUN_003e0f14(unsigned int *);
extern int FUN_003e0f80(unsigned int *);


int FUN_0025c1dc(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  int temp_v5;
  unsigned int uStack_14;
  
  if (*(int *)(DAT_0043e2b4 + 4) == 0) {
    temp_v0 = -1;
  }
  else {
    FUN_002c586c(&temp_v4);
    temp_v5 = temp_v4;
    uStack_14 = uStack_1c;
    FUN_0025461c(&temp_v5);
    FUN_002545c4(&temp_v5);
    puVar2 = (unsigned int *)&temp_v5;
    FUN_0025456c();
    FUN_002a8730();
    temp_v0 = FUN_003e0eac((unsigned int *)&temp_v5);
    temp_v1 = FUN_003e0f14((unsigned int *)&temp_v5);
    temp_v2 = FUN_003e0f80((unsigned int *)&temp_v5);
    temp_v3 = temp_v2 + (temp_v1 + (temp_v0 + (int)puVar2 * 0x18) * 0x3c) * 0x3c;
    if (temp_v3 >= *(unsigned int *)(DAT_0043e2b4 + 4)) {
      temp_v0 = temp_v3 - *(unsigned int *)(DAT_0043e2b4 + 4);
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
