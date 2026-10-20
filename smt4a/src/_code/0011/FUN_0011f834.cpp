/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f834` (_code @ 0x11f834, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(void);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(unsigned char [20], int);
int FUN_002ee50c(unsigned int, unsigned int);
int FUN_002f674e(void);
int FUN_00310784(int, unsigned char [20]);

extern unsigned char LAB_0011f8ac; /* 0x11f8ac */

/* Supplied declaration required: FUN_002e7232. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002ee50c. */
/* Supplied declaration required: FUN_002f674e. */
extern unsigned int FUN_003054ce(void);
/* Supplied declaration required: FUN_00310784. */


void FUN_0011f834(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [20];
  
  if (*(int *)(param_1 + 0x310) != 0) {
    FUN_002e7232();
    *(unsigned int *)(param_1 + 0x310) = 0;
  }
  if (*(char *)(param_1 + 0x90) != '\x02') {
    if (*(int *)(param_1 + 0x314) != 0) {
      FUN_002f674e();
      *(unsigned int *)(param_1 + 0x314) = 0;
    }
    FUN_002ea41e(temp_v2,param_1 + 0x80);
    FUN_00310784(param_1,temp_v2);
  }
  else {
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0x28) =
         *(unsigned int *)(param_1 + 0x314);
    temp_v1 = *(unsigned int *)(*(int *)(param_1 + 400) + 0x78);
    temp_v0 = FUN_003054ce();
    FUN_002ee50c(temp_v0,temp_v1);
    temp_v0 = FUN_002ea3c0(temp_v2,0x11f5a1,0,&LAB_0011f8ac);
    FUN_002ea3d0(param_1,temp_v0);
  }
  return;
}

} /* extern "C" */
