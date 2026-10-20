/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001372c8` (_code @ 0x1372c8, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013b608(void);
int FUN_0013b618(void);
int FUN_002ba2b8(void);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_7_stack;

extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern signed char DAT_004c62a2; /* 0x4c62a2 */
extern int DAT_004c632c; /* 0x4c632c */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */


void FUN_001372c8(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
                 int param_6,unsigned int param_7)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_004c632c;
  puVar2 = (unsigned char *)(*(int *)(DAT_004c632c + 0x18) + *(int *)(DAT_004c632c + 0x20) * 0x1c);
  *puVar2 = 4;
  *(unsigned int *)(puVar2 + 4) = param_1;
  *(unsigned int *)(puVar2 + 8) = param_4;
  *(unsigned int *)(puVar2 + 0xc) = param_7;
  *(short *)(puVar2 + 0x10) = (short)(param_3 >> 4);
  *(short *)(puVar2 + 0x12) = (short)(param_2 >> 4);
  *(short *)(puVar2 + 0x14) = (short)(param_6 >> 4);
  *(short *)(puVar2 + 0x16) = (short)(param_5 >> 4);
  FUN_0013b608();
  *(int *)(temp_v0 + 0x20) = *(int *)(temp_v0 + 0x20) + 1;
  if (((DAT_004c6330 == temp_v0) && (DAT_004c62a2 != '\0')) && (DAT_004c62a1 == '\0')) {
    DAT_004c62a1 = '\x01';
    FUN_002ba2b8();
  }
  FUN_0013b618();
  return;
}

} /* extern "C" */
