/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7104` (_code @ 0x2a7104, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_00203b40(int, int, int, int, int, int);
int FUN_002a4914(int, int);
int FUN_002a4964(...);
int sysMemClear(int, int);
int FUN_003d4104(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003d4104. */


void FUN_002a7104(int param_1)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar7;
  
  temp_v2 = DAT_00588fe8;
  *(unsigned short *)(DAT_00588fe8 + 0x2348) = 0;
  *(unsigned short *)(temp_v2 + 0x234a) = 0;
  sysMemClear(temp_v2 + 0xf48,0x1400);
  puVar7 = (unsigned short *)0x0;
  do {
    puVar4 = puVar7;
    FUN_00184310();
    if ((puVar4 != (unsigned short *)0x0) && ((puVar4[5] & 1) != 0)) {
      if (*(char *)(param_1 + (unsigned int)*puVar4) != '\0') {
        *(unsigned short *)(temp_v2 + *(short *)(temp_v2 + 0x2348) * 4 + 0xf48) = *puVar4;
        temp_v1 = *(unsigned char *)(param_1 + (unsigned int)*puVar4);
        *(unsigned short *)(temp_v2 + *(short *)(temp_v2 + 0x2348) * 4 + 0xf4a) = (unsigned short)temp_v1;
        if (temp_v1 != 0) {
          *(short *)(temp_v2 + 0x234a) = *(short *)(temp_v2 + 0x234a) + 1;
        }
        *(short *)(temp_v2 + 0x2348) = *(short *)(temp_v2 + 0x2348) + 1;
      }
    }
    puVar7 = (unsigned short *)(((int)puVar7 + 1U) & 0xffff);
  } while (puVar7 < (unsigned short *)0x500);
  temp_v3 = temp_v2 + 0x2354;
  FUN_00203b40(temp_v3,(int)*(short *)(temp_v2 + 0x2348),9,4,1,1);
  temp_v4 = (int)*(short *)(temp_v2 + 0x2348);
  if ((temp_v4 >= 1) && ((int)*(short *)(temp_v2 + 0x234c) + *(short *)(temp_v2 + 0x234e) * 4 >= temp_v4)) {
    temp_v0 = (short)((int)((temp_v4 - 1) + ((unsigned int)((temp_v4 - 1) >> 0x1f) >> 0x1e)) >> 2);
    *(short *)(temp_v2 + 0x234e) = temp_v0;
    *(short *)(temp_v2 + 0x234c) = *(short *)(temp_v2 + 0x2348) + (temp_v0 * -4 - 1);
    FUN_002a4964(temp_v3);
    FUN_002a4914(temp_v3,(int)*(short *)(temp_v2 + 0x234c));
  }
  else {
    FUN_002a4964(temp_v3,(int)*(short *)(temp_v2 + 0x234e));
    FUN_002a4914(temp_v3,(int)*(short *)(temp_v2 + 0x234c));
  }
  FUN_003d4104();
  *(unsigned char *)(temp_v2 + 0x528) = 1;
  return;
}

} /* extern "C" */
