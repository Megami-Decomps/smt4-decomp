/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbfb0` (_code @ 0x3bbfb0, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_0043ddb8; /* 0x43ddb8 */
extern char s__SHIN_MEGAMITENSEI_4_0043ddd0[33]; /* 0x43ddd0 */
extern char s_Shin_Megami_Tensei_I_0043de3c[22]; /* 0x43de3c */

extern int FUN_002e0dd0(unsigned int, unsigned int, char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002eba94. */
/* Supplied declaration required: FUN_00310448. */
extern unsigned int FUN_00357a28(unsigned int);


unsigned int FUN_003bbfb0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00357a28(0xe5c);
  FUN_00310448(temp_v0,DAT_0043ddb8,s__SHIN_MEGAMITENSEI_4_0043ddd0,*(unsigned int *)(param_1 + 4),
               0x1200,s_Shin_Megami_Tensei_I_0043de3c,0xc,99);
  switch(temp_v0) {
  default:
    FUN_002eba94(2,3,0xff,0);
    temp_v0 = FUN_00357a28(0xe5c);
    temp_v1 = FUN_002e0dd0(temp_v0,DAT_0043ddb8,s_Shin_Megami_Tensei_I_0043de3c,
                         *(unsigned int *)(param_1 + 4),0x1200);
    if (temp_v1 != 5) {
      return 0;
    }
    return 0x11;
  case 2:
  case 3:
  case 5:
  case 7:
    return 0x11;
  case 4:
    return 3;
  case 6:
    return 0x81;
  }
}
