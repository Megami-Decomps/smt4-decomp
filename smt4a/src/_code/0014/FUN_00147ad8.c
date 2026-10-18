/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147ad8` (_code @ 0x147ad8, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */

/* Supplied declaration required: FUN_0015a2d8. */
/* Supplied declaration required: FUN_0015a5b0. */
/* Supplied declaration required: FUN_0015a76c. */
extern unsigned int FUN_0015a780(void);
/* Supplied declaration required: FUN_0015a78c. */
/* Supplied declaration required: FUN_0015a954. */
extern int FUN_0015ac58(void);
/* Supplied declaration required: FUN_00170390. */
extern int FUN_001703e8(void);
/* Supplied declaration required: FUN_00170474. */
/* Supplied declaration required: FUN_00170f68. */
/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */


void FUN_00147ad8(int param_1)

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
    FUN_00170390(0);
  }
  FUN_0018b868();
  FUN_0015a2d8();
  temp_v0 = FUN_0015ac58();
  if (temp_v0 < 0) {
    FUN_00189a38(temp_v0,0x147b00);
  }
  FUN_0018b964();
  temp_v0 = FUN_001703e8();
  if ((temp_v0 != 0) && (temp_v1 = FUN_0015a2d8(), (temp_v1 & 0x20) == 0)) {
    FUN_00170474(0x62);
    temp_v2 = FUN_0015a780();
    temp_v4 = DAT_005891c8;
    uStack_14 = DAT_005891cc;
    puVar4 = (unsigned int *)&temp_v3;
    FUN_00170f68(puVar4,temp_v2,0x1000,temp_v5,0);
    FUN_0015a954(temp_v3);
    FUN_0015a5b0(temp_v5[0]);
    FUN_0015a76c();
    FUN_0015a78c(puVar4);
  }
  return;
}
