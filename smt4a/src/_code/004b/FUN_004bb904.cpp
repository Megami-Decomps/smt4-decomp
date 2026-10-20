/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb904` (_code @ 0x4bb904, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00148d68(int, int, int);

/* Supplied declaration required: FUN_00148d68. */
extern short *FUN_00152978(unsigned char, unsigned char);
extern int FUN_0015fa74(unsigned char, unsigned char);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


void FUN_004bb904(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  short *psVar7;
  unsigned int temp_v6;
  int temp_v7;
  
  temp_v2 = dataTableGet(2,0);
  temp_v3 = dataTableGetEntries();
  temp_v4 = dataTableGetCount(temp_v2);
  temp_v7 = 0;
  if (temp_v7 < temp_v4) {
    do {
      temp_v5 = temp_v3 + temp_v7 * 0xa4;
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v5 + 10);
      if ((temp_v6 != 0) && (temp_v6 <= param_1)) {
        temp_v0 = *(unsigned char *)(temp_v3 + temp_v7 * 0xa4);
        temp_v1 = *(unsigned char *)(temp_v5 + 1);
        psVar7 = (short *)FUN_00152978(temp_v0,temp_v1);
        temp_v5 = FUN_0015fa74(temp_v0,temp_v1);
        if (*psVar7 != *(short *)(temp_v5 + 0x12)) {
          *(unsigned char *)(psVar7 + 1) = 0;
          *(unsigned char *)((int)psVar7 + 3) = *(unsigned char *)((int)psVar7 + 3) & 0xe0;
          FUN_00148d68(temp_v0,temp_v1,0);
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v4);
  }
  return;
}

} /* extern "C" */
