/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110744` (_code @ 0x110744, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0044e370; /* 0x44e370 */
extern unsigned int DAT_0044e374; /* 0x44e374 */

/* Supplied declaration required: FUN_0011d2dc. */
/* Supplied declaration required: FUN_0011d2ec. */
extern unsigned int FUN_0011d300(void);
/* Supplied declaration required: FUN_0011d30c. */
/* Supplied declaration required: FUN_0011d49c. */
extern int FUN_0011d81c(void);
/* Supplied declaration required: FUN_002bb450. */
/* Supplied declaration required: FUN_002bb480. */
extern int FUN_002bb608(void);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c0f28. */
/* Supplied declaration required: FUN_002c14f4. */
/* Supplied declaration required: FUN_002c5624. */


void FUN_00110744(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_14;
  unsigned int temp_v5 [2];
  
  if (param_1 != 0) {
    FUN_002c5624(0);
  }
  FUN_002bb6b8();
  FUN_002bb450();
  temp_v0 = FUN_0011d81c();
  if (temp_v0 < 0) {
    FUN_002c14f4(temp_v0,0x11076c);
  }
  FUN_002bb648();
  temp_v0 = FUN_002bb608();
  if ((temp_v0 != 0) && (temp_v1 = FUN_002bb450(), (temp_v1 & 0x20) == 0)) {
    FUN_002bb480(0x62);
    temp_v2 = FUN_0011d300();
    temp_v4 = DAT_0044e370;
    uStack_14 = DAT_0044e374;
    puVar4 = (unsigned int *)&temp_v3;
    FUN_002c0f28(puVar4,temp_v2,0x1000,temp_v5,0);
    FUN_0011d49c(temp_v3);
    FUN_0011d2dc(temp_v5[0]);
    FUN_0011d2ec();
    FUN_0011d30c(puVar4);
  }
  return;
}
