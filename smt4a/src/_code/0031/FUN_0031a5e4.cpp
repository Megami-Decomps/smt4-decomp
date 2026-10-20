/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a5e4` (_code @ 0x31a5e4, 0x324 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_00169ddc(int);
int FUN_001f4908(int, int, unsigned int);
int FUN_00284168(int, int, int, int);

/* Supplied declaration required: FUN_001641c4. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_00169ddc. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001f4908. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_00284168. */
extern int FUN_002e07f4(void);


unsigned int FUN_0031a5e4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = *(int *)(temp_v0 + 0x20) + 1;
  temp_v2 = (int)(((long long)(int)temp_v1 * -0x77777777 + ((unsigned long long)temp_v1 << 0x20)) >> 0x20);
  *(unsigned int *)(temp_v0 + 0x20) = temp_v1 + ((temp_v2 >> 5) - (temp_v2 >> 0x1f)) * -0x3c;
  switch(*(unsigned int *)(temp_v0 + 4)) {
  case 0:
    temp_v2 = *(int *)(temp_v0 + 0x18) + 1;
    *(int *)(temp_v0 + 0x18) = temp_v2;
    *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + 1;
    temp_v3 = *(int *)(temp_v0 + 8);
    if (temp_v2 >= 8) {
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(int *)(temp_v0 + 8) = temp_v3;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
    if (temp_v3 == 5) {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + 4) = 1;
      *(unsigned int *)(temp_v0 + 8) = 0;
      temp_v2 = FUN_001834a4(0x22,0x11);
      temp_v3 = (int)(short)(*(short *)(temp_v2 + 8) - 0x10);
      FUN_00284168(temp_v3,(int)(short)(*(short *)(temp_v2 + 10) - 0x10),
                   (int)(short)((*(short **)(temp_v2 + 0xc))[1] + 0x20),
                   (int)(short)(**(short **)(temp_v2 + 0xc) + 0x20));
      *(short *)(temp_v0 + 0x14) = (short)temp_v3;
    }
    break;
  case 1:
    temp_v2 = FUN_00284140((int)*(short *)(temp_v0 + 0x14));
    temp_v1 = *(int *)(temp_v0 + 0x18) + 1;
    temp_v3 = (int)(((long long)(int)temp_v1 * -0x77777777 + ((unsigned long long)temp_v1 << 0x20)) >> 0x20);
    *(unsigned int *)(temp_v0 + 0x18) = temp_v1 + ((temp_v3 >> 3) - (temp_v3 >> 0x1f)) * -0xf;
    temp_v1 = *(int *)(temp_v0 + 0x1c) + 1;
    temp_v3 = (int)(((long long)(int)temp_v1 * -0x77777777 + ((unsigned long long)temp_v1 << 0x20)) >> 0x20);
    *(unsigned int *)(temp_v0 + 0x1c) = temp_v1 + ((temp_v3 >> 5) - (temp_v3 >> 0x1f)) * -0x3c;
    if (temp_v2 == 2) {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
    else if (temp_v2 == 6) {
      FUN_001641c4();
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + 4) = 2;
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_00169ddc(0x10000f9);
    }
    break;
  case 2:
    temp_v2 = *(int *)(temp_v0 + 0x18) + 1;
    *(int *)(temp_v0 + 0x18) = temp_v2;
    if (temp_v2 >= 9) {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + 4) = 3;
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    break;
  case 3:
    temp_v2 = *(int *)(temp_v0 + 0x1c) + 1;
    *(int *)(temp_v0 + 0x1c) = temp_v2;
    if (temp_v2 >= 5) {
      *(int *)(temp_v0 + 0x18) = (*(int *)(temp_v0 + 0x18) + 1) % 4;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
    temp_v2 = *(int *)(temp_v0 + 8) + 1;
    *(int *)(temp_v0 + 8) = temp_v2;
    if (temp_v2 >= 0x5b) {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + 4) = 4;
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    break;
  case 4:
    temp_v2 = *(int *)(temp_v0 + 0x1c) + 1;
    *(int *)(temp_v0 + 0x1c) = temp_v2;
    if (temp_v2 >= 9) {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + 4) = 5;
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    break;
  case 5:
    if (*(int *)(temp_v0 + 0x18) < 8) {
      *(int *)(temp_v0 + 0x18) = *(int *)(temp_v0 + 0x18) + 1;
    }
    else {
      *(int *)(temp_v0 + 0x1c) = (*(int *)(temp_v0 + 0x1c) + 1) % 0xc;
    }
    temp_v2 = *(int *)(temp_v0 + 8) + 1;
    *(int *)(temp_v0 + 8) = temp_v2;
    if (temp_v2 >= 0x39) {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + 4) = 6;
      *(unsigned int *)(temp_v0 + 8) = 0;
      FUN_001f4908(0,0x1e,0xffffffff);
      FUN_001f4908(1,0x1e,0xffffffff);
    }
    break;
  case 6:
    temp_v2 = FUN_002e07f4();
    if ((temp_v2 != 0) && (temp_v2 = *(int *)(temp_v0 + 8) + 1, *(int *)(temp_v0 + 8) = temp_v2, temp_v2 >= 11))
    {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + 4) = 7;
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
