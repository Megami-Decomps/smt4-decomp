/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234118` (_code @ 0x234118, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00178b04(int, unsigned char *, int);
int FUN_003fd76c(unsigned int, int);
int FUN_003fdb18(unsigned int);
int FUN_003fe86c(unsigned int, int, int);
int FUN_0040aa6c(void);
int FUN_0040aad4(unsigned int, int);
int FUN_0040ace8(unsigned int, unsigned int);

extern unsigned char LAB_00234250; /* 0x234250 */
extern unsigned char LAB_00234268; /* 0x234268 */
extern unsigned char LAB_00234284; /* 0x234284 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0058103c; /* 0x58103c */
extern int DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


void FUN_00234118(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned char temp_v3 [140];
  
  temp_v0 = DAT_0058103c;
  *(unsigned char *)(DAT_0058103c + 0xcbdc) = 1;
  *(unsigned int *)(temp_v0 + 0xcbe0) = 0;
  *(unsigned int *)(temp_v0 + 0xcbe4) = 0;
  *(unsigned int *)(temp_v0 + 0xcbe8) = in_s0;
  *(unsigned int *)(temp_v0 + 0xcbec) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcbf0) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcbf4) = in_s3;
  if (DAT_005f15fc != 0x18) {
    FUN_00100388(temp_v3,&LAB_00234250);
  }
  else {
    FUN_00100388(temp_v3,&LAB_00234268);
  }
  if ((DAT_005f15fc == 0x2c || DAT_005f15fc == 0x2d) ||
     (DAT_005f15fc == 0x2e || DAT_005f15fc == 0x2f)) {
    FUN_00100388(temp_v3,&LAB_00234250,0x2b);
  }
  temp_v1 = 0x20;
  FUN_00178b04(0x20,&LAB_00234284,0x16ee);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0040ac08();
  }
  *(unsigned int *)(temp_v0 + 0xcbf8) = temp_v2;
  FUN_0040aa6c();
  FUN_0040aad4(*(unsigned int *)(temp_v0 + 0xcbf8),0);
  temp_v2 = *(unsigned int *)(*(int *)(temp_v0 + 0xcbf8) + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v2);
  FUN_003fd76c(temp_v2,temp_v0 + 0xcbe8);
  FUN_003fdb18(temp_v2);
  FUN_003fe86c(temp_v2,0,2);
  return;
}

} /* extern "C" */
