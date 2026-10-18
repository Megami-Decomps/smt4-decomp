/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023723c` (_code @ 0x23723c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_00100348. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3390. */
/* Supplied declaration required: FUN_0036bea0. */


void FUN_0023723c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char uStack00000008;
  
  temp_v0 = 0x100;
  FUN_00163060(0x100,0x100,0,0x1000,0);
  FUN_002e3390(param_6);
  FUN_00100348(temp_v0,0x1000,param_6,&uStack00000008);
  *(unsigned char *)(temp_v0 + 0xfff) = 0;
  temp_v1 = FUN_002e3390(temp_v0);
  if (temp_v1 >= 0xffd) {
    *(unsigned char *)(temp_v0 + 0xffc) = 0xff;
    *(unsigned char *)(temp_v0 + 0xffd) = 0xff;
    *(unsigned char *)(temp_v0 + 0xffe) = 0xff;
    *(unsigned char *)(temp_v0 + 0xfff) = 0;
  }
  else {
    temp_v2 = temp_v0 + temp_v1;
    *(unsigned char *)(temp_v0 + temp_v1) = 0xff;
    *(unsigned char *)(temp_v2 + 1) = 0xff;
    *(unsigned char *)(temp_v2 + 2) = 0xff;
    *(unsigned char *)(temp_v2 + 3) = 0;
  }
  FUN_0036bea0(param_1,param_2,param_3,param_4,param_5,temp_v0);
  FUN_0019a5a0(temp_v0);
  return;
}
