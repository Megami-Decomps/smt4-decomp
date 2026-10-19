/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017dd84` (_code @ 0x17dd84, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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

/* Supplied declaration required: FUN_0017e5a4. */
/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */
/* Supplied declaration required: FUN_001963e0. */


void FUN_0017dd84(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned char *puVar4;
  unsigned char temp_v2;
  
  temp_v0 = DAT_0061a50c;
  temp_v1 = (int)DAT_005b40e0 - *(int *)(DAT_0061a50c + 4);
  temp_v2 = (temp_v1 & 8) != 0;
  puVar2 = DAT_005b40e0;
  if (temp_v2) {
    puVar2 = (unsigned int *)(temp_v1 + 0x18);
  }
  *(unsigned int *)(DAT_0061a50c + 0xc) = temp_v1;
  if (temp_v2) {
    *(unsigned int **)(temp_v0 + 0xc) = puVar2;
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = temp_v1 + 0x20;
    if ((unsigned int)puVar2 < DAT_005b40e4) {
      DAT_005b40e0 = puVar2 + 2;
      puVar2[1] = 0x8025e;
      *puVar2 = 0;
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
  puVar4 = (unsigned char *)(*(int *)(temp_v0 + 0x18) + *(int *)(temp_v0 + 0x20) * 0x1c);
  *puVar4 = 1;
  *(int *)(puVar4 + 4) = *(int *)(temp_v0 + 4) + *(int *)(temp_v0 + 0x14);
  *(int *)(puVar4 + 8) = *(int *)(temp_v0 + 0xc) - *(int *)(temp_v0 + 0x14);
  if (*(int *)(temp_v0 + 0x34) != 0) {
    FUN_0017e5a4(temp_v0,puVar4);
  }
  temp_v1 = *(unsigned int *)(puVar4 + 0xc);
  *(unsigned int *)(puVar4 + 0xc) = temp_v1 & 0xfffffffd;
  if (*(char *)(temp_v0 + 0x3d) != '\0') {
    *(unsigned int *)(puVar4 + 0xc) = (temp_v1 & 0xfffffffd) | 1;
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
