/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7c88` (_code @ 0x2d7c88, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [32], unsigned char *, int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_003fe86c(int, int, int);
int FUN_0040a908(int, int);
int FUN_0040a918(int, int);
int FUN_0040aa6c(void);
int FUN_0040aad4(int, int);
int FUN_0040ace8(unsigned int, int);

extern unsigned char LAB_002d7dd0; /* 0x2d7dd0 */
extern unsigned char LAB_002d7de4; /* 0x2d7de4 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_005806d4; /* 0x5806d4 */
extern signed char DAT_005f18be; /* 0x5f18be */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


unsigned int FUN_002d7c88(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int temp_v5;
  unsigned char temp_v6 [32];
  
  temp_v3 = 0;
  temp_v5 = DAT_005806d4 + param_1 * 8;
  piVar6 = (int *)(temp_v5 + 0x3d8c);
  if (*piVar6 != 0) {
    temp_v1 = 1;
  }
  else {
    temp_v2 = 0;
    temp_v4 = 0x15;
    do {
      temp_v0 = temp_v2 * 8;
      temp_v2 = temp_v2 + 1;
      if (*(int *)(DAT_005806d4 + temp_v0 + 0x3d8c) != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
    if (temp_v3 >= DAT_005f18be) {
      temp_v1 = 0;
    }
    else {
      FUN_00100388(temp_v6,&LAB_002d7dd0,(int)*(short *)(param_1 * 0x10 + 0x582204));
      temp_v2 = 0x20;
      FUN_00178b04(0x20,&LAB_002d7de4,0x3b4);
      temp_v3 = 0;
      if (temp_v2 != 0) {
        temp_v3 = FUN_0040ac08();
      }
      *piVar6 = temp_v3;
      FUN_0040aa6c();
      FUN_0040a908(*piVar6,0x10000);
      FUN_0040a918(*piVar6,0x20000);
      FUN_0040aad4(*piVar6,0);
      temp_v3 = *(int *)(*piVar6 + 4);
      FUN_003fe86c(temp_v3,0,2);
      FUN_0040ace8(DAT_0056fcc0,temp_v3);
      *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
      *(unsigned char *)(temp_v5 + 0x3d90) = 1;
      temp_v1 = 1;
      *(unsigned char *)(temp_v5 + 0x3d91) = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
