/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd13c` (_code @ 0x2bd13c, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_STORAGE_DAT_004e8568_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004e8568_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004e8568_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_004e8568_1_1_size_check[(sizeof(union romwright_storage_DAT_004e8568_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e8568_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_004e8568_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e8568_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_004e8568_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004e8568_1_1 DAT_004e8568; /* 0x4e8568 */
extern int iRam004e856c; /* 0x4e856c */
extern int iRam004e8570; /* 0x4e8570 */
extern short sRam004e8574; /* 0x4e8574 */
extern unsigned int DAT_004e8578; /* 0x4e8578 */

/* Unsupported intrinsic, declaration required: LZCOUNT (LZCOUNT). */
/* Supplied declaration required: FUN_00155ef4. */
/* Supplied declaration required: FUN_00159f40. */
/* Supplied declaration required: FUN_0015a420. */
extern int FUN_0015a48c(unsigned int);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002bd13c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  romwright_code *pcVar6;
  unsigned int temp_v5;
  
  temp_v3 = param_1 >> 0x20;
  if (temp_v3 >= 0x8000) {
    return 0;
  }
  FUN_002c3aa8(&DAT_004e8578);
  temp_v0 = FUN_0015a48c(DAT_004e8568.whole);
  temp_v4 = iRam004e8570;
  if (temp_v0 == 0x18) {
    if ((*(int *)(iRam004e8570 + 0x20) == 0x7fff) || ((int)temp_v3 < *(int *)(iRam004e8570 + 0x20))) {
      FUN_002c3a24(&DAT_004e8578);
      return 0;
    }
    pcVar6 = *(romwright_code **)(iRam004e8570 + 0x2c);
    temp_v5 = *(unsigned int *)(iRam004e8570 + 0x30);
    FUN_00155ef4(&DAT_004e8568.whole);
    if (pcVar6 != (romwright_code *)0x0) {
      (*pcVar6)(temp_v4,temp_v5);
    }
  }
  temp_v0 = 0;
  temp_v4 = -LZCOUNT((DAT_004e8568.whole + 1) & ~DAT_004e8568.whole);
  temp_v1 = temp_v4 + 0x1f;
  if ((temp_v4 != -0x20) && ((int)temp_v1 < 0x18)) {
    DAT_004e8568.whole = DAT_004e8568.whole | (1 << (temp_v1 & 0xff));
    sRam004e8574 = sRam004e8574 + 1;
    temp_v0 = *(int *)(temp_v1 * 4 + 0x4e9b44);
    FUN_00159f40(temp_v0);
  }
  *(unsigned int *)(temp_v0 + 0x20) = temp_v3;
  temp_v4 = iRam004e856c;
  if (iRam004e856c != 0) {
    do {
      temp_v2 = temp_v4;
      if (*(int *)(temp_v2 + 0x20) <= (int)temp_v3) {
        temp_v4 = *(int *)(temp_v2 + 0x24);
        *(int *)(temp_v0 + 0x28) = temp_v2;
        *(int *)(temp_v0 + 0x24) = temp_v4;
        if (temp_v4 != 0) {
          *(int *)(temp_v4 + 0x28) = temp_v0;
        }
        else {
          *(unsigned int *)(temp_v0 + 0x24) = 0;
          iRam004e856c = temp_v0;
        }
        *(int *)(temp_v2 + 0x24) = temp_v0;
        FUN_002c3a24(&DAT_004e8578);
        FUN_0015a420(*(unsigned int *)(temp_v0 + 0x68),2);
        *(short *)(*(int *)(temp_v0 + 0x68) + 4) = *(short *)(*(int *)(temp_v0 + 0x68) + 4) + 1;
        *(unsigned int *)(temp_v0 + 0x2c) = param_2;
        *(unsigned int *)(temp_v0 + 0x30) = param_3;
        return temp_v0;
      }
      temp_v4 = *(int *)(temp_v2 + 0x28);
    } while (*(int *)(temp_v2 + 0x28) != 0);
    *(int *)(temp_v2 + 0x28) = temp_v0;
    *(int *)(temp_v0 + 0x24) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    iRam004e8570 = temp_v0;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    iRam004e856c = temp_v0;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    iRam004e8570 = temp_v0;
  }
  FUN_002c3a24(&DAT_004e8578);
  FUN_0015a420(*(unsigned int *)(temp_v0 + 0x68),2);
  *(short *)(*(int *)(temp_v0 + 0x68) + 4) = *(short *)(*(int *)(temp_v0 + 0x68) + 4) + 1;
  *(unsigned int *)(temp_v0 + 0x2c) = param_2;
  *(unsigned int *)(temp_v0 + 0x30) = param_3;
  return temp_v0;
}
