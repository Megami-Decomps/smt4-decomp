/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa4ac` (_code @ 0x1fa4ac, 0x1b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_001fa668; /* 0x1fa668 */
extern unsigned int *DAT_00447a10; /* 0x447a10 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a3ab0. */
/* Supplied declaration required: FUN_002a4e98. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c498c. */
extern unsigned int FUN_002c5c14(unsigned char *, unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c9bf8. */
extern int FUN_002fb3f4(void);


void FUN_001fa4ac(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  char *pcVar3;
  int temp_v1;
  unsigned int *puVar5;
  char *pcVar6;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  unsigned int temp_v6 [2];
  unsigned char temp_v7 [44];
  
  temp_v5 = 0;
  if (DAT_00447a10 == (unsigned int *)0x0) {
    temp_v6[0] = 1;
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x188);
    DAT_00447a10 = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    temp_v0 = 0;
    do {
      temp_v1 = temp_v0 + 1;
      puVar1[temp_v0 * 6 + 6] = 0;
      puVar1[temp_v0 * 6 + 7] = 0;
      temp_v2 = (unsigned int)temp_v5;
      puVar1[temp_v0 * 6 + 2] = temp_v2;
      puVar1[temp_v0 * 6 + 3] = temp_v2;
      puVar1[temp_v0 * 6 + 4] = temp_v2;
      puVar1[temp_v0 * 6 + 5] = temp_v2;
      temp_v0 = temp_v1;
    } while (temp_v1 < 0x10);
  }
  pcVar6 = (char *)0x0;
  temp_v0 = FUN_002fb3f4();
  if (0 < temp_v0) {
    do {
      pcVar3 = pcVar6;
      FUN_002c9bf8();
      if (((*pcVar3 != -1) && (*pcVar3 == param_1)) && (pcVar3[1] == param_2)) {
        FUN_002be624(temp_v7,&LAB_001fa668,pcVar3 + 8);
        puVar1 = DAT_00447a10;
        temp_v0 = 0;
        do {
          if (DAT_00447a10[temp_v0 * 6 + 7] == 0) {
            temp_v2 = FUN_002c5c14(temp_v7,temp_v6,1,0x80);
            puVar1[temp_v0 * 6 + 6] = temp_v2;
            FUN_002a4e98();
            puVar1[temp_v0 * 6 + 7] = temp_v2;
            temp_v1 = temp_v0;
            break;
          }
          temp_v0 = temp_v0 + 1;
          temp_v1 = -1;
        } while (temp_v0 < 0x10);
        puVar1 = DAT_00447a10;
        temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = VectorSignedToFloat((int)*(short *)(pcVar3 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = VectorSignedToFloat((int)*(short *)(pcVar3 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar5 = DAT_00447a10 + temp_v1 * 6 + 2;
        if (DAT_00447a10[temp_v1 * 6 + 7] != 0) {
          DAT_00447a10[temp_v1 * 6 + 5] = (int)temp_v5;
          *puVar5 = temp_v2;
          puVar1[temp_v1 * 6 + 3] = temp_v3;
          puVar1[temp_v1 * 6 + 4] = temp_v4;
          FUN_002a3ab0();
        }
      }
      pcVar6 = pcVar6 + 1;
      temp_v0 = FUN_002fb3f4();
    } while ((int)pcVar6 < temp_v0);
  }
  return;
}
