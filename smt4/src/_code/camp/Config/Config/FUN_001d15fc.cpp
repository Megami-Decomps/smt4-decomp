/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d15fc` (_code @ 0x1d15fc, 0x224 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memFill8(int, unsigned int);
int ifTouchRegionAdd(int, int, int, int);
int ifTouchRegionRemove(void);
int gameFlagIsSet(int);
int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);

extern int g_config; /* 0x43dc58 */

/* Supplied declaration required: memFill8. */
/* Supplied declaration required: ifTouchRegionAdd. */
/* Supplied declaration required: ifTouchRegionRemove. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_001d15fc(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = g_config;
  temp_v5 = 0;
  if (0 < *(short *)(g_config + 0x7e)) {
    do {
      ifTouchRegionRemove();
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(short *)(temp_v0 + 0x7e));
  }
  memFill8(temp_v0 + 0x76,0xffffffff);
  *(unsigned short *)(temp_v0 + 0x7e) = 0;
  temp_v5 = gameFlagIsSet(0x555);
  if (((temp_v5 == 0) || (temp_v5 = gameFlagIsSet(0x557), temp_v5 == 0)) &&
     (temp_v5 = gameFlagIsSet(0x557), temp_v5 == 0)) {
    gameFlagIsSet(0x555);
  }
  temp_v2 = dataTableGet(0x36,0);
  dataTableGetEntries();
  dataTableGetCount(temp_v2);
  temp_v5 = FUN_002bf4f8(0x2f,0x20);
  if (*(char *)(temp_v0 + 0xa8) != '\0') {
    temp_v3 = FUN_002bf4f8(0x2f,0x44);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    ifTouchRegionAdd(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x78) = (short)temp_v4;
    temp_v3 = FUN_002bf4f8(0x2f,0x45);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    ifTouchRegionAdd(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x7a) = (short)temp_v4;
    temp_v3 = FUN_002bf4f8(0x2f,0x46);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    ifTouchRegionAdd(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x7c) = (short)temp_v4;
    temp_v1 = *(short *)(temp_v0 + 0x7e) + 3;
  }
  else {
    temp_v3 = FUN_002bf4f8(0x2f,0x42);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    ifTouchRegionAdd(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x78) = (short)temp_v4;
    temp_v3 = FUN_002bf4f8(0x2f,0x43);
    temp_v4 = (int)(short)(*(short *)(temp_v5 + 8) + *(short *)(temp_v3 + 8));
    ifTouchRegionAdd(temp_v4,(int)(short)(*(short *)(temp_v5 + 10) + *(short *)(temp_v3 + 10)),
                 (int)**(short **)(temp_v3 + 0xc),(int)(*(short **)(temp_v3 + 0xc))[1]);
    *(short *)(temp_v0 + 0x7a) = (short)temp_v4;
    temp_v1 = *(short *)(temp_v0 + 0x7e) + 2;
  }
  *(short *)(temp_v0 + 0x7e) = temp_v1;
  return;
}

} /* extern "C" */
