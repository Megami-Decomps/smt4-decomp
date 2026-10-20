/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002470a8` (_code @ 0x2470a8, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024ba44(...);
int FUN_0024baec(void);
int FUN_00254484(void);
int FUN_002aa568(int, unsigned char *);
int FUN_002ac068(...);

/* Supplied declaration required: FUN_0024ba44. */
/* Supplied declaration required: FUN_0024baec. */
/* Supplied declaration required: FUN_00254484. */
/* Supplied declaration required: FUN_002aa568. */
/* Supplied declaration required: FUN_002ac068. */
extern unsigned int FUN_002b47f4(unsigned int);
extern int FUN_002c0cc4(void);


int FUN_002470a8(int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *pbVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  pbVar4 = (unsigned char *)0x439d20;
  temp_v4 = 0;
  do {
    temp_v0 = param_2;
    FUN_002aa568(param_2,pbVar4 + 2);
    if (temp_v0 == 0) {
      if (pbVar4 != (unsigned char *)0x0) {
        temp_v5 = (unsigned int)*pbVar4;
        temp_v3 = (unsigned int)pbVar4[1];
        temp_v1 = FUN_002b47f4(7);
        temp_v2 = FUN_0024baec();
        if (temp_v2 <= temp_v5) {
          temp_v5 = 0;
        }
        FUN_0024ba44(temp_v1,temp_v5);
        temp_v2 = FUN_00254484();
        if (temp_v2 <= temp_v3) {
          temp_v3 = 0;
        }
        FUN_002ac068(temp_v1,temp_v3);
        temp_v4 = FUN_002c0cc4();
        temp_v2 = (unsigned int)(param_1 != 0);
        if (param_3 != 0) {
          temp_v2 = 1 - temp_v2;
        }
        return temp_v4 + temp_v2 * 0x19c;
      }
      break;
    }
    temp_v4 = temp_v4 + 1;
    pbVar4 = pbVar4 + 0x22;
  } while (temp_v4 < 0x1c7);
  temp_v1 = FUN_002b47f4(7);
  FUN_0024baec();
  FUN_0024ba44(temp_v1,0);
  FUN_00254484();
  FUN_002ac068(temp_v1,0);
  temp_v4 = FUN_002c0cc4();
  temp_v2 = (unsigned int)(param_1 != 0);
  if (param_3 != 0) {
    temp_v2 = 1 - temp_v2;
  }
  return temp_v4 + temp_v2 * 0x19c;
}

} /* extern "C" */
