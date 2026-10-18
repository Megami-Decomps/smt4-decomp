/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e8a4` (_code @ 0x37e8a4, 0x2ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

extern int FUN_0015688c(void);
/* Supplied declaration required: FUN_001654d8. */
/* Supplied declaration required: FUN_001654e4. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_0037e8a4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  
  temp_v2 = FUN_001654d8();
  temp_v3 = FUN_001654e4(param_1 + 0xe8c);
  temp_v10 = 0.26f;
  temp_v9 = 0x3e851eb800000000;
  FUN_001879d0(DAT_0059dbb4);
  FUN_001677c0();
  temp_v7 = 0;
  do {
    FUN_001835b4(2,0x14,temp_v7 + 0xc08,temp_v2 + (int)temp_v10,temp_v3,0xbf);
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 3);
  temp_v10 = (float)((unsigned long long)temp_v9 >> 0x20);
  FUN_001879d0(DAT_0059dbb4);
  FUN_001835b4(2,0x14,0xbe1,temp_v2 + (int)temp_v10,temp_v3,0xc4);
  temp_v2 = param_1 + 0xf18;
  if ((*(char *)(param_1 + 0xfa2) != '\0') && (temp_v7 = FUN_0015688c(), temp_v7 != 0)) {
    temp_v7 = FUN_001654d8(temp_v2);
    temp_v4 = FUN_001654e4(temp_v2);
    temp_v5 = FUN_001834a4(0x14,0xbd9);
    temp_v10 = (float)((unsigned long long)temp_v9 >> 0x20);
    FUN_001879d0(DAT_0059dbb4);
    temp_v2 = DAT_0059dbb4;
    temp_v0 = *(short *)(temp_v5 + 8);
    temp_v1 = *(short *)(temp_v5 + 10);
    temp_v5 = FUN_00169294(6,1,0);
    piVar9 = (int *)(temp_v2 + 0x12b8);
    temp_v6 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v5;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v6 != temp_v5) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    temp_v2 = 0;
    do {
      FUN_001835b4(2,0x14,temp_v2 + 0xbe2,(int)temp_v10 + temp_v7 + (int)temp_v0,temp_v1 + temp_v4,0xbf);
      temp_v8 = (float)((unsigned long long)temp_v9 >> 0x20);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
    temp_v2 = FUN_001834a4(0x14,0xc16);
    FUN_001879d0(DAT_0059dbb4);
    temp_v0 = *(short *)(temp_v2 + 8);
    temp_v1 = *(short *)(temp_v2 + 10);
    FUN_001677c0();
    temp_v2 = 0;
    do {
      FUN_001835b4(2,0x14,temp_v2 + 0xc01,(int)temp_v0 + (int)temp_v8 + temp_v7,temp_v1 + temp_v4,0xc4);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
    FUN_001677c0();
    temp_v2 = DAT_0059dbb4;
    temp_v7 = FUN_00169294(6,7,0);
    piVar9 = (int *)(temp_v2 + 0x12b8);
    temp_v4 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v7;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != temp_v7) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
  }
  return;
}
