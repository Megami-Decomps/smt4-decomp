/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001100a8` (_code @ 0x1100a8, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(unsigned char [8]);
int FUN_002e9598(int, unsigned char [8]);
int FUN_002e9ec8(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002eb60c(void);
int FUN_002fa6e8(int);
int FUN_002fa794(unsigned char [8], int);

extern unsigned char LAB_0010fa5d; /* 0x10fa5d */
extern unsigned char LAB_00110164; /* 0x110164 */

/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9598. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002eb60c. */
/* Supplied declaration required: FUN_002fa6e8. */
/* Supplied declaration required: FUN_002fa794. */


void FUN_001100a8(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar4;
  unsigned char temp_v2 [8];
  unsigned char temp_v3 [16];
  unsigned char *puVar3;
  
  puVar3 = temp_v2;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xe0) != '\x02') {
      puVar4 = &LAB_0010fa5d;
    }
    else {
      temp_v0 = *(int *)(param_1 + 0x1a8);
      if (temp_v0 == 0) {
        FUN_002eb60c();
        return;
      }
      FUN_002fa794(temp_v2,param_1 + 0xac);
      FUN_002e9598(temp_v0 + 0x10,temp_v2);
      FUN_002e9318(temp_v2);
      puVar4 = (unsigned char *)0x110001;
      puVar3 = temp_v3;
    }
    temp_v1 = FUN_002ea3c0(puVar3,puVar4,0,&LAB_00110164);
    FUN_002ea3d0(param_1,temp_v1);
  }
  else {
    FUN_002fa6e8(param_1);
  }
  return;
}

} /* extern "C" */
