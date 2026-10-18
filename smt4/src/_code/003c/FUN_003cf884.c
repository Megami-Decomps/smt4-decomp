/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf884` (_code @ 0x3cf884, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;


unsigned int FUN_003cf884(int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = 0;
  temp_v3 = 0x6d;
  do {
    temp_v3 = temp_v3 - 1;
    temp_v1 = temp_v0 * 0x114 + 0x50;
    temp_v0 = temp_v0 + 1;
    temp_v2 = *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v1);
    *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v1) = temp_v2 & 0xfffffffb;
    *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v1) = temp_v2 & 0xfffffff3;
  } while (temp_v3 != 0);
  temp_v0 = 0;
  while( 1 ) {
    puVar1 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v0 * 0x288);
    temp_v2 = *puVar1;
    if ((((temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) && (*(short *)((int)puVar1 + 0x6e) == param_3)
       ) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x6d) {
      return 0;
    }
  }
  *(unsigned char *)(param_2 + param_3 + 0x38) = 1;
  return 1;
}
