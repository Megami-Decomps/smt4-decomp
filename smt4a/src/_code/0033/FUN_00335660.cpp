/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335660` (_code @ 0x335660, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableFileGetTable(...);
int FUN_002bf384(...);
int libc_strcmp(int, unsigned char *);
int FUN_00318100(void);
int tbcrBlockGetPayload(void);

extern unsigned int dataTableValueOrZero(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableFileGetTable. */
/* Supplied declaration required: FUN_002bf384. */
/* Supplied declaration required: libc_strcmp. */
/* Supplied declaration required: FUN_00318100. */
/* Supplied declaration required: tbcrBlockGetPayload. */


int FUN_00335660(int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *pbVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  pbVar4 = (unsigned char *)0x57aaa0;
  temp_v4 = 0;
  do {
    temp_v0 = param_2;
    libc_strcmp(param_2,pbVar4 + 2);
    if (temp_v0 == 0) {
      if (pbVar4 != (unsigned char *)0x0) {
        temp_v5 = (unsigned int)*pbVar4;
        temp_v3 = (unsigned int)pbVar4[1];
        temp_v1 = dataTableValueOrZero(7);
        temp_v2 = FUN_00318100();
        if (temp_v2 <= temp_v5) {
          temp_v5 = 0;
        }
        FUN_002bf384(temp_v1,temp_v5);
        temp_v2 = tbcrBlockGetPayload();
        if (temp_v2 <= temp_v3) {
          temp_v3 = 0;
        }
        dataTableFileGetTable(temp_v1,temp_v3);
        temp_v4 = dataTableGetEntries();
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
  } while (temp_v4 < 0x20f);
  temp_v1 = dataTableValueOrZero(7);
  FUN_00318100();
  FUN_002bf384(temp_v1,0);
  tbcrBlockGetPayload();
  dataTableFileGetTable(temp_v1,0);
  temp_v4 = dataTableGetEntries();
  temp_v2 = (unsigned int)(param_1 != 0);
  if (param_3 != 0) {
    temp_v2 = 1 - temp_v2;
  }
  return temp_v4 + temp_v2 * 0x19c;
}

} /* extern "C" */
