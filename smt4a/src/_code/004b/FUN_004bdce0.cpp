/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bdce0` (_code @ 0x4bdce0, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [84], unsigned char *, unsigned int);
int FUN_00162790(int, unsigned int, unsigned char [84], int);
int FUN_001834a4(...);
int FUN_0018408c(unsigned char [84], int);
int VectorSignedToFloat(int, int);

extern unsigned char DAT_0052d838; /* 0x52d838 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
extern unsigned int FUN_00180114(unsigned short);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_0018408c. */
extern int FUN_003e4d68(unsigned int);


void FUN_004bdce0(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  unsigned char temp_v7 [84];
  
  temp_v6 = 0;
  temp_v0 = FUN_001834a4(0x11);
  temp_v5 = 0;
  do {
    temp_v1 = FUN_003e4d68(*(unsigned int *)(param_1 + temp_v5 * 4 + 0x2c4) & 0xffff);
    if ((temp_v1 != 0) && ((*(unsigned int *)(temp_v1 + 0x130) & 1) != 0)) {
      temp_v2 = FUN_00180114(*(unsigned short *)(temp_v1 + 0x62));
      FUN_00100388(temp_v7,&DAT_0052d838,temp_v2);
      temp_v3 = FUN_001834a4(0x11,temp_v6 + 0xae);
      puVar5 = temp_v7;
      FUN_0018408c(temp_v7,1);
      temp_v4 = (int)*(short *)(temp_v0 + 8) +
              (int)*(short *)(temp_v3 + 8) + ((int)**(short **)(temp_v3 + 0xc) - (int)puVar5) / 2 +
              param_2;
      temp_v2 = 0xffffffff;
      if ((*(unsigned short *)(temp_v1 + 0x60) & 2) != 0) {
        temp_v2 = 0xdc0f14ff;
      }
      VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v0 + 10) + param_3,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(1,temp_v2,temp_v7,temp_v4);
      temp_v6 = temp_v6 + 1;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0xc);
  return;
}

} /* extern "C" */
