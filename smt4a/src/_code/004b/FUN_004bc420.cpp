/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bc420` (_code @ 0x4bc420, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00148d68(unsigned int, unsigned int, int);
int FUN_00152978(...);
int FUN_0019cac4(void);
int FUN_0046fd8c(int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00148d68. */
extern int FUN_0014bef4(short);
/* Supplied declaration required: FUN_00152978. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_0046fd8c. */
extern int FUN_004bb80c(void);


unsigned short FUN_004bc420(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  short *psVar9;
  short temp_v7;
  
  puVar1 = (unsigned short *)FUN_00152978(param_1);
  temp_v4 = (unsigned int)*puVar1;
  if (temp_v4 == 0) {
    FUN_00148d68(param_1,param_2,1);
    puVar1 = (unsigned short *)FUN_00152978(param_1,param_2);
    temp_v4 = (unsigned int)*puVar1;
  }
  temp_v0 = dataTableGet(2,1);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  temp_v6 = temp_v1;
  if ((temp_v4 < temp_v2) && (temp_v6 = g_aocSystem, FUN_0046fd8c(g_aocSystem,temp_v4), temp_v6 == 0)) {
    temp_v6 = temp_v1 + temp_v4 * 0x78;
  }
  temp_v7 = 0;
  temp_v1 = 0;
  do {
    psVar9 = (short *)(temp_v6 + temp_v1 * 4);
    if (*psVar9 != 0) {
      if (param_3 != 0) {
        temp_v3 = FUN_004bb80c();
        temp_v5 = 0;
        do {
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v5 * 2 + 0x14);
          if (((temp_v4 != 0) && (FUN_0019cac4(), temp_v4 != 0)) &&
             ((*(char *)(temp_v4 + 0xa2) != '\0' || (*(char *)(temp_v4 + 0xa3) != '\0'))))
          goto LAB_004bc540;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 6);
      }
      temp_v7 = temp_v7 + psVar9[1];
    }
LAB_004bc540:
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x1e) {
      temp_v1 = FUN_0014bef4(temp_v7 - 1);
      temp_v3 = 0;
      while ((psVar9 = (short *)(temp_v6 + temp_v3 * 4), *psVar9 == 0 ||
             (temp_v1 = temp_v1 - (unsigned int)(unsigned short)psVar9[1], -1 < temp_v1))) {
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 0x1e) {
          return 0;
        }
      }
      return *(unsigned short *)(temp_v6 + temp_v3 * 4);
    }
  } while( 1 );
}

} /* extern "C" */
