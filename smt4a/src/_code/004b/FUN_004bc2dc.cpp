/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bc2dc` (_code @ 0x4bc2dc, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_0046fd8c(int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int g_aocSystem; /* 0x570280 */

extern int FUN_0014bef4(short);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_0046fd8c. */
extern int FUN_004bb80c(void);


unsigned short FUN_004bc2dc(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  short *psVar7;
  short temp_v6;
  
  temp_v0 = dataTableGet(2,1);
  temp_v1 = dataTableGetEntries();
  temp_v5 = temp_v1;
  if (((-1 < (int)param_1) && (temp_v2 = dataTableGetCount(temp_v0), param_1 < temp_v2)) &&
     (temp_v5 = g_aocSystem, FUN_0046fd8c(g_aocSystem,param_1), temp_v5 == 0)) {
    temp_v5 = temp_v1 + param_1 * 0x78;
  }
  temp_v6 = 0;
  temp_v1 = 0;
  do {
    psVar7 = (short *)(temp_v5 + temp_v1 * 4);
    if (*psVar7 != 0) {
      if (param_2 != 0) {
        temp_v3 = FUN_004bb80c();
        temp_v4 = 0;
        do {
          temp_v2 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v4 * 2 + 0x14);
          if (((temp_v2 != 0) && (FUN_0019cac4(), temp_v2 != 0)) &&
             ((*(char *)(temp_v2 + 0xa2) != '\0' || (*(char *)(temp_v2 + 0xa3) != '\0'))))
          goto LAB_004bc3bc;
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 6);
      }
      temp_v6 = temp_v6 + psVar7[1];
    }
LAB_004bc3bc:
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x1e) {
      temp_v1 = FUN_0014bef4(temp_v6 - 1);
      temp_v3 = 0;
      while ((psVar7 = (short *)(temp_v5 + temp_v3 * 4), *psVar7 == 0 ||
             (temp_v1 = temp_v1 - (unsigned int)(unsigned short)psVar7[1], -1 < temp_v1))) {
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 0x1e) {
          return 0;
        }
      }
      return *(unsigned short *)(temp_v5 + temp_v3 * 4);
    }
  } while( 1 );
}

} /* extern "C" */
