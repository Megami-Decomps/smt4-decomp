/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296b3c` (_code @ 0x296b3c, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002869e8(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int);
int FUN_002b23bc(int, int, unsigned int, unsigned char *);
int FUN_002c30c4(...);
int FUN_002c415c(int);
int FUN_002c498c(int, int, int, int, int);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_002869e8. */
/* Supplied declaration required: FUN_002b23bc. */
/* Supplied declaration required: FUN_002c30c4. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c498c. */


void FUN_00296b3c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char uStack00000008;
  
  temp_v0 = 0x100;
  FUN_002c498c(0x100,0x100,0,0x1000,0);
  FUN_002c30c4(param_6);
  FUN_002b23bc(temp_v0,0x1000,param_6,&uStack00000008);
  *(unsigned char *)(temp_v0 + 0xfff) = 0;
  temp_v1 = FUN_002c30c4(temp_v0);
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
  FUN_002869e8(param_1,param_2,param_3,param_4,param_5,temp_v0);
  FUN_002c415c(temp_v0);
  return;
}

} /* extern "C" */
