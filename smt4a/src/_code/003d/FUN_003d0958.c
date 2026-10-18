/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0958` (_code @ 0x3d0958, 0x25c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_002321f8; /* 0x2321f8 */
extern int DAT_0057f57c; /* 0x57f57c */

/* Supplied declaration required: FUN_00100854. */
/* Supplied declaration required: FUN_001517b4. */
extern int FUN_00163aa4(int);
extern int FUN_00163fd4(unsigned int);
/* Supplied declaration required: FUN_00184c00. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019e330. */
/* Supplied declaration required: FUN_0028520c. */


unsigned int FUN_003d0958(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  unsigned int temp_v4;
  unsigned short temp_v5 [6];
  
  temp_v0 = DAT_0057f57c;
  switch(*(unsigned int *)(DAT_0057f57c + 8)) {
  case 1:
    temp_v1 = (int)(short)*(unsigned int *)(DAT_0057f57c + 0x14);
    FUN_0028520c();
    if (temp_v1 != 0) {
      if (*(int *)(temp_v0 + 0xc) == 0) {
        temp_v1 = 9;
        FUN_001517b4(9,2);
        if ((temp_v1 != 0) || (temp_v1 = FUN_00163fd4(6), temp_v1 != 0)) {
          *(unsigned char *)(temp_v0 + 0xcd) = 1;
        }
        else {
          FUN_00184c00(temp_v0 + 0x48,0);
          FUN_0019e330(temp_v0 + 0x48,0);
        }
        *(unsigned int *)(temp_v0 + 0xc) = 1;
      }
      temp_v1 = FUN_00163aa4(temp_v0 + 0x48);
      if (temp_v1 != 0) {
        *(unsigned int *)(temp_v0 + 0xc) = 0;
        *(unsigned int *)(temp_v0 + 8) = 2;
        *(unsigned int *)(temp_v0 + 0x10) = 0;
      }
    }
    break;
  case 3:
    temp_v1 = (int)(short)*(unsigned int *)(DAT_0057f57c + 0x14);
    FUN_0028520c();
    if ((temp_v1 != 0) && (temp_v1 = FUN_00163aa4(temp_v0 + 0x48), temp_v1 != 0)) {
      temp_v4 = *(unsigned int *)(temp_v0 + 0x14);
      temp_v2 = FUN_00187180(0x47,0);
      temp_v3 = FUN_00192798();
      temp_v2 = FUN_00192748(temp_v2);
      puVar5 = temp_v5;
      temp_v5[0] = (unsigned short)temp_v4;
      FUN_00100854(puVar5,temp_v3,temp_v2,4,&LAB_002321f8);
      if ((puVar5 != (unsigned short *)0x0) && (-1 < (short)puVar5[1])) {
        FUN_0019a7f4();
      }
      *(unsigned int *)(temp_v0 + 8) = 0;
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    break;
  case 4:
    temp_v1 = (int)(short)*(unsigned int *)(DAT_0057f57c + 0x14);
    FUN_0028520c();
    if ((temp_v1 != 0) &&
       (temp_v1 = *(int *)(temp_v0 + 0x1c) + 1, *(int *)(temp_v0 + 0x1c) = temp_v1,
       *(int *)(temp_v0 + 0x20) <= temp_v1)) {
      temp_v4 = *(unsigned int *)(temp_v0 + 0x18);
      temp_v2 = FUN_00187180(0x47,0);
      temp_v3 = FUN_00192798();
      temp_v2 = FUN_00192748(temp_v2);
      puVar5 = temp_v5;
      temp_v5[0] = (unsigned short)temp_v4;
      FUN_00100854(puVar5,temp_v3,temp_v2,4,&LAB_002321f8);
      if ((puVar5 != (unsigned short *)0x0) && (-1 < (short)puVar5[1])) {
        FUN_0019a7f4();
      }
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 8) = 2;
      *(unsigned int *)(temp_v0 + 0x10) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
  }
  *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) + 1;
  return 0;
}
