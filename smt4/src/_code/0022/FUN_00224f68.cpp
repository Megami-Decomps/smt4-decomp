/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224f68` (_code @ 0x224f68, 0x1f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7bca(char [68], int, int, unsigned char *);
int FUN_002b93c8(int);
int FUN_002ba12c(unsigned int);
int FUN_002c39a4(unsigned int);
int VectorSignedToFloat(int, int);

extern unsigned char LAB_0019d734; /* 0x19d734 */
extern float DAT_00435e20; /* 0x435e20 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002b93c8. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002c39a4. */


void FUN_00224f68(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  char *pcVar3;
  unsigned int *puVar4;
  char *pcVar5;
  char *pcVar6;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  char *pcVar11;
  unsigned int in_fpscr;
  float temp_v6;
  char acStack_68 [68];
  
  pcVar3 = acStack_68;
  FUN_002c39a4(DAT_0044ea00);
  temp_v5 = 0;
  if (param_2 != 0) {
    temp_v6 = DAT_00435e20;
    FUN_002ba12c(DAT_0044ea00);
    temp_v5 = (int)temp_v6;
  }
  temp_v1 = '\0';
  temp_v2 = 0x10;
  puVar4 = (unsigned int *)(param_1 + 0x8330);
  pcVar11 = (char *)(param_1 + 0x832c);
  pcVar5 = acStack_68 + 2;
  pcVar6 = acStack_68 + 1;
  do {
    *pcVar3 = temp_v1;
    temp_v3 = *puVar4;
    pcVar3 = pcVar3 + 4;
    puVar4 = puVar4 + 0x100;
    *pcVar5 = (char)temp_v3;
    temp_v0 = *pcVar11;
    pcVar5 = pcVar5 + 4;
    pcVar11 = pcVar11 + 0x400;
    temp_v2 = temp_v2 - 1;
    temp_v1 = temp_v1 + '\x01';
    *pcVar6 = temp_v0 != '\0';
    pcVar6 = pcVar6 + 4;
  } while (temp_v2 != 0);
  FUN_002b7bca(acStack_68,0x10,4,&LAB_0019d734);
  temp_v2 = 0;
  do {
    temp_v1 = acStack_68[temp_v2 * 4];
    temp_v4 = param_1 + temp_v1 * 0x400;
    if ((*(char *)(temp_v4 + 0x832c) != '\0') && (*(char *)(temp_v4 + 0x832d) == param_2)) {
      if (*(int *)(temp_v4 + 0x8344) >= 10000) {
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b93c8(temp_v4 + 0x817c);
      }
      if (*(int *)(temp_v4 + 0x8344) >= 1000) {
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b93c8(temp_v4 + 0x80f0);
      }
      if (*(int *)(temp_v4 + 0x8344) >= 100) {
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b93c8(temp_v4 + 0x8064);
      }
      if (*(int *)(temp_v4 + 0x8344) >= 10) {
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b93c8(temp_v4 + 0x7fd8);
      }
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b93c8(temp_v4 + 0x7f4c);
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b93c8(temp_v4 + 0x8208);
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b93c8(temp_v4 + 0x8294);
    }
    temp_v4 = param_1 + temp_v1 * 0xa0;
    if ((*(char *)(temp_v4 + 0xbfe4) != '\0') && (*(char *)(temp_v4 + 0xbfe5) == param_2)) {
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b93c8(temp_v4 + 0xbf4c);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x10);
  return;
}

} /* extern "C" */
