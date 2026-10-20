/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003210bc` (_code @ 0x3210bc, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(char [68], int, int, unsigned char *);
int FUN_00157558(unsigned int);
int FUN_001634b4(int);
int FUN_001879d0(unsigned int);
int VectorSignedToFloat(int, int);

extern unsigned char LAB_002219e4; /* 0x2219e4 */
extern float DAT_00573c00; /* 0x573c00 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_003210bc(int param_1,int param_2)

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
  int *piVar11;
  char *pcVar12;
  unsigned int in_fpscr;
  float temp_v6;
  char acStack_68 [68];
  
  pcVar3 = acStack_68;
  FUN_00157558(g_renderCtx);
  temp_v5 = 0;
  if (param_2 != 0) {
    temp_v6 = DAT_00573c00;
    FUN_001879d0(g_renderCtx);
    temp_v5 = (int)temp_v6;
  }
  temp_v1 = '\0';
  temp_v2 = 0x10;
  puVar4 = (unsigned int *)(param_1 + 0x7998);
  pcVar12 = (char *)(param_1 + 0x7994);
  pcVar5 = acStack_68 + 2;
  pcVar6 = acStack_68 + 1;
  do {
    *pcVar3 = temp_v1;
    temp_v3 = *puVar4;
    pcVar3 = pcVar3 + 4;
    puVar4 = puVar4 + 0x100;
    *pcVar5 = (char)temp_v3;
    temp_v0 = *pcVar12;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 0x400;
    temp_v2 = temp_v2 - 1;
    temp_v1 = temp_v1 + '\x01';
    *pcVar6 = temp_v0 != '\0';
    pcVar6 = pcVar6 + 4;
  } while (temp_v2 != 0);
  qsort(acStack_68,0x10,4,&LAB_002219e4);
  temp_v2 = 0;
  do {
    temp_v1 = acStack_68[temp_v2 * 4];
    temp_v4 = param_1 + temp_v1 * 0x400;
    if ((*(char *)(temp_v4 + 0x7994) != '\0') && (*(char *)(temp_v4 + 0x7995) == param_2)) {
      piVar11 = (int *)(temp_v4 + 0x79ac);
      if (*piVar11 >= 10000) {
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x77e4);
      }
      if (*piVar11 >= 1000) {
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x7758);
      }
      if (*piVar11 >= 100) {
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x76cc);
      }
      if (*piVar11 >= 10) {
        VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(temp_v4 + 0x7640);
      }
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001634b4(temp_v4 + 0x75b4);
    }
    temp_v4 = param_1 + temp_v1 * 0xa0;
    if ((*(char *)(temp_v4 + 0xb64c) != '\0') && (*(char *)(temp_v4 + 0xb64d) == param_2)) {
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001634b4(temp_v4 + 0xb5b4);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x10);
  return;
}

} /* extern "C" */
