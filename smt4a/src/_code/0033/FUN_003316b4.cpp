/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003316b4` (_code @ 0x3316b4, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern char *dataTableGetEntries(void);


char * FUN_003316b4(int param_1)

{
  unsigned int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = dataTableGet(0x25,0);
  pcVar2 = (char *)dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v0);
  temp_v2 = 0;
  if (temp_v2 < temp_v1) {
    do {
      if (*pcVar2 == param_1) {
        return pcVar2;
      }
      temp_v2 = temp_v2 + 1;
      pcVar2 = pcVar2 + 0x20;
    } while (temp_v2 < temp_v1);
  }
  return (char *)0x0;
}

} /* extern "C" */
