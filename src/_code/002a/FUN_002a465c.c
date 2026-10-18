/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a465c` (_code @ 0x2a465c, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_0014f070. */
/* Supplied declaration required: FUN_0014f1cc. */
/* Supplied declaration required: FUN_0014f30c. */
extern int FUN_0014f3fc(unsigned char *);
extern unsigned char *FUN_002bf798(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4360. */


unsigned char * FUN_002a465c(unsigned char *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *pbVar2;
  unsigned char temp_v1;
  
  temp_v1 = *param_1 & 0xf0;
  pbVar2 = param_1;
  if (((temp_v1 == 0x10 || temp_v1 == 0x20) || temp_v1 == 0x30) &&
     (temp_v0 = FUN_0014f3fc(param_1), temp_v0 != 0)) {
    if ((param_2 & 1) != 0) {
      if ((param_2 & 2) != 0) {
        pbVar2 = (unsigned char *)FUN_002bf798(0x10000,0x100,0,temp_v0,param_3,0);
      }
      else {
        pbVar2 = (unsigned char *)FUN_002bf798(0x10000,0x100,0,temp_v0,param_3,1);
      }
    }
    else if ((param_2 & 2) != 0) {
      pbVar2 = (unsigned char *)FUN_002bf798(0x100,0x100,0,temp_v0,param_3,0);
    }
    else {
      pbVar2 = (unsigned char *)FUN_002bf798(0x100,0x100,0,temp_v0,param_3,1);
    }
    if (temp_v1 != 0x10) {
      if (temp_v1 != 0x20) {
        if (temp_v1 == 0x30) {
          FUN_0014f1cc(param_1,pbVar2);
        }
      }
      else {
        FUN_0014f30c(param_1,pbVar2);
      }
    }
    else {
      FUN_0014f070(param_1,pbVar2);
    }
    FUN_002c4360(param_1);
  }
  return pbVar2;
}
