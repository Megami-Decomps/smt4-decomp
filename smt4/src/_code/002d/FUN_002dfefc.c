/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfefc` (_code @ 0x2dfefc, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_00404464; /* 0x404464 */
extern unsigned int *DAT_00447a98; /* 0x447a98 */
extern int DAT_0049f91c; /* 0x49f91c */
extern unsigned char DAT_004b7608; /* 0x4b7608 */

/* Supplied declaration required: FUN_002829d4. */
extern int FUN_00292f28(unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bfc24. */
extern unsigned int FUN_002bfdc4(void);
extern unsigned int FUN_002bfdd4(void);
extern int FUN_002c09d0(unsigned int);
extern int FUN_002c2950(void);


void FUN_002dfefc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v2 = FUN_002bfdd4();
  temp_v7 = 1;
  temp_v0 = 0;
  do {
    temp_v3 = FUN_002c2950();
    temp_v5 = (int)(temp_v7 + ((unsigned int)((int)temp_v7 >> 0x1f) >> 0x1d)) >> 3;
    temp_v4 = 1 << (((int)temp_v7 % 8) & 0xffU);
    if ((*(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) & temp_v4) == 0) {
      temp_v3 = FUN_00292f28(temp_v7);
      temp_v1 = (unsigned char)temp_v4;
      if (temp_v3 != 0) {
        temp_v3 = FUN_002c2950();
        *(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) = *(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) | temp_v1;
      }
      else {
        temp_v4 = temp_v7;
        FUN_002829d4();
        if (temp_v4 != 2) {
          temp_v3 = FUN_002c2950();
          temp_v0 = 1;
          *(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) = *(unsigned char *)(temp_v3 + temp_v5 + 0xd9c) | temp_v1;
        }
      }
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x8d);
  if ((((param_1 == 0) && (temp_v0)) && (DAT_0049f91c != 0x24)) &&
     (temp_v5 = FUN_002c09d0(0x408), temp_v5 != 0)) {
    DAT_004b7608 = 0;
    FUN_002be624(&DAT_004b7608,&DAT_00404464);
    puVar3 = DAT_00447a98;
    DAT_00447a98[5] = (unsigned int)&DAT_004b7608;
    *puVar3 = 3;
    puVar3[1] = 0;
    temp_v6 = FUN_002bfdc4();
    FUN_002bfc24(1,0x61a84,temp_v6,temp_v2 | 4);
    return;
  }
  return;
}
