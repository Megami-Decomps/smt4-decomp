/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8d38` (_code @ 0x3c8d38, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp12; /* 0x12: local_12 */
} param_2_stack;

extern int FUN_002883bc(unsigned short, unsigned char *);
/* Supplied declaration required: FUN_002b9364. */
extern int FUN_002c0ba8(void);


unsigned int FUN_003c8d38(unsigned int param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned char temp_v2 [46];
  unsigned short temp_v3;
  
  FUN_002b9364();
  if ((param_2 == (unsigned short *)0x0) ||
     ((param_2[0x1b] != 0 && (temp_v1 = FUN_002c0ba8(), temp_v1 == 0)))) {
    return 0;
  }
  temp_v0 = param_2[0x1a];
  if ((temp_v0 & 1) != 0) {
    if ((temp_v0 & 0xfffe) != 0) {
      temp_v1 = FUN_002883bc(temp_v0 >> 1,temp_v2);
    }
    else {
      temp_v1 = FUN_002883bc(*param_2,temp_v2);
    }
    if (temp_v1 == 0) {
      return 0;
    }
    if ((temp_v3 & 0xfc) == 0) {
      return 0;
    }
  }
  return 1;
}
