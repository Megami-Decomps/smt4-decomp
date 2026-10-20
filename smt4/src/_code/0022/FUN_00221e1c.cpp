/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221e1c` (_code @ 0x221e1c, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a104(void);
int FUN_00254a2c(unsigned int, int);
int FUN_0029a014(unsigned int, int);
int FUN_002a0428(int, int);
int FUN_002a04f0(int);
int FUN_002a09b4(unsigned char [64], int);
int FUN_002be624(...);

/* Supplied declaration required: FUN_0018a104. */
/* Supplied declaration required: FUN_00254a2c. */
/* Supplied declaration required: FUN_0029a014. */
extern unsigned int asdMdlManagerCreateSecondList(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002a04f0. */
/* Supplied declaration required: FUN_002a09b4. */
extern int FUN_002adee0(void);
/* Supplied declaration required: FUN_002be624. */
extern int jobGetWork(void);
extern int FUN_002c1d5c(void);


unsigned int FUN_00221e1c(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [64];
  
  temp_v0 = jobGetWork();
  FUN_0018a104();
  temp_v1 = *(int *)(temp_v0 + 8);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if ((temp_v1 != 2) && (temp_v1 == 3)) {
        return 0xffffffff;
      }
    }
    else if ((*(int *)(temp_v0 + 0x18) == 0) || (temp_v1 = FUN_002adee0(), temp_v1 != 0)) {
      temp_v1 = *(int *)(temp_v0 + 0x18);
      if (temp_v1 != 0) {
        if (*(int *)(*(int *)(temp_v1 + 8) + 0xc) < 0) {
          FUN_002a0428(temp_v1,1);
        }
        FUN_0029a014(*(unsigned int *)(*(int *)(temp_v0 + 0x18) + 8),0);
        FUN_00254a2c(*(unsigned int *)(*(int *)(temp_v0 + 0x18) + 8),1);
      }
      FUN_002a04f0(0);
      *(unsigned int *)(temp_v0 + 8) = 2;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
  }
  else {
    temp_v1 = FUN_002c1d5c();
    if (temp_v1 == 0) {
      FUN_002be624(temp_v3,"battle/battle_map/e%03d_%02d.bcenv",*(unsigned int *)(temp_v0 + 0x10),
                   *(unsigned int *)(temp_v0 + 0x14));
      FUN_002a09b4(temp_v3,0);
      *(unsigned char *)(temp_v0 + 0x1c) = 1;
      FUN_002be624(temp_v3,"battle/battle_map/b%03d_%02d.bam",*(unsigned int *)(temp_v0 + 0x10),
                   *(unsigned int *)(temp_v0 + 0x14));
      temp_v2 = asdMdlManagerCreateSecondList(temp_v3,0x38);
      *(unsigned int *)(temp_v0 + 8) = 1;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 0x18) = temp_v2;
    }
  }
  return 0;
}

} /* extern "C" */
