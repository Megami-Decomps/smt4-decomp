/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00349ca4` (_code @ 0x349ca4, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00280bd0(unsigned char [132], int, int, int, unsigned int, int, int);
int FUN_002c7388(...);
int asdSaveWriteBlock(int, unsigned char [128], unsigned char [132], unsigned int, unsigned int);
int FUN_002e342c(unsigned char [128], unsigned char *);
int FUN_002e6dd0(unsigned char *, int);
int colorForMode(...);
int FUN_00399c90(int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp130; /* 0x130: local_130 */
} param_1_stack;

extern unsigned char LAB_00349e54; /* 0x349e54 */
extern unsigned char DAT_0057f6c9; /* 0x57f6c9 */
extern int DAT_0057f6d0; /* 0x57f6d0 */
extern unsigned int DAT_0057f6d8; /* 0x57f6d8 */
extern unsigned char DAT_005e2114; /* 0x5e2114 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00280bd0. */
/* Supplied declaration required: FUN_002c7388. */
/* Supplied declaration required: asdSaveWriteBlock. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6dd0. */
extern int FUN_002ef7f0(unsigned int, unsigned char *);
extern int FUN_0032c8c8(void);
/* Supplied declaration required: colorForMode. */
/* Supplied declaration required: FUN_00399c90. */


void FUN_00349ca4(unsigned int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [132];
  
  temp_v1 = *(int *)(DAT_0057f6d0 + 4);
  DAT_0057f6c9 = 1;
  if (temp_v1 != 1) {
    temp_v3 = *(unsigned int *)(DAT_0057f6d0 + 8);
    FUN_002e6dd0(&DAT_005e2114,0x80);
    FUN_00100388(&DAT_005e2114,"sdds4game%d.sav",temp_v3);
  }
  else {
    FUN_00399c90(1,&LAB_00349e54);
    temp_v2 = FUN_0032c8c8();
    if (temp_v2 != 0) {
      FUN_002c7388(param_1,&LAB_00349e54,1,0);
      return;
    }
    temp_v3 = *(unsigned int *)(DAT_0057f6d0 + 8);
    FUN_002e6dd0(&DAT_005e2114,0x80);
    FUN_00100388(&DAT_005e2114,"%ssdds4game%d.sav","sdds4/",temp_v3);
  }
  FUN_002e342c(temp_v4,&DAT_005e2114);
  FUN_00280bd0(temp_v5,0x34534444,0x454d4147,0,*(unsigned int *)(DAT_0057f6d0 + 0x18),0,0);
  temp_v2 = temp_v1;
  asdSaveWriteBlock(temp_v1,temp_v4,temp_v5,*(unsigned int *)(DAT_0057f6d0 + 0x14),
               *(unsigned int *)(DAT_0057f6d0 + 0x18));
  if (temp_v2 == 0) {
    temp_v2 = 5;
    if (temp_v1 != 0) {
      if (temp_v1 == 1) {
        FUN_002c7388(param_1,temp_v4,1,0);
        temp_v2 = 3;
      }
    }
    else {
      temp_v0 = FUN_002ef7f0(param_1,temp_v4);
      if (temp_v0 == 1) {
        DAT_0057f6d8 = 6;
      }
      else {
        DAT_0057f6d8 = 0xffffffff;
      }
    }
    DAT_0057f6c9 = 0;
    if (temp_v2 == 3) {
      return;
    }
  }
  colorForMode(temp_v1);
  return;
}

} /* extern "C" */
