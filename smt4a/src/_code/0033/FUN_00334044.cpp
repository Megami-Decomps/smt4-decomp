/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334044` (_code @ 0x334044, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x588fd0 */


unsigned int FUN_00334044(void)

{
/* irregular: 1 unstructured edge(s) */
  char temp_v0;
  char temp_v1;
  
  temp_v0 = *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x2018);
  if (((temp_v0 == '\x03' || temp_v0 == '\x05') || (temp_v0 == '\x06' || temp_v0 == '\a')) ||
     ((temp_v0 == '\t' || temp_v0 == '\n') || temp_v0 == '\f')) {
    return 1;
  }
  if (temp_v0 == '\r') {
    return 2;
  }
  temp_v0 = *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x2017);
  if (temp_v0 == '\0') {
    temp_v1 = *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1381);
    if (temp_v1 == '\0') {
      return 3;
    }
    return 2;
  }
  if (temp_v0 == '\x04') {
    return 2;
  }
  if (temp_v0 != '\a') {
    if (temp_v0 == '\t' || temp_v0 == '\n') {
      return 2;
    }
    if ((temp_v0 == '\v' || temp_v0 == '\f') || temp_v0 == '\b') {
      return 2;
    }
    if (temp_v0 == '\x0f') {
      return 1;
    }
    temp_v1 = *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1381);
    if (temp_v0 == '\x0e') {
      if (temp_v1 == '\0') {
        return 3;
      }
      return 2;
    }
    if (temp_v1 != '\0') {
      return 2;
    }
    temp_v0 = *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x2010);
  }
  else {
    temp_v0 = *(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x2010);
  }
  if (temp_v0 != '\0') {
    return 3;
  }
  return 2;
}

} /* extern "C" */
