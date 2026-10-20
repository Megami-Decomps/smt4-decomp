/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cfe4c` (_code @ 0x4cfe4c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a4844(char *);
extern int FUN_002a4860(void);
extern int flaggedEntryGetValueB(char *);
extern int flaggedEntryGetValueA(void);


int FUN_004cfe4c(char *param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_002a4860();
  }
  else {
    temp_v0 = FUN_002a4844(param_1 + 0x10);
  }
  if (*param_1 != '\x01') {
    temp_v1 = flaggedEntryGetValueA();
  }
  else {
    temp_v1 = flaggedEntryGetValueB(param_1 + 0x10);
  }
  return temp_v1 + temp_v0;
}

} /* extern "C" */
