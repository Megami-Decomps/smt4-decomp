/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbf54` (_code @ 0x3bbf54, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0a9c(int, int, int);

extern int FUN_002c09bc(void);
/* Supplied declaration required: FUN_002c0a9c. */
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_003bbf54(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *pbVar6;
  unsigned char *puVar7;
  int temp_v5;
  
  temp_v0 = dataTableGet(2,3);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  temp_v3 = FUN_002c09bc();
  temp_v5 = 0;
  if (temp_v5 < temp_v2) {
    do {
      temp_v4 = temp_v3 + temp_v5 * 4;
      pbVar6 = (unsigned char *)(temp_v4 + 0x1ec57);
      *(unsigned char *)(temp_v4 + 0x1ec56) = 0;
      *pbVar6 = *pbVar6 & 0x80;
      puVar7 = (unsigned char *)(temp_v1 + temp_v5 * 2);
      FUN_002c0a9c(*puVar7,puVar7[1],1);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v2);
  }
  return;
}

} /* extern "C" */
