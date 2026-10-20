/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5714` (_code @ 0x3b5714, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(...);
int dataTableGetCount(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: dataTableGet. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);


unsigned int FUN_003b5714(int param_1,int param_2,char *param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  char *pcVar6;
  unsigned int temp_v4;
  
  dataTableGet(0x23,1,param_3,param_4,param_4);
  temp_v0 = dataTableGetCount();
  temp_v4 = 0;
  temp_v0 = *(int *)(g_aocSystem + 0x3ec) + temp_v0;
  if (0 < temp_v0) {
    do {
      temp_v1 = dataTableGet(0x23,1);
      temp_v2 = dataTableGetEntries();
      temp_v3 = dataTableGetCount(temp_v1);
      if (temp_v4 < temp_v3) {
        pcVar6 = (char *)(temp_v2 + temp_v4 * 0xc);
      }
      else {
        pcVar6 = (char *)0x0;
        if (temp_v4 < temp_v3 + *(int *)(g_aocSystem + 0x3ec)) {
          pcVar6 = (char *)(*(int *)(g_aocSystem + 0x3f0) + (temp_v4 - temp_v3) * 0xc);
        }
      }
      if (*pcVar6 == -1) {
        return 0xffffffff;
      }
      if (*pcVar6 == param_1) {
        pcVar1 = pcVar6 + 1;
        if (*pcVar1 == param_2) {
          pcVar6 = (char *)(unsigned int)(unsigned char)pcVar6[2];
        }
        if (*pcVar1 == param_2 && pcVar6 == param_3) {
          return temp_v4;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < temp_v0);
  }
  return 0xffffffff;
}

} /* extern "C" */
