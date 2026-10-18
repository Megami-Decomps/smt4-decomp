/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00250fcc` (_code @ 0x250fcc, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00282e54(void);
extern int *FUN_002b492c(void);


void FUN_00250fcc(int param_1,unsigned int param_2)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned short *puVar4;
  unsigned char *pbVar5;
  unsigned short temp_v2;
  
  piVar2 = (int *)FUN_002b492c();
  if (piVar2 != (int *)0x0) {
    temp_v0 = piVar2[2];
    temp_v1 = FUN_00282e54();
    switch((char)temp_v0) {
    case 0:
      break;
    case 1:
      temp_v1 = temp_v1 + 0xf0;
      break;
    case 2:
      temp_v1 = temp_v1 + 0x168;
      break;
    case 3:
      temp_v1 = temp_v1 + 600;
      break;
    case 4:
      temp_v1 = temp_v1 + 0x348;
      break;
    case 5:
      temp_v1 = temp_v1 + 0x438;
      break;
    case 6:
      temp_v1 = temp_v1 + 0x528;
      break;
    case 7:
      temp_v1 = temp_v1 + 0x618;
      break;
    case 8:
      temp_v1 = temp_v1 + 0x708;
      break;
    case 9:
      temp_v1 = temp_v1 + 0x76c;
      break;
    case 10:
      temp_v1 = temp_v1 + 0x8fc;
      break;
    case 0xb:
      temp_v1 = temp_v1 + 0xf3c;
      break;
    default:
      temp_v1 = 0;
    }
    param_1 = param_1 - *piVar2;
    if (*(char *)((int)piVar2 + 9) == '\0') {
      pbVar5 = (unsigned char *)(temp_v1 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1d)) >> 3));
      *pbVar5 = *pbVar5 & ~(unsigned char)(1 << ((param_1 % 8) & 0xffU));
      return;
    }
    if (*(char *)((int)piVar2 + 9) == '\x01') {
      puVar4 = (unsigned short *)(temp_v1 + param_1 * 2);
      temp_v2 = *puVar4;
      if (temp_v2 < param_2) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v2 - (short)param_2;
      }
      *puVar4 = temp_v2;
    }
  }
  return;
}
