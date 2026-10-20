/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227c5c` (_code @ 0x227c5c, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);
int VectorSignedToFloat(int, int);

extern signed char DAT_0057f20a; /* 0x57f20a */
extern int DAT_0057f20c; /* 0x57f20c */
extern unsigned int *DAT_0057f214; /* 0x57f214 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001631d0. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
extern int FUN_002ef9f0(void);


unsigned int FUN_00227c5c(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *unaff_r5;
  unsigned int in_fpscr;
  float temp_v3;
  
  temp_v0 = DAT_0057f20c;
  if (DAT_0057f20c == 0) {
    return 0;
  }
  temp_v1 = 1;
  switch(*(unsigned int *)(DAT_0057f20c + 8)) {
  default:
    break;
  case 1:
    piVar1 = (int *)(DAT_0057f20c + 0x14);
    temp_v3 = (float)VectorSignedToFloat(*piVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(DAT_0057f20c + 0x10) = 1.0f - temp_v3 * 0.125f;
    if (*piVar1 < 8) break;
    temp_v1 = 3;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 8) = temp_v1;
    break;
  case 2:
    piVar1 = (int *)(DAT_0057f20c + 0x14);
    temp_v3 = (float)VectorSignedToFloat(*piVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(DAT_0057f20c + 0x10) = temp_v3 * 0.125f;
    if (*piVar1 < 8) break;
    *(unsigned int *)(temp_v0 + 0x10) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 8) = 0;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    break;
  case 4:
    piVar1 = (int *)(DAT_0057f20c + 0x14);
    temp_v3 = (float)VectorSignedToFloat(*piVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(DAT_0057f20c + 0x10) = temp_v3 * 0.125f;
    if (*piVar1 >= 8) {
      *(unsigned int *)(temp_v0 + 8) = 1;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 0x10) = 0x3f800000;
      *(unsigned int *)(temp_v0 + 0x14) = 0;
    }
    break;
  case 5:
    piVar1 = (int *)(DAT_0057f20c + 0x14);
    temp_v3 = (float)VectorSignedToFloat(*piVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(DAT_0057f20c + 0x10) = temp_v3 * 0.125f;
    if (*piVar1 < 8) break;
    *(unsigned int *)(temp_v0 + 0xc) = 1;
    *(unsigned int *)(temp_v0 + 0x10) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 8) = temp_v1;
  }
  temp_v2 = FUN_002ef9f0();
  if ((temp_v2 == 0) && ((DAT_0057f214 == (unsigned int *)0x0 || (*(char *)(DAT_0057f214 + 7) == '\0')))
     ) {
    temp_v2 = FUN_0018719c(0x11);
    if (temp_v2 != 0) {
      unaff_r5 = DAT_0057f214;
    }
    if ((temp_v2 != 0 && unaff_r5 != (unsigned int *)0x0) &&
       (DAT_0057f20a = DAT_0057f20a - '\x01', DAT_0057f20a < '\x01')) {
      FUN_001631d0(*unaff_r5,0);
      FUN_0019a5a0(unaff_r5);
      DAT_0057f214 = (unsigned int *)0x0;
      DAT_0057f20a = '\0';
    }
  }
  *(int *)(temp_v0 + 4) = *(int *)(temp_v0 + 4) + 1;
  *(int *)(temp_v0 + 0x14) = *(int *)(temp_v0 + 0x14) + 1;
  return 0;
}

} /* extern "C" */
