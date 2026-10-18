/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d298` (_code @ 0x15d298, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_004e6f14; /* 0x4e6f14 */
extern unsigned char DAT_004e8568; /* 0x4e8568 */

/* Supplied declaration required: FUN_0015e010. */
/* Supplied declaration required: FUN_0015e03c. */
/* Supplied declaration required: FUN_0015ed90. */
extern int FUN_002bb5b4(void);
/* Supplied declaration required: FUN_002bcf58. */


void FUN_0015d298(int param_1)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = FUN_002bb5b4();
  if ((temp_v1 != 0) && (*(char *)(param_1 + 0x1318) != '\0')) {
    temp_v2 = 1;
    temp_v0 = **(short **)(param_1 + (~(unsigned int)*(unsigned short *)(param_1 + 0x131a) & 1) * 4 + 0x1098);
    if (temp_v0 != 0) {
      temp_v4 = 0;
      if (temp_v0 == -1) {
        temp_v2 = 2;
      }
      *(short *)(param_1 + 0x131a) = temp_v0 + 1;
      if (temp_v0 == -1) {
        *(unsigned short *)(param_1 + 0x131a) = temp_v2;
      }
      *(unsigned short *)(param_1 + 0x131c) = *(unsigned short *)(param_1 + 0x131a) & 1;
      do {
        FUN_0015ed90(&DAT_004e8568,temp_v4,
                     *(unsigned int *)
                      (param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 0x60 + (temp_v4 & 0xff) * 4 +
                      0x1170));
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < 0x18);
      FUN_002bcf58(param_1 + 0x1324,
                   *(unsigned int *)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 4 + 0x1310),0x260
                  );
      temp_v1 = *(int *)(param_1 + 0x14);
      temp_v4 = temp_v3;
      if (temp_v1 != 0) {
        temp_v4 = (unsigned int)*(unsigned char *)(temp_v1 + 0x10);
      }
      if (temp_v1 != 0 && temp_v4 != 0) {
        FUN_0015e03c(temp_v1,*(unsigned int *)
                            (param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 4 + 0x1300),0xa0);
      }
      FUN_0015e010(&DAT_004e6f14);
      return;
    }
  }
  return;
}
