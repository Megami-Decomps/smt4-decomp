/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e7080` (_code @ 0x4e7080, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */


unsigned int FUN_004e7080(int *param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  
  temp_v3 = 0x6d;
  temp_v0 = 0;
  do {
    temp_v3 = temp_v3 - 1;
    temp_v1 = temp_v0 * 0x1d0 + 0x50;
    temp_v2 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v1);
    *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v1) = temp_v2 & 0xfffffffb;
    *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v1) = temp_v2 & 0xfffffff3;
    temp_v0 = temp_v0 + 1;
  } while (temp_v3 != 0);
  temp_v0 = 0;
  while( 1 ) {
    puVar4 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v0 * 0x408);
    if ((((puVar4[1] & DAT_0057114c) != 0 || (*puVar4 & DAT_00571148) != 0) &&
        ((*puVar4 & DAT_00571178) == 0 && (puVar4[1] & DAT_0057117c) == 0)) &&
       (*(short *)((int)puVar4 + 0x6e) == param_3)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x6d) {
      return 0;
    }
  }
  *(unsigned char *)(param_2 + param_3 + 0x38) = 1;
  return 1;
}
