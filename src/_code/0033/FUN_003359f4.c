/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003359f4` (_code @ 0x3359f4, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_00439a70; /* 0x439a70 */
extern int DAT_00439a74; /* 0x439a74 */
extern unsigned int DAT_00439a78; /* 0x439a78 */
extern int DAT_00439a7c; /* 0x439a7c */
extern unsigned int DAT_00439a80; /* 0x439a80 */
extern int DAT_00439a84; /* 0x439a84 */
extern unsigned int DAT_00439a88; /* 0x439a88 */
extern unsigned int DAT_00439a8c; /* 0x439a8c */
extern unsigned int DAT_00439a90; /* 0x439a90 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0023f2f0. */
/* Supplied declaration required: FUN_0023f3d8. */
/* Supplied declaration required: FUN_00267f68. */
/* Supplied declaration required: FUN_00282a90. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_0029c660. */
extern int FUN_002c0b94(void);


unsigned int * FUN_003359f4(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  int temp_v1;
  
  if (param_1[2] == DAT_00439a70) {
    FUN_00282a90(0,0,0,0,8,0,0xb,0);
    FUN_00267f68(DAT_00439ca8);
  }
  if (param_1[2] == DAT_00439a84) {
    FUN_0023f3d8(0,0,DAT_00439a88,0x10,0,DAT_00439a8c,0,2,0xffffffff);
  }
  if (param_1[2] == DAT_00439a74) {
    FUN_0029c660(0,DAT_00439a78,0xff);
  }
  if (param_1[2] == DAT_00439a7c) {
    FUN_0029c660(1,DAT_00439a80,0xff);
  }
  if (DAT_00439a90 < (unsigned int)param_1[2]) {
    *param_1 = 3;
    if ((param_1[1] & 1) == 0) {
      pcVar2 = "battle/gameover/gameover.bf";
    }
    else {
      pcVar2 = "battle/gameover/level_event.bf";
    }
    FUN_00297704(pcVar2,param_1 + 3,0);
    if ((param_1[1] & 1) == 0) {
      pcVar2 = "battle/gameover/gameover.mbm";
    }
    else {
      pcVar2 = "battle/gameover/level_event.mbm";
    }
    FUN_00297704(pcVar2,param_1 + 5,0);
    temp_v1 = FUN_002c0b94();
    temp_v0 = *(char *)(temp_v1 + 0x24b29);
    if (temp_v0 != -1) {
      *(char *)(temp_v1 + 0x24b29) = temp_v0 + '\x01';
    }
    *param_1 = 4;
    FUN_0023f2f0(param_1);
    return param_1;
  }
  return (unsigned int *)0x0;
}
