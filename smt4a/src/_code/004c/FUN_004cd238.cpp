/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cd238` (_code @ 0x4cd238, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023e51c(int, unsigned int *, int, unsigned int);
int asdOperatorNewD(void);
int asdOperatorDeleteC(int);
int rt_memclr(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0023e51c. */
/* Supplied declaration required: asdOperatorNewD. */
/* Supplied declaration required: asdOperatorDeleteC. */
/* Supplied declaration required: rt_memclr. */


short FUN_004cd238(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  char *pcVar7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short *puVar9;
  int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int temp_v12;
  
  temp_v1 = 0;
  temp_v12 = param_4;
  temp_v2 = dataTableGet(9,4);
  temp_v3 = dataTableGetEntries();
  temp_v4 = dataTableGetCount(temp_v2);
  temp_v8 = 0;
  if (temp_v4 != 0) {
    pcVar7 = (char *)(temp_v3 + 4);
    do {
      temp_v0 = *pcVar7;
      pcVar7 = pcVar7 + 8;
      if (temp_v0 == '\x01') {
        temp_v8 = temp_v8 + 1;
      }
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
  }
  temp_v12 = 0;
  temp_v3 = (temp_v8 + 1) * 8;
  asdOperatorNewD();
  rt_memclr();
  FUN_0023e51c(temp_v3,&temp_v12,1,param_1 + param_2);
  temp_v7 = temp_v6;
  if (0 < param_2) {
    temp_v7 = temp_v12;
  }
  temp_v4 = 0;
  if (temp_v4 < param_2) {
    do {
      param_1 = (param_1 + 1) & 0xffff;
      temp_v5 = 0;
      if (temp_v5 < temp_v7) {
        do {
          puVar9 = (unsigned short *)(temp_v3 + temp_v5 * 8);
          temp_v9 = (unsigned int)*puVar9;
          temp_v11 = param_1 <= temp_v9;
          temp_v10 = temp_v9 == param_1;
          if (!temp_v11 || temp_v10) {
            temp_v9 = (unsigned int)puVar9[1];
            temp_v11 = temp_v9 <= param_1;
            temp_v10 = param_1 == temp_v9;
          }
          if (!temp_v11 || temp_v10) {
            temp_v1 = (unsigned short)*(unsigned char *)(temp_v3 + temp_v5 * 8 + 7) + temp_v1;
            break;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < temp_v7);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < param_2);
  }
  asdOperatorDeleteC(temp_v3);
  return temp_v1;
}

} /* extern "C" */
