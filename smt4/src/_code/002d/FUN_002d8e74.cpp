/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8e74` (_code @ 0x2d8e74, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSaveReadBlock(int, unsigned char [128], unsigned char [140], unsigned int, unsigned int);
int FUN_002be624(unsigned char [128], unsigned char *, unsigned int);
int FUN_002d5e44(int, unsigned char [128]);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp138; /* 0x138: local_138 */
} param_1_stack;

extern unsigned char LAB_002d8f2c; /* 0x2d8f2c */
extern unsigned char DAT_0043e311; /* 0x43e311 */
extern int DAT_0043e314; /* 0x43e314 */
extern unsigned int DAT_0043e31c; /* 0x43e31c */

/* Supplied declaration required: asdSaveReadBlock. */
extern int FUN_00214950(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002d5e44. */


void FUN_002d8e74(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [140];
  
  DAT_0043e311 = 1;
  temp_v1 = *(int *)(DAT_0043e314 + 4);
  FUN_002be624(temp_v4,&LAB_002d8f2c,*(unsigned int *)(DAT_0043e314 + 8));
  temp_v2 = *(unsigned int *)(DAT_0043e314 + 0x14);
  temp_v3 = *(unsigned int *)(DAT_0043e314 + 0x18);
  temp_v0 = 0;
  FUN_002d5e44(0,temp_v4);
  if (temp_v0 != 0) {
    asdSaveReadBlock(temp_v1,temp_v4,temp_v5,temp_v2,temp_v3);
    if (temp_v1 != 0) {
      return;
    }
    temp_v0 = FUN_00214950(param_1,temp_v4);
    if (temp_v0 == 1) {
      DAT_0043e311 = 0;
      DAT_0043e31c = 6;
      return;
    }
  }
  DAT_0043e31c = 0xffffffff;
  DAT_0043e311 = 0;
  return;
}

} /* extern "C" */
