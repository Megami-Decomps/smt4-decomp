/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dabac` (_code @ 0x2dabb0, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00257a50(int, int, int);
int FUN_0029c4ac(int);
int FUN_0029c4c8(int);
int FUN_0029c4e4(int, int);
int FUN_0029d684(int);
int FUN_0029dd7c(int);
int FUN_0029defc(int, int);
int FUN_0029e620(int, int);
int FUN_0029e648(int, int);
int FUN_0029e890(int);
int FUN_0029ee6c(int, int);
int FUN_002b8454(int, int, int, int);
int buttonHelpSetPreset(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int g_unite; /* 0x43dd68 */

/* Supplied declaration required: FUN_00257a50. */
/* Supplied declaration required: FUN_0029c4ac. */
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029c4e4. */
/* Supplied declaration required: FUN_0029d684. */
/* Supplied declaration required: FUN_0029dd7c. */
/* Supplied declaration required: FUN_0029defc. */
/* Supplied declaration required: FUN_0029e620. */
/* Supplied declaration required: FUN_0029e648. */
/* Supplied declaration required: FUN_0029e890. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002b8454. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern unsigned int FUN_002d96a4(void);


/* WARNING: Removing unreachable block (ram,0x0029fc30) */

void FUN_002dabac(int param_1,int *param_2)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = *param_2;
  *(unsigned char *)(temp_v2 + 0x9431) = 1;
  FUN_00257a50(temp_v2 + 0x6674,param_1,0);
  temp_v1 = temp_v2 + param_1 * 8;
  *(unsigned int *)(temp_v2 + 0x9010) = *(unsigned int *)(temp_v2 + 0x66a8);
  puVar3 = (unsigned int *)(temp_v1 + 0x9438);
  *(unsigned int *)(temp_v2 + 0x9014) = *(unsigned int *)(temp_v2 + 0x66ac);
  *(unsigned int *)(temp_v2 + 0x9018) = *(unsigned int *)(temp_v2 + 0x66b0);
  *(unsigned int *)(temp_v2 + 0x901c) = *(unsigned int *)(temp_v2 + 0x66b4);
  temp_v0 = *(unsigned int *)(temp_v1 + 0x943c) & 0x1fffc;
  temp_v3 = (*(unsigned int *)(temp_v2 + 0x1394) & 0xfffe0003) | temp_v0;
  *(unsigned int *)(temp_v2 + 0x1394) = temp_v3;
  temp_v4 = *puVar3 & 0x7fff;
  *(unsigned int *)(temp_v2 + 0x1394) = temp_v3;
  *(unsigned int *)(temp_v2 + 0x1390) = temp_v4 | (*(unsigned int *)(temp_v2 + 0x1390) & 0xffff8000);
  *(unsigned int *)(temp_v2 + 0x1390) = temp_v4 | (*puVar3 & 0x3fff8000) | 0x40000000;
  *(unsigned int *)(temp_v2 + 0x1394) = temp_v0 | 1;
  FUN_0029c4c8(1);
  FUN_0029defc((int)*(short *)(temp_v2 + 0x66ba),0);
  FUN_0029c4e4(temp_v2 + 0x6674,0);
  FUN_0029c4ac(0);
  FUN_0029dd7c(8);
  FUN_0029e890(0);
  temp_v0 = FUN_002d96a4();
  FUN_0029d684(temp_v0 != *(unsigned short *)(temp_v2 + 0x66ba));
  if (0 < *(int *)(temp_v2 + 0x418)) {
    FUN_0029e648(1,0);
    FUN_0029e620(-*(int *)(temp_v2 + 0x418),0);
  }
  FUN_0029ee6c(0,0x323232ff);
  FUN_0029dd7c(7);
  temp_v1 = g_unite;
  buttonHelpSetPreset(0x5d);
  if (*(char *)(temp_v1 + 0x9431) != '\0') {
    FUN_002b8454(2,9,0x44,1);
    FUN_002b8454(3,0,0,1);
  }
  *(unsigned int *)(temp_v1 + 0x404) = *(unsigned int *)(temp_v1 + 0x400);
  *(unsigned int *)(temp_v1 + 0x3fc) = 0;
  *(unsigned int *)(temp_v1 + 0x400) = 0x13;
  return;
}

} /* extern "C" */
