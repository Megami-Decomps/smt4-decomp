/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023793c` (_code @ 0x23793c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0044e34c; /* 0x44e34c */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

extern int FUN_0010f50c(void);
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_00351db0. */


int FUN_0023793c(void)

{
/* irregular: irregular input(s): in_r3; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_r3;
  unsigned char temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = in_r3;
  FUN_002c38a4(&DAT_004c6410);
  temp_v1 = DAT_0044e34c == 0;
  FUN_002c3820(&DAT_004c6410);
  if ((temp_v1) && (temp_v0 = FUN_0010f50c(), temp_v0 == 0)) {
    return 0;
  }
  temp_v2 = temp_v2 & 0xffffff00;
  FUN_00351db0(0,&temp_v2);
  return (int)(char)temp_v2;
}
