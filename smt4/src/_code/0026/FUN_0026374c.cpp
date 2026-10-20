/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026374c` (_code @ 0x26374c, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bee58(int, int);
int FUN_002c4938(int, int);
int rt_memcpy(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0026374c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043e140;
  *(unsigned int *)(DAT_0043e140 + 8) = 1;
  *(unsigned char *)(temp_v0 + 0x10) = 1;
  FUN_002bee58(temp_v0 + 0x34,0);
  FUN_002c4938(temp_v0 + 0xc0,0x80);
  temp_v1 = 0;
  do {
    if (*(char *)(param_1 + temp_v1) == '\0') break;
    if (*(char *)(param_1 + temp_v1 + 1) == '\0') {
      temp_v1 = temp_v1 + 1;
      break;
    }
    temp_v1 = temp_v1 + 2;
  } while (temp_v1 < 0x80);
  rt_memcpy(temp_v0 + 0xc0,param_1,temp_v1);
  return;
}

} /* extern "C" */
