/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ba204` (_code @ 0x1ba204, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);
int FUN_0019d4d8(int, int, int, int, unsigned int, int);
int FUN_001aeb40(unsigned char *, unsigned char *);
int FUN_001aec9c(unsigned char *, unsigned char *);
int FUN_001aeddc(unsigned char *, unsigned char *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019d4d8. */
/* Supplied declaration required: FUN_001aeb40. */
/* Supplied declaration required: FUN_001aec9c. */
/* Supplied declaration required: FUN_001aeddc. */
extern int FUN_001aeecc(unsigned char *);


unsigned char * FUN_001ba204(unsigned char *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *pbVar2;
  unsigned char temp_v1;
  
  temp_v1 = *param_1 & 0xf0;
  pbVar2 = param_1;
  if (((temp_v1 == 0x10 || temp_v1 == 0x20) || temp_v1 == 0x30) &&
     (temp_v0 = FUN_001aeecc(param_1), temp_v0 != 0)) {
    if ((param_2 & 1) != 0) {
      if ((param_2 & 2) != 0) {
        pbVar2 = (unsigned char *)0x10000;
        FUN_0019d4d8(0x10000,0x100,0,temp_v0,param_3,0);
      }
      else {
        pbVar2 = (unsigned char *)0x10000;
        FUN_0019d4d8(0x10000,0x100,0,temp_v0,param_3,1);
      }
    }
    else if ((param_2 & 2) != 0) {
      pbVar2 = (unsigned char *)0x100;
      FUN_0019d4d8(0x100,0x100,0,temp_v0,param_3,0);
    }
    else {
      pbVar2 = (unsigned char *)0x100;
      FUN_0019d4d8(0x100,0x100,0,temp_v0,param_3,1);
    }
    if (temp_v1 != 0x10) {
      if (temp_v1 != 0x20) {
        if (temp_v1 == 0x30) {
          FUN_001aec9c(param_1,pbVar2);
        }
      }
      else {
        FUN_001aeddc(param_1,pbVar2);
      }
    }
    else {
      FUN_001aeb40(param_1,pbVar2);
    }
    FUN_0019a5a0(param_1);
  }
  return pbVar2;
}

} /* extern "C" */
