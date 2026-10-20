/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1e24` (_code @ 0x3b1e24, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(void);
int scrSetResult(unsigned int);

extern unsigned int g_btlTalk; /* 0x57a7b8 */

/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(unsigned int);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern unsigned int FUN_004c97b4(unsigned int);


unsigned int FUN_003b1e24(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  unsigned int temp_v5;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = scrGetArg(2);
  temp_v5 = 0xffffffff;
  temp_v3 = FUN_004c97b4(g_btlTalk);
  dataTableGetCount();
  temp_v4 = dataTableGetEntries(temp_v3);
  if (temp_v1 != 0) {
    temp_v0 = (temp_v4 + temp_v0 * 0xf0 + temp_v1 * 0x4c) - 0x44;
    if (temp_v2 < 4) {
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v0 + temp_v2);
    }
    else {
      temp_v1 = (temp_v2 - 4) / 0xb;
      temp_v2 = (temp_v2 - 4) % 0xb;
      if (temp_v2 >= 0xb) {
        if (temp_v2 == 0xb) {
          temp_v5 = *(unsigned int *)(temp_v0 + temp_v1 * 0x18 + 0x14);
        }
        else {
          temp_v5 = *(unsigned int *)(temp_v0 + temp_v1 * 0x18 + 0x18);
        }
      }
      else {
        switch(temp_v2) {
        case 0:
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v1 * 0x18 + 4);
          break;
        case 1:
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v1 * 0x18 + 6);
          break;
        case 2:
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v1 * 0x18 + 8);
          break;
        case 3:
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v1 * 0x18 + 10);
          break;
        case 4:
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v1 * 0x18 + 0xc);
          break;
        case 5:
          temp_v5 = (unsigned int)*(unsigned char *)(temp_v0 + temp_v1 * 0x18 + 0xe);
          break;
        case 6:
          temp_v5 = (unsigned int)*(unsigned char *)(temp_v0 + temp_v1 * 0x18 + 0xf);
          break;
        case 7:
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v1 * 0x18 + 0x10);
          break;
        case 8:
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v1 * 0x18 + 0x12);
          break;
        case 9:
          temp_v5 = *(unsigned int *)(temp_v0 + temp_v1 * 0x18 + 0x14);
          break;
        case 10:
          temp_v5 = *(unsigned int *)(temp_v0 + temp_v1 * 0x18 + 0x18);
        }
      }
    }
  }
  else {
    puVar6 = (unsigned short *)(temp_v4 + temp_v0 * 0xf0);
    switch(temp_v2) {
    case 0:
      temp_v5 = (unsigned int)*puVar6;
      break;
    case 1:
      temp_v5 = (unsigned int)puVar6[1];
      break;
    case 2:
      temp_v5 = (unsigned int)puVar6[2];
      break;
    case 3:
      temp_v5 = (unsigned int)(unsigned char)puVar6[3];
      break;
    case 4:
      temp_v5 = (unsigned int)*(unsigned char *)((int)puVar6 + 7);
    }
  }
  scrSetResult(temp_v5);
  return 1;
}

} /* extern "C" */
