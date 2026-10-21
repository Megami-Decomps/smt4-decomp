/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00349b38` (_code @ 0x349b38, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_002c7388(unsigned int, unsigned char [128], int);
int asdSaveReadBlock(int, unsigned char [128], unsigned char [140], unsigned int, unsigned int);
int libc_strcpy(unsigned char [128], unsigned char *);
int rt_aeabi_memclr(unsigned char *, int);
int FUN_003416a0(int, unsigned char [128]);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp138; /* 0x138: local_138 */
} param_1_stack;

extern unsigned char DAT_0057f6c9; /* 0x57f6c9 */
extern int DAT_0057f6d0; /* 0x57f6d0 */
extern unsigned int DAT_0057f6d8; /* 0x57f6d8 */
extern unsigned char DAT_005e2114; /* 0x5e2114 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002c7388. */
/* Supplied declaration required: asdSaveReadBlock. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: rt_aeabi_memclr. */
extern int FUN_002ef7f0(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_003416a0. */


void FUN_00349b38(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [140];
  
  DAT_0057f6c9 = 1;
  temp_v1 = *(int *)(DAT_0057f6d0 + 4);
  temp_v2 = *(unsigned int *)(DAT_0057f6d0 + 8);
  if (temp_v1 != 1) {
    rt_aeabi_memclr(&DAT_005e2114,0x80);
    textFormatBuffer(&DAT_005e2114,"sdds4game%d.sav",temp_v2);
  }
  else {
    rt_aeabi_memclr(&DAT_005e2114,0x80);
    textFormatBuffer(&DAT_005e2114,"%ssdds4game%d.sav","sdds4/",temp_v2);
  }
  libc_strcpy(temp_v4,&DAT_005e2114);
  temp_v2 = *(unsigned int *)(DAT_0057f6d0 + 0x14);
  temp_v3 = *(unsigned int *)(DAT_0057f6d0 + 0x18);
  temp_v0 = *(int *)(DAT_0057f6d0 + 4);
  FUN_003416a0(temp_v0,temp_v4);
  if (temp_v0 != 0) {
    temp_v0 = temp_v1;
    asdSaveReadBlock(temp_v1,temp_v4,temp_v5,temp_v2,temp_v3);
    if (temp_v0 != 0) {
      return;
    }
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        DAT_0057f6c9 = 0;
        return;
      }
      FUN_002c7388(param_1,temp_v4,0);
      DAT_0057f6c9 = 0;
      return;
    }
    temp_v1 = FUN_002ef7f0(param_1,temp_v4);
    if (temp_v1 == 1) {
      DAT_0057f6c9 = 0;
      DAT_0057f6d8 = 6;
      return;
    }
  }
  else if (temp_v1 == 1) {
    FUN_002c7388(param_1,temp_v4,0);
  }
  DAT_0057f6d8 = 0xffffffff;
  DAT_0057f6c9 = 0;
  return;
}

} /* extern "C" */
