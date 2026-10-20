/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dea6c` (_code @ 0x3dea6c, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f858(unsigned int, int);
int FUN_001654f0(unsigned char [128], unsigned char [132]);
int FUN_00180118(unsigned int);
int FUN_001ad9b4(void);
int FUN_00282bf4(unsigned int);
int FUN_002e342c(...);
int FUN_002ebda8(void);
int FUN_003180c4(...);
int FUN_00359974(...);

/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_001654f0. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_00282bf4. */
extern short *FUN_00284fa4(int);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002ebda8. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00359974. */


void FUN_003dea6c(int param_1,int param_2,int param_3)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [132];
  
  temp_v2 = 0;
  if (param_3 != 0) {
    temp_v3 = param_1;
    FUN_001ad9b4();
    if (temp_v3 != 0) {
      temp_v2 = temp_v3 + 8;
    }
    FUN_002e342c(temp_v4,temp_v2);
    FUN_001654f0(temp_v4,temp_v5);
    FUN_003180c4(0x28,temp_v5);
  }
  else {
    temp_v3 = param_1;
    FUN_001ad9b4();
    if (temp_v3 != 0) {
      temp_v2 = temp_v3 + 8;
    }
    FUN_003180c4(0x28,temp_v2);
  }
  if ((param_2 != 0) && (FUN_001ad9b4(), param_1 != 0)) {
    temp_v2 = 0;
    do {
      temp_v3 = param_1 + temp_v2 * 8;
      temp_v0 = (unsigned int)*(unsigned short *)(temp_v3 + 0x100);
      switch(temp_v0) {
      case 1:
      case 7:
        temp_v0 = (unsigned int)*(unsigned short *)(temp_v3 + 0x102);
        FUN_0015f858(temp_v0,param_3);
        FUN_002e342c(temp_v4,temp_v0);
        temp_v1 = temp_v2;
        FUN_003180c4(temp_v1,temp_v4);
        FUN_00359974(temp_v2 + 0x18,*(unsigned int *)(temp_v3 + 0x104),0xffffffff,0);
        break;
      case 2:
        temp_v0 = (unsigned int)*(unsigned short *)(temp_v3 + 0x102);
        FUN_00180118(temp_v0);
        FUN_002e342c(temp_v4,temp_v0);
        temp_v1 = temp_v2 + 8;
        FUN_003180c4(temp_v1,temp_v4);
        FUN_00359974(temp_v2 + 0x18,*(unsigned int *)(temp_v3 + 0x104),0xffffffff,0);
        break;
      case 5:
        temp_v0 = (unsigned int)*(unsigned short *)(temp_v3 + 0x102);
        FUN_00282bf4(temp_v0);
        temp_v3 = temp_v2 + 0x29;
        FUN_003180c4(temp_v3,temp_v0);
        break;
      case 6:
        FUN_00359974(temp_v2 + 0x18,*(unsigned int *)(temp_v3 + 0x104),0xffffffff,0);
        break;
      case 8:
        FUN_002ebda8();
        temp_v1 = 0;
        if (0 < (int)temp_v0) {
          do {
            psVar2 = (short *)FUN_00284fa4(temp_v1);
            if (*psVar2 == *(short *)(temp_v3 + 0x102)) {
              if (psVar2 != (short *)0x0) {
                FUN_003180c4(temp_v2 + 0x29,psVar2 + 1);
                FUN_00359974(temp_v2 + 0x2a,*(unsigned int *)(temp_v3 + 0x104),0xffffffff,0);
                if (*(char *)((int)psVar2 + 0x37) == '0') {
                  temp_v0 = 0x3dec4c;
                  temp_v3 = temp_v2 + 0x2b;
                  FUN_003180c4(temp_v3,temp_v0);
                  break;
                }
                FUN_003180c4(temp_v2 + 0x2b,(int)psVar2 + 0x37);
              }
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < (int)temp_v0);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return;
}

} /* extern "C" */
