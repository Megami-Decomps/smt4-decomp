/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a666c` (_code @ 0x2a666c, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern signed char DAT_004c62a2; /* 0x4c62a2 */
extern int DAT_004c632c; /* 0x4c632c */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */


void FUN_002a666c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_004c632c;
  puVar2 = (unsigned char *)(*(int *)(DAT_004c632c + 0x18) + *(int *)(DAT_004c632c + 0x20) * 0x1c);
  *puVar2 = 0;
  *(unsigned int *)(puVar2 + 4) = param_1;
  *(unsigned int *)(puVar2 + 8) = param_2;
  *(unsigned int *)(puVar2 + 0xc) = param_3;
  FUN_0013b608();
  *(int *)(temp_v0 + 0x20) = *(int *)(temp_v0 + 0x20) + 1;
  if (((DAT_004c6330 == temp_v0) && (DAT_004c62a2 != '\0')) && (DAT_004c62a1 == '\0')) {
    DAT_004c62a1 = '\x01';
    FUN_002ba2b8();
  }
  FUN_0013b618();
  return;
}
