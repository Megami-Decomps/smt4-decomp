/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318c3c` (_code @ 0x318c3c, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_00184310(void);
int FUN_0019a5a0(...);
int FUN_0019a7f4(int, int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002cc220(void);
int FUN_002e132c(int);
int FUN_00341f4c(void);
int FUN_0037b450(void);
int FUN_0038b3f8(int, int);
int FUN_003a7a88(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern signed char DAT_0057f0c5; /* 0x57f0c5 */
extern unsigned int DAT_0057f0cc; /* 0x57f0cc */
extern unsigned int DAT_0057f0d0; /* 0x57f0d0 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_00187168(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_002cc220. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_00341f4c. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: FUN_003a7a88. */
extern int FUN_003e4d68(unsigned int);


void FUN_00318c3c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r4;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int in_lr;
  
  if (*(int *)(param_1 + 0x4b98) != 0) {
    FUN_0019a5a0();
    *(int *)(param_1 + 0x4b98) = 0;
  }
  FUN_002cc220();
  temp_v2 = 0;
  do {
    piVar5 = (int *)(param_1 + temp_v2 * 4 + 0x4bb0);
    temp_v0 = *piVar5;
    if (temp_v0 != 0) {
      FUN_0038b3f8((int)(short)temp_v0,1);
      *piVar5 = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  temp_v3 = 0;
  do {
    temp_v2 = FUN_003e4d68(temp_v3 & 0xffff);
    temp_v0 = FUN_00187168();
    if (temp_v0 != 0) {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
      FUN_00184310();
      FUN_0038b3f8((int)(short)(*(short *)(temp_v1 + 0x9c) + 1),0);
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 0xc);
  temp_v2 = (int)*(short *)(param_1 + 0x4b14);
  if (((temp_v2 != 0) && (*(char *)(param_1 + 0x4b18) == '\0')) && (FUN_003a7a88(temp_v2,1), temp_v2 != 0)
     ) {
    FUN_0038b3f8((int)*(short *)(param_1 + 0x4b14),1);
  }
  temp_v2 = 0;
  if (temp_v2 < *(short *)(param_1 + 0x480c)) {
    do {
      FUN_001641c4();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(short *)(param_1 + 0x480c));
  }
  *(unsigned short *)(param_1 + 0x480c) = 0;
  FUN_0037b450();
  DAT_0057f0c5 = DAT_0057f0c5 - '\x01';
  if (DAT_0057f0c5 < '\x01') {
    FUN_00341f4c();
    FUN_0019a5a0(DAT_0057f0cc);
    FUN_0019a5a0(DAT_0057f0d0);
    FUN_0019a7f4(10,0,param_3,param_4,unaff_r4,in_lr);
    FUN_002e132c(10);
    DAT_0057f0c5 = '\0';
  }
  return;
}

} /* extern "C" */
