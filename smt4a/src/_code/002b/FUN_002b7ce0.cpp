/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7ce0` (_code @ 0x2b7ce0, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00244c70(...);
int FUN_003534b0(...);

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned char LAB_002b7f08; /* 0x2b7f08 */
extern unsigned char LAB_002b7f0c; /* 0x2b7f0c */
extern int g_mapHakai; /* 0x581038 */

extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00244c70. */
extern int FUN_00352ca0(int);
/* Supplied declaration required: FUN_003534b0. */


void FUN_002b7ce0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  do {
    temp_v4 = g_mapHakai + temp_v3 * 0x54;
    if (((*(char *)(temp_v4 + 0x5c) != '\0') && (*(short *)(temp_v4 + 0xac) == 3)) &&
       (temp_v0 = FUN_00352ca0((int)(short)*(unsigned int *)(temp_v4 + 0x80)), temp_v0 == 0)) {
      temp_v0 = gameFlagIsSet(0x492);
      if (temp_v0 != 0) {
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_003534b0(0x203,0,&LAB_002b7f08,0x35,0,0xffffffff,0,0,0,0,0,0,0,0,0,
                     *(unsigned int *)(temp_v4 + 0x80),0,0,99);
        temp_v1 = *(unsigned int *)(temp_v4 + 0x80);
        temp_v2 = 0x25;
      }
      else {
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_003534b0(0,0,&LAB_002b7f0c,0x4d,0,0xffffffff,0,0,0,0,0,0,0,0,0,
                     *(unsigned int *)(temp_v4 + 0x80),0,0,99);
        temp_v1 = *(unsigned int *)(temp_v4 + 0x80);
        temp_v2 = 0x28;
      }
      FUN_00244c70(temp_v1,temp_v2,0xffffffff,0);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x10);
  return;
}

} /* extern "C" */
