/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adba8` (_code @ 0x2adba8, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013b608(void);
int FUN_0013b618(void);
int FUN_002ba2b8(void);
int FUN_002bdb48(void);
int rt_memcpy_w(int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_004652a0; /* 0x4652a0 */
extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern signed char DAT_004c62a2; /* 0x4c62a2 */
extern int DAT_004c632c; /* 0x4c632c */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */
/* Supplied declaration required: FUN_002bdb48. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002adba8(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  
  temp_v1 = DAT_004c632c;
  temp_v0 = DAT_004652a0;
  temp_v2 = DAT_004652a0 - *(int *)(DAT_004c632c + 4);
  *(int *)(DAT_004c632c + 0xc) = temp_v2;
  if (param_3 != 0) {
    rt_memcpy_w(temp_v0,param_1,param_2);
    DAT_004652a0 = DAT_004652a0 + (param_2 & 0xfffffffc);
  }
  else {
    if (*(int *)(temp_v1 + 0x14) != temp_v2) {
      FUN_002bdb48();
    }
    if (*(int *)(temp_v1 + 0x14) == *(int *)(temp_v1 + 0xc)) {
      puVar4 = (unsigned char *)(*(int *)(temp_v1 + 0x18) + *(int *)(temp_v1 + 0x20) * 0x1c);
      *puVar4 = 1;
      *(unsigned int *)(puVar4 + 8) = param_2;
      *(unsigned int *)(puVar4 + 4) = param_1;
      *(unsigned int *)(puVar4 + 0xc) = *(unsigned int *)(puVar4 + 0xc) | 2;
      FUN_0013b608();
      *(int *)(temp_v1 + 0x20) = *(int *)(temp_v1 + 0x20) + 1;
      if (((DAT_004c6330 == temp_v1) && (DAT_004c62a2 != '\0')) && (DAT_004c62a1 == '\0')) {
        DAT_004c62a1 = '\x01';
        FUN_002ba2b8();
      }
      FUN_0013b618();
      return;
    }
  }
  return;
}

} /* extern "C" */
