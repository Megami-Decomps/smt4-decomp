/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b77bc` (_code @ 0x2b77bc, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [44], unsigned char *, char *);
int asdMemoryAllocTracked(int, int, int, int);
int FUN_001642e4(unsigned char *, unsigned int [2], int, int);
int gameFlagIsSet(...);
int FUN_001abbc4(void);
int FUN_001b4eb8(void);
int aocDataTable2dGetEntryKind3(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_002b79c0; /* 0x2b79c0 */
extern unsigned int *g_mapEpl; /* 0x580c88 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: FUN_001abbc4. */
/* Supplied declaration required: FUN_001b4eb8. */
/* Supplied declaration required: aocDataTable2dGetEntryKind3. */
extern int FUN_0038589c(void);


void FUN_002b77bc(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  char *pcVar4;
  unsigned char *puVar5;
  int temp_v2;
  char *pcVar7;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  unsigned int temp_v8 [2];
  unsigned char temp_v9 [44];
  
  temp_v7 = 0;
  if (g_mapEpl == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x100;
    temp_v8[0] = 1;
    asdMemoryAllocTracked(0x100,0x100,0,0x188);
    g_mapEpl = puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    temp_v1 = 0;
    do {
      temp_v2 = temp_v1 + 1;
      puVar2[temp_v1 * 6 + 6] = 0;
      puVar2[temp_v1 * 6 + 7] = 0;
      temp_v4 = (unsigned int)temp_v7;
      puVar2[temp_v1 * 6 + 2] = temp_v4;
      puVar2[temp_v1 * 6 + 3] = temp_v4;
      puVar2[temp_v1 * 6 + 4] = temp_v4;
      puVar2[temp_v1 * 6 + 5] = temp_v4;
      temp_v1 = temp_v2;
    } while (temp_v2 < 0x10);
  }
  pcVar7 = (char *)0x0;
  temp_v1 = FUN_0038589c();
  if (0 < temp_v1) {
    do {
      pcVar4 = pcVar7;
      aocDataTable2dGetEntryKind3();
      if (((*pcVar4 != -1) &&
          ((temp_v0 = *(short *)(pcVar4 + 0x1a), *(short *)(pcVar4 + 0x18) == 0 ||
           (temp_v1 = gameFlagIsSet(), temp_v1 != 0)))) &&
         ((temp_v0 == 0 || (temp_v1 = gameFlagIsSet((int)temp_v0), temp_v1 == 0)))) {
        temp_v1 = (int)*pcVar4;
        temp_v3 = temp_v1 == param_1;
        if (temp_v3) {
          temp_v1 = (int)pcVar4[1];
        }
        if (temp_v3 && temp_v1 == param_2) {
          textFormatBuffer(temp_v9,&LAB_002b79c0,pcVar4 + 8);
          puVar2 = g_mapEpl;
          puVar5 = temp_v9;
          temp_v1 = 0;
          do {
            if (g_mapEpl[temp_v1 * 6 + 7] == 0) {
              FUN_001642e4(puVar5,temp_v8,1,0x80);
              puVar2[temp_v1 * 6 + 6] = (unsigned int)puVar5;
              FUN_001abbc4();
              puVar2[temp_v1 * 6 + 7] = (unsigned int)puVar5;
              temp_v2 = temp_v1;
              break;
            }
            temp_v1 = temp_v1 + 1;
            temp_v2 = -1;
          } while (temp_v1 < 0x10);
          puVar2 = g_mapEpl;
          temp_v6 = VectorSignedToFloat((int)*(short *)(pcVar4 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = VectorSignedToFloat((int)*(short *)(pcVar4 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          if (g_mapEpl[temp_v2 * 6 + 7] != 0) {
            g_mapEpl[temp_v2 * 6 + 2] = temp_v6;
            puVar2[temp_v2 * 6 + 5] = (int)temp_v7;
            puVar2[temp_v2 * 6 + 3] = temp_v4;
            puVar2[temp_v2 * 6 + 4] = temp_v5;
            FUN_001b4eb8();
          }
        }
      }
      pcVar7 = pcVar7 + 1;
      temp_v1 = FUN_0038589c();
    } while ((int)pcVar7 < temp_v1);
  }
  return;
}

} /* extern "C" */
