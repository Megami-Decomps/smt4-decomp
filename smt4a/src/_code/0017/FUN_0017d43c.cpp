/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017d43c` (_code @ 0x17d43c, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b600(void);
int FUN_0018b610(void);
int FUN_001963e0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */
extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern int DAT_0061a50c; /* 0x61a50c */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */
/* Supplied declaration required: FUN_001963e0. */


void FUN_0017d43c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0061a50c;
  puVar1 = DAT_005b40e0;
  temp_v2 = (int)DAT_005b40e0 - *(int *)(DAT_0061a50c + 4);
  *(unsigned int *)(DAT_0061a50c + 0xc) = temp_v2;
  if (*(unsigned int *)(temp_v0 + 0x14) == temp_v2) {
    return;
  }
  if ((temp_v2 & 8) != 0) {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2 + 0x18;
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2 + 0x20;
    if ((unsigned int)puVar1 < DAT_005b40e4) {
      DAT_005b40e0 = puVar1 + 2;
      *puVar1 = 0;
      puVar1[1] = 0x8025e;
    }
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = 1;
    DAT_005b40e0[1] = 0xf0111;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = 1;
    DAT_005b40e0[1] = 0xf0110;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = 0x12345678;
    DAT_005b40e0[1] = 0xf0010;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  puVar3 = (unsigned char *)(*(int *)(temp_v0 + 0x18) + *(int *)(temp_v0 + 0x20) * 0x1c);
  *puVar3 = 1;
  temp_v3 = *(int *)(temp_v0 + 0x14) + *(int *)(temp_v0 + 4);
  *(int *)(puVar3 + 4) = temp_v3;
  temp_v4 = *(int *)(temp_v0 + 0xc) - *(int *)(temp_v0 + 0x14);
  *(int *)(puVar3 + 8) = temp_v4;
  temp_v1 = *(int *)(temp_v0 + 0x34);
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v1 + 8) = (((temp_v3 + temp_v4) - temp_v1) - 0x18U) >> 3;
    *(unsigned int *)(puVar3 + 8) = *(unsigned int *)(temp_v0 + 0x30);
    *(unsigned int *)(temp_v0 + 0x34) = 0;
    *(unsigned int *)(temp_v0 + 0x30) = 0;
  }
  temp_v2 = *(unsigned int *)(puVar3 + 0xc);
  *(unsigned int *)(puVar3 + 0xc) = (temp_v2 & 0xfffffffd) | 4;
  if (*(char *)(temp_v0 + 0x3d) != '\0') {
    *(unsigned int *)(puVar3 + 0xc) = (temp_v2 & 0xfffffffd) | 5;
  }
  *(unsigned int *)(temp_v0 + 0x14) = *(unsigned int *)(temp_v0 + 0xc);
  FUN_0018b600();
  *(int *)(temp_v0 + 0x20) = *(int *)(temp_v0 + 0x20) + 1;
  if (((DAT_0061a510 == temp_v0) && (DAT_0061a482 != '\0')) && (DAT_0061a481 == '\0')) {
    DAT_0061a481 = '\x01';
    FUN_001963e0();
  }
  FUN_0018b610();
  return;
}

} /* extern "C" */
