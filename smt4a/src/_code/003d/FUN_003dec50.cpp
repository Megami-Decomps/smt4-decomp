/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dec50` (_code @ 0x3dec50, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c7b8c(int, int);

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern int FUN_002c2758(unsigned short);
/* Supplied declaration required: FUN_002c7b8c. */
extern int FUN_0041862c(unsigned int);


void FUN_003dec50(void)

{
/* irregular: 3 unstructured edge(s); 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned short *puVar8;
  unsigned short temp_v7;
  
  temp_v0 = FUN_0041862c(0);
  temp_v7 = 0;
  do {
    temp_v1 = dataTableGet(0x1c,3);
    temp_v2 = dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v1);
    temp_v4 = 0;
    if (temp_v3 != 0) {
      temp_v4 = temp_v3 & 1;
      temp_v6 = 0;
      if (temp_v4 != 0) {
        do {
          if (*(unsigned short *)(temp_v2 + temp_v6 * 0xc) == temp_v7) goto LAB_003decec;
          temp_v6 = temp_v6 + 1;
          if ((int)temp_v6 >= (int)temp_v4) break;
        } while( 1 );
      }
    }
joined_r0x003decd0:
    temp_v6 = temp_v4;
    if (temp_v6 >= temp_v3) {
      temp_v7 = temp_v7 + 1;
      if (temp_v7 >= 0x20) {
        return;
      }
      continue;
    }
    puVar8 = (unsigned short *)(temp_v2 + temp_v6 * 0xc);
    if (*puVar8 == temp_v7) {
LAB_003decec:
      temp_v2 = temp_v2 + temp_v6 * 0xc;
    }
    else {
      if (puVar8[6] != temp_v7) {
        temp_v4 = temp_v6 + 2;
        goto joined_r0x003decd0;
      }
      temp_v2 = temp_v2 + temp_v6 * 0xc + 0xc;
    }
    if (((temp_v2 != 0) && (temp_v5 = FUN_002c2758(temp_v7), temp_v5 == 0)) &&
       ((int)(unsigned int)*(unsigned short *)(temp_v2 + 2) <= temp_v0)) {
      FUN_002c7b8c(temp_v7,1);
    }
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x20) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
