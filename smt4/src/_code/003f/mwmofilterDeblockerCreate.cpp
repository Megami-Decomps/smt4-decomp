/* NON_MATCHING: romwright 0.5.0 decompilation of `mwmofilterDeblockerCreate` (_code @ 0x3f5f5c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *g_mwmofilterDeblocker; /* 0x44e948 */
extern unsigned int *DAT_0044e94c; /* 0x44e94c */


unsigned int mwmofilterDeblockerCreate(unsigned int *param_1)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)&g_mwmofilterDeblocker;
  if (g_mwmofilterDeblocker != (romwright_code *)0x0) {
    puVar2 = DAT_0044e94c;
  }
  if (!(g_mwmofilterDeblocker != (romwright_code *)0x0 && puVar2 != (unsigned int *)0x0)) {
    temp_v0 = 0;
  }
  else {
    puVar2 = (unsigned int *)(*g_mwmofilterDeblocker)(8);
    temp_v0 = 0;
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      *param_1 = (unsigned int)puVar2;
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
