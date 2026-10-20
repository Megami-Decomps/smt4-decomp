/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00403a34` (_code @ 0x403a34, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023723c(unsigned int, int, unsigned int, int);
int FUN_002a1f60(unsigned int, int, unsigned int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char DAT_0052d13c; /* 0x52d13c */
extern unsigned int g_aocSystem; /* 0x570280 */

extern char *FUN_0016780c(unsigned int, int, int *);
extern int FUN_001688c4(unsigned int);
/* Supplied declaration required: FUN_0023723c. */
/* Supplied declaration required: FUN_002a1f60. */
extern int FUN_0040a75c(int);
extern unsigned char *FUN_00471678(unsigned int, int, int);


void FUN_00403a34(int param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  char *pcVar3;
  int temp_v1;
  int temp_v2;
  int *piVar6;
  int temp_v3;
  unsigned int *puVar8;
  int temp_v4;
  unsigned char *temp_v5;
  int iStack_28;
  
  temp_v0 = FUN_0040a75c(param_2);
  puVar8 = (unsigned int *)&DAT_0052d13c;
  temp_v0 = temp_v0 + 1;
  piVar6 = (int *)(param_1 + 0x684);
  temp_v2 = 0;
  *(unsigned int *)(param_1 + 0x684) = 0;
  do {
    temp_v4 = 3;
    temp_v5 = &DAT_0052d13c;
    FUN_0023723c(*(unsigned int *)(param_1 + temp_v2 * 4 + 0x66c),3,0xffffffff,0);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 5);
  if (0 < temp_v0) {
    puVar8 = &g_aocSystem;
  }
  temp_v2 = 0;
  if (temp_v2 < temp_v0) {
    do {
      puVar2 = (unsigned char *)FUN_00471678(*puVar8,param_2,temp_v2);
      if (puVar2 != (unsigned char *)0x0) {
LAB_00403ac4:
        if (puVar2 != (unsigned char *)0x0) {
          temp_v4 = 3;
          iStack_28 = temp_v2 + param_2 * 10;
          temp_v3 = param_1 + temp_v2 * 4;
          temp_v5 = puVar2;
          FUN_002a1f60(*(unsigned int *)(temp_v3 + 0x66c),3,0xffffffff,0);
          temp_v3 = FUN_001688c4(*(unsigned int *)(temp_v3 + 0x66c));
          temp_v1 = param_1 + temp_v2 * 8;
          *(unsigned int *)(temp_v1 + 0x688) = *(unsigned int *)(param_1 + 0x684);
          *(int *)(temp_v1 + 0x68c) = *piVar6 + temp_v3;
          *piVar6 = temp_v3 + *piVar6;
        }
      }
      else {
        temp_v4 = 0;
        pcVar3 = (char *)FUN_0016780c(*(unsigned int *)(param_1 + 8),temp_v2 + param_2 * 10,&temp_v4);
        if (((pcVar3 != (char *)0x0) && (-1 < temp_v4)) && (*pcVar3 != '\0')) {
          puVar2 = *(unsigned char **)(param_1 + 8);
          goto LAB_00403ac4;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v0);
  }
  return;
}

} /* extern "C" */
