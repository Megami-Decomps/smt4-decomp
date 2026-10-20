/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107210` (_code @ 0x107210, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0a9c(int, int, int);

/* Supplied declaration required: FUN_002c0a9c. */
extern int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


void FUN_00107210(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  
  temp_v0 = FUN_002c0cec(2,3);
  temp_v1 = FUN_002c0cc4();
  temp_v2 = FUN_002c0c74(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      puVar4 = (unsigned char *)(temp_v1 + temp_v3 * 2);
      FUN_002c0a9c(*puVar4,puVar4[1],0);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return;
}

} /* extern "C" */
