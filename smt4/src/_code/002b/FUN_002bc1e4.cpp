/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc1e4` (_code @ 0x2bc1e4, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013b608(void);
int FUN_0013b618(void);
int FUN_002aa624(int, unsigned char *);
int FUN_002ba2b8(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern signed char DAT_004c62a2; /* 0x4c62a2 */
extern int DAT_004c632c; /* 0x4c632c */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002aa624. */
/* Supplied declaration required: FUN_002ba2b8. */


void FUN_002bc1e4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar4;
  
  temp_v0 = DAT_004c632c;
  puVar1 = DAT_004652a0;
  temp_v1 = (int)DAT_004652a0 - *(int *)(DAT_004c632c + 4);
  *(unsigned int *)(DAT_004c632c + 0xc) = temp_v1;
  if (*(unsigned int *)(temp_v0 + 0x14) == temp_v1) {
    return;
  }
  if ((temp_v1 & 8) != 0) {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v1 + 0x18;
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v1 + 0x20;
    if ((unsigned int)puVar1 < DAT_004652a4) {
      DAT_004652a0 = puVar1 + 2;
      puVar1[1] = 0x8025e;
      *puVar1 = 0;
    }
  }
  if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = 1;
    DAT_004652a0[1] = 0xf0111;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = 1;
    DAT_004652a0[1] = 0xf0110;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = 0x12345678;
    DAT_004652a0[1] = 0xf0010;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  puVar4 = (unsigned char *)(*(int *)(temp_v0 + 0x18) + *(int *)(temp_v0 + 0x20) * 0x1c);
  *puVar4 = 1;
  *(int *)(puVar4 + 4) = *(int *)(temp_v0 + 4) + *(int *)(temp_v0 + 0x14);
  *(int *)(puVar4 + 8) = *(int *)(temp_v0 + 0xc) - *(int *)(temp_v0 + 0x14);
  if (*(int *)(temp_v0 + 0x34) != 0) {
    FUN_002aa624(temp_v0,puVar4);
  }
  temp_v1 = *(unsigned int *)(puVar4 + 0xc);
  *(unsigned int *)(puVar4 + 0xc) = temp_v1 & 0xfffffffd;
  if (*(char *)(temp_v0 + 0x3d) != '\0') {
    *(unsigned int *)(puVar4 + 0xc) = (temp_v1 & 0xfffffffd) | 1;
  }
  *(unsigned int *)(temp_v0 + 0x14) = *(unsigned int *)(temp_v0 + 0xc);
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
