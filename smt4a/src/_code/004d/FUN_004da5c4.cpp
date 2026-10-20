/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da5c4` (_code @ 0x4da5c4, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int unitRecordBuild(int, unsigned char [300]);
int FUN_0035ad50(int, unsigned char [300]);
int FUN_004bcd90(int);

extern unsigned char *slotRecordFindById(short);
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: FUN_0035ad50. */
/* Supplied declaration required: FUN_004bcd90. */


void FUN_004da5c4(unsigned int param_1,unsigned char *param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [300];
  
  *(unsigned int *)(param_3 + 0x68) = 0;
  *(unsigned int *)(param_3 + 0x6c) = 0;
  *(unsigned int *)(param_3 + 0x70) = 0;
  *(unsigned int *)(param_3 + 0x74) = 0;
  *(unsigned int *)(param_3 + 0x78) = 0;
  *(unsigned int *)(param_3 + 0x7c) = 0;
  *(unsigned int *)(param_3 + 0x80) = 0;
  *(unsigned int *)(param_3 + 0x84) = 0;
  *(unsigned int *)(param_3 + 0x88) = 0;
  *(unsigned int *)(param_3 + 0x8c) = 0;
  *(unsigned int *)(param_3 + 0x90) = 0;
  *(unsigned int *)(param_3 + 0x94) = 0;
  *(unsigned int *)(param_3 + 0x98) = 0;
  *(unsigned int *)(param_3 + 0x9c) = 0;
  *(unsigned int *)(param_3 + 0xa0) = 0;
  temp_v5 = 0;
  *(unsigned int *)(param_3 + 0xa4) = 0;
  puVar3 = param_2;
  do {
    temp_v1 = *(short *)(param_2 + temp_v5 * 2 + 2);
    if (temp_v1 != 0) {
      temp_v0 = param_2[temp_v5 + 0x1a];
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x03') {
          if (temp_v0 == '\x02') {
            unitRecordBuild(temp_v1,temp_v6);
            puVar3 = temp_v6;
          }
        }
        else {
          FUN_0035ad50(temp_v1,temp_v6);
          puVar3 = temp_v6;
        }
      }
      else {
        puVar3 = (unsigned char *)slotRecordFindById(temp_v1);
      }
      temp_v2 = 0;
      do {
        temp_v4 = param_3 + temp_v2;
        temp_v3 = temp_v2 + 2;
        *(unsigned char *)(temp_v4 + 0x68) = *(unsigned char *)(temp_v4 + 0x68) | puVar3[temp_v2 + 0x68];
        *(unsigned char *)(temp_v4 + 0x69) = puVar3[temp_v2 + 0x69] | *(unsigned char *)(temp_v4 + 0x69);
        temp_v2 = temp_v3;
      } while (temp_v3 < 0x40);
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0xc);
  FUN_004bcd90(param_3);
  return;
}

} /* extern "C" */
