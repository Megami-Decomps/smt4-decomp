/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da858` (_code @ 0x4da858, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* stack frame of param_2: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp22; /* 0x22: local_22 */
} param_2_stack;

/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(void);
extern int FUN_00239234(unsigned short, unsigned char *);


unsigned int FUN_004da858(unsigned int param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned char temp_v2 [54];
  unsigned short temp_v3;
  
  FUN_00184310();
  if ((param_2 == (unsigned short *)0x0) ||
     ((param_2[0x1f] != 0 && (temp_v1 = FUN_0018719c(), temp_v1 == 0)))) {
    return 0;
  }
  temp_v0 = param_2[0x1e];
  if ((temp_v0 & 1) != 0) {
    if ((temp_v0 & 0xfffe) != 0) {
      temp_v1 = FUN_00239234(temp_v0 >> 1,temp_v2);
    }
    else {
      temp_v1 = FUN_00239234(*param_2,temp_v2);
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

} /* extern "C" */
