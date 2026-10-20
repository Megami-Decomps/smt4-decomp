/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ee8b4` (_code @ 0x1ee8b4, 0x17c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029e8b8(int, int);
int FUN_0029eb5c(...);
int FUN_0029f848(int, int, int, int, int, int);
int FUN_002b9024(void);
int FUN_002c4938(int, int);
int FUN_0032c288(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0029e8b8. */
/* Supplied declaration required: FUN_0029eb5c. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_0032c288. */


void FUN_001ee8b4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar7;
  
  temp_v2 = DAT_0044e190;
  *(unsigned short *)(DAT_0044e190 + 0x2230) = 0;
  *(unsigned short *)(temp_v2 + 0x2232) = 0;
  FUN_002c4938(temp_v2 + 0xe30,0x1400);
  puVar7 = (unsigned short *)0x0;
  do {
    puVar4 = puVar7;
    FUN_002b9024();
    if ((puVar4 != (unsigned short *)0x0) && ((puVar4[3] & 1) != 0)) {
      if (*(char *)(param_1 + (unsigned int)*puVar4) != '\0') {
        *(unsigned short *)(temp_v2 + *(short *)(temp_v2 + 0x2230) * 4 + 0xe30) = *puVar4;
        temp_v1 = *(unsigned char *)(param_1 + (unsigned int)*puVar4);
        *(unsigned short *)(temp_v2 + *(short *)(temp_v2 + 0x2230) * 4 + 0xe32) = (unsigned short)temp_v1;
        if (temp_v1 != 0) {
          *(short *)(temp_v2 + 0x2232) = *(short *)(temp_v2 + 0x2232) + 1;
        }
        *(short *)(temp_v2 + 0x2230) = *(short *)(temp_v2 + 0x2230) + 1;
      }
    }
    puVar7 = (unsigned short *)(((int)puVar7 + 1U) & 0xffff);
  } while (puVar7 < (unsigned short *)0x500);
  temp_v3 = temp_v2 + 0x223c;
  FUN_0029f848(temp_v3,(int)*(short *)(temp_v2 + 0x2230),9,4,1,1);
  temp_v4 = (int)*(short *)(temp_v2 + 0x2230);
  if ((temp_v4 >= 1) && ((int)*(short *)(temp_v2 + 0x2234) + *(short *)(temp_v2 + 0x2236) * 4 >= temp_v4)) {
    temp_v0 = (short)((int)((temp_v4 - 1) + ((unsigned int)((temp_v4 - 1) >> 0x1f) >> 0x1e)) >> 2);
    *(short *)(temp_v2 + 0x2236) = temp_v0;
    *(short *)(temp_v2 + 0x2234) = *(short *)(temp_v2 + 0x2230) + (temp_v0 * -4 - 1);
    FUN_0029eb5c(temp_v3);
    FUN_0029e8b8(temp_v3,(int)*(short *)(temp_v2 + 0x2234));
  }
  else {
    FUN_0029eb5c(temp_v3,(int)*(short *)(temp_v2 + 0x2236));
    FUN_0029e8b8(temp_v3,(int)*(short *)(temp_v2 + 0x2234));
  }
  FUN_0032c288();
  *(unsigned char *)(temp_v2 + 0x410) = 1;
  return;
}

} /* extern "C" */
