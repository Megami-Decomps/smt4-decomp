/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb880` (_code @ 0x4bb880, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00148d68(int, int, int);

/* Supplied declaration required: FUN_00148d68. */
extern int FUN_0014af84(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


void FUN_004bb880(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *puVar6;
  int temp_v5;
  
  temp_v0 = dataTableGet(2,3);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  temp_v3 = FUN_0014af84();
  temp_v5 = 0;
  if (temp_v5 < temp_v2) {
    do {
      temp_v4 = temp_v3 + temp_v5 * 4;
      *(unsigned char *)(temp_v4 + 0x2158e) = 0;
      *(unsigned char *)(temp_v4 + 0x2158f) = 0;
      puVar6 = (unsigned char *)(temp_v1 + temp_v5 * 2);
      FUN_00148d68(*puVar6,puVar6[1],1);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v2);
  }
  return;
}

} /* extern "C" */
