/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b82c4` (_code @ 0x3b82c4, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297060(unsigned int, unsigned int);
int FUN_00297468(...);
int asdTMTexTableLoadEntryAsync(int, unsigned int);
int textFormatBuffer(...);

/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_002c5c04(char *);


void FUN_003b82c4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned char temp_v4 [36];
  
  switch(*(unsigned short *)(param_1 + 0x3c)) {
  case 0:
  case 1:
    *(unsigned int *)(param_1 + 0x90) = 0;
    *(unsigned int *)(param_1 + 0x94) = 0;
    break;
  case 2:
  case 5:
    temp_v0 = 1;
    temp_v1 = 1000;
    *(unsigned int *)(param_1 + 0x90) = temp_v0;
    *(unsigned int *)(param_1 + 0x94) = temp_v1;
    break;
  case 3:
  case 4:
    temp_v0 = 2;
    temp_v1 = 2000;
    *(unsigned int *)(param_1 + 0x90) = temp_v0;
    *(unsigned int *)(param_1 + 0x94) = temp_v1;
  }
  asdTMTexTableLoadEntryAsync(0x21,*(unsigned int *)(param_1 + 0x90));
  textFormatBuffer(temp_v3,"mikado/m%03d/m%03d.bf",(int)*(short *)(param_1 + 0x3c),
               (int)*(short *)(param_1 + 0x3c));
  textFormatBuffer(temp_v4,"mikado/m%03d/m%03d.mbm",(int)*(short *)(param_1 + 0x3c),
               (int)*(short *)(param_1 + 0x3c));
  FUN_00297468(temp_v3,param_1 + 0xd6c,0);
  FUN_00297468(temp_v4,param_1 + 0xd70,0);
  temp_v0 = FUN_002c5c04("map/all/mapsys_scr.bf");
  *(unsigned int *)(param_1 + 0xd94) = temp_v0;
  temp_v0 = FUN_002c5c04("map/all/mapsys_mes.mbm");
  *(unsigned int *)(param_1 + 0xd98) = temp_v0;
  temp_v1 = *(unsigned int *)(param_1 + 0xd94);
  FUN_00297060(temp_v1,temp_v0);
  *(unsigned int *)(param_1 + 0xd9c) = temp_v1;
  switch(*(unsigned short *)(param_1 + 0x3c)) {
  case 0:
  case 4:
  case 5:
    temp_v2 = *(unsigned int *)(param_1 + 0x20) | 0x10000000;
    break;
  case 1:
  case 2:
  case 3:
    temp_v2 = *(unsigned int *)(param_1 + 0x20) & 0xefffffff;
    break;
  default:
    return;
  }
  *(unsigned int *)(param_1 + 0x20) = temp_v2;
  return;
}

} /* extern "C" */
