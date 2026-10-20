/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001add78` (_code @ 0x1add78, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_sprintf(...);
int libc_strcpy(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: libc_sprintf. */
extern unsigned int wstrlen(int);
/* Supplied declaration required: libc_strcpy. */


void FUN_001add78(int param_1,int param_2)

{
/* irregular: 1 unstructured edge(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = wstrlen(param_2);
  if ((int)temp_v0 >= 9) {
    temp_v0 = 8;
  }
  if ((int)temp_v0 < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v0 & 1;
    temp_v2 = 0;
    if (temp_v1 != 0) {
      do {
        if (*(char *)(param_2 + temp_v2) == ':') {
          libc_strcpy(param_1 + 0x2c,param_2);
          return;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)temp_v1);
    }
  }
  while( 1 ) {
    if ((int)temp_v0 <= (int)temp_v1) {
      libc_sprintf(param_1 + 0x2c,"rom:/%s",param_2);
      return;
    }
    if ((*(char *)(param_2 + temp_v1) == ':') || (*(char *)(param_2 + temp_v1 + 1) == ':')) break;
    temp_v1 = temp_v1 + 2;
  }
  libc_strcpy(param_1 + 0x2c,param_2);
  return;
}

} /* extern "C" */
