/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d88e0` (_code @ 0x2d88e0, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [136], unsigned char *);
int FUN_0014afd0(int, int);
int FUN_00178b04(int, unsigned char *, int);
int controllerSetDestination(unsigned int, int);
int controllerSetPosition(unsigned int);
int FUN_003fdb18(unsigned int);
int FUN_003fe86c(unsigned int, int, int);
int FUN_0040aa6c(void);
int FUN_0040aad4(unsigned int, int);
int FUN_0040ace8(unsigned int, unsigned int);

extern unsigned char LAB_002d89f4; /* 0x2d89f4 */
extern unsigned char LAB_002d8a10; /* 0x2d8a10 */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapIf; /* 0x58103c */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: controllerSetPosition. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


void FUN_002d88e0(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned char temp_v3 [136];
  
  temp_v0 = g_mapIf;
  *(unsigned char *)(g_mapIf + 0xcbdc) = 1;
  *(unsigned int *)(temp_v0 + 0xcbe0) = 0;
  *(unsigned int *)(temp_v0 + 0xcbe4) = 0;
  *(unsigned int *)(temp_v0 + 0xcbe8) = in_s0;
  *(unsigned int *)(temp_v0 + 0xcbec) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcbf0) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcbf4) = in_s3;
  textFormatBuffer(temp_v3,&LAB_002d89f4);
  temp_v1 = 0x20;
  FUN_00178b04(0x20,&LAB_002d8a10,0x1745);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0040ac08();
  }
  *(unsigned int *)(temp_v0 + 0xcbf8) = temp_v2;
  FUN_0040aa6c();
  FUN_0040aad4(*(unsigned int *)(temp_v0 + 0xcbf8),0);
  temp_v2 = *(unsigned int *)(*(int *)(temp_v0 + 0xcbf8) + 4);
  FUN_0040ace8(g_handleRegistry,temp_v2);
  controllerSetDestination(temp_v2,temp_v0 + 0xcbe8);
  FUN_003fdb18(temp_v2);
  controllerSetPosition(temp_v2);
  FUN_003fe86c(temp_v2,0,2);
  FUN_0014afd0(4,0x25);
  *(unsigned char *)(temp_v0 + 0xcd08) = 1;
  *(unsigned int *)(temp_v0 + 0xcd0c) = 0;
  return;
}

} /* extern "C" */
