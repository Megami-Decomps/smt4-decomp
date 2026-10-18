/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029eaa4` (_code @ 0x29eaa4, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp12; /* 0x12: local_12 */
} param_2_stack;

extern int FUN_00288154(unsigned short, unsigned char *);
/* Supplied declaration required: FUN_002b9024. */
extern int FUN_002c09d0(void);


unsigned int FUN_0029eaa4(unsigned int param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned char temp_v2 [46];
  unsigned short temp_v3;
  
  FUN_002b9024();
  if (((param_2 != (unsigned short *)0x0) && ((*(unsigned int *)(param_2 + 0x16) & 0x200000) == 0)) &&
     ((param_2[0x1b] == 0 || (temp_v1 = FUN_002c09d0(), temp_v1 != 0)))) {
    temp_v0 = param_2[0x1a];
    if ((temp_v0 & 1) != 0) {
      if ((temp_v0 & 0xfffe) != 0) {
        temp_v1 = FUN_00288154(temp_v0 >> 1,temp_v2);
      }
      else {
        temp_v1 = FUN_00288154(*param_2,temp_v2);
      }
      if (temp_v1 == 0) {
        return 0;
      }
      if ((temp_v3 & 0xfc) == 0) {
        return 0;
      }
    }
    if ((param_2[3] & 1) != 0) {
      return 1;
    }
  }
  return 0;
}
