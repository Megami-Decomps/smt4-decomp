/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237ad4` (_code @ 0x237ad4, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0044e34c; /* 0x44e34c */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

extern int FUN_0010f4e8(void);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_00351fc0. */


int FUN_00237ad4(void)

{
/* irregular: irregular input(s): in_r3; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_r3;
  unsigned char temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = in_r3;
  FUN_002c3aa8(&DAT_004c6410);
  temp_v1 = DAT_0044e34c == 0;
  FUN_002c3a24(&DAT_004c6410);
  if ((temp_v1) && (temp_v0 = FUN_0010f4e8(), temp_v0 == 0)) {
    return 0;
  }
  temp_v2 = temp_v2 & 0xffffff00;
  FUN_00351fc0(0,&temp_v2);
  return (int)(char)temp_v2;
}
