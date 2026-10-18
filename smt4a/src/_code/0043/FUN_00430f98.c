/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430f98` (_code @ 0x430f98, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_0016e800(int, unsigned int);
extern int FUN_00189738(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00431270. */


unsigned int FUN_00430f98(void)

{
/* irregular: 1 goto(s); irregular input(s): in_r3; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_r3;
  unsigned char temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = in_r3 & 0xffffff00;
  temp_v0 = FUN_00189738(&temp_v3,1,0xa0002);
  if (temp_v0 < 0) {
    temp_v0 = FUN_0016e800(temp_v0,0x430fc0);
  }
  temp_v2 = temp_v3;
  FUN_00431270();
  switch(temp_v0) {
  case 0:
    temp_v1 = (1 << temp_v2) & 1;
    break;
  case 1:
    if (((1 << temp_v2) & 0x226U) != 0) {
      return temp_v2;
    }
    goto LAB_00431060;
  case 2:
    temp_v1 = (1 << temp_v2) & 0x73e;
    break;
  default:
    return temp_v2;
  case 4:
    temp_v1 = ((1 << temp_v2) & 0x40U) >> 6;
    break;
  case 5:
    temp_v1 = ((1 << temp_v2) & 0x80U) >> 7;
    break;
  case 6:
    temp_v1 = ((1 << temp_v2) & 0x800U) >> 0xb;
  }
  if (temp_v1 == 0) {
LAB_00431060:
    switch(temp_v0) {
    default:
      return 0;
    case 1:
    case 2:
      return 1;
    case 4:
      return 6;
    case 5:
      return 7;
    case 6:
      return 0xb;
    }
  }
  return temp_v2;
}
