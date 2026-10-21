/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b7128` (_code @ 0x4b7128, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int asdTMTexLoadMainHeap(int, unsigned int);
int FUN_0020214c(void);
int FUN_00275bc8(unsigned int, char *);
int asdLoadFileAsyncSimple(...);

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */


void FUN_004b7128(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char *pcVar1;
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
    temp_v2 = 1;
    temp_v1 = 1000;
    *(unsigned int *)(param_1 + 0x90) = temp_v2;
    *(unsigned int *)(param_1 + 0x94) = temp_v1;
    break;
  case 3:
  case 4:
    temp_v2 = 2;
    temp_v1 = 2000;
    *(unsigned int *)(param_1 + 0x90) = temp_v2;
    *(unsigned int *)(param_1 + 0x94) = temp_v1;
  }
  asdTMTexLoadMainHeap(0x18,*(unsigned int *)(param_1 + 0x90));
  textFormatBuffer(temp_v3,"mikado/m%03d/m%03d.bf",(int)*(short *)(param_1 + 0x3c),
               (int)*(short *)(param_1 + 0x3c));
  textFormatBuffer(temp_v4,"mikado/m%03d/m%03d.mbm",(int)*(short *)(param_1 + 0x3c),
               (int)*(short *)(param_1 + 0x3c));
  asdLoadFileAsyncSimple(temp_v3,param_1 + 0x1128,0);
  asdLoadFileAsyncSimple(temp_v4,param_1 + 0x112c,0);
  pcVar1 = "map/all/mapsys_scr.bf";
  FUN_0020214c();
  *(char **)(param_1 + 0x1150) = pcVar1;
  pcVar1 = "map/all/mapsys_mes.mbm";
  FUN_0020214c();
  *(char **)(param_1 + 0x1154) = pcVar1;
  temp_v2 = *(unsigned int *)(param_1 + 0x1150);
  FUN_00275bc8(temp_v2,pcVar1);
  *(unsigned int *)(param_1 + 0x1158) = temp_v2;
  switch(*(unsigned short *)(param_1 + 0x3c)) {
  case 0:
  case 4:
  case 5:
    temp_v0 = *(unsigned int *)(param_1 + 0x20) | 0x10000000;
    break;
  case 1:
  case 2:
  case 3:
    temp_v0 = *(unsigned int *)(param_1 + 0x20) & 0xefffffff;
    break;
  default:
    return;
  }
  *(unsigned int *)(param_1 + 0x20) = temp_v0;
  return;
}

} /* extern "C" */
