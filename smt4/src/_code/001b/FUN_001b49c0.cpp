/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b49c0` (_code @ 0x1b49c0, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aocDataTable2dGetEntryKind4(void);
int FUN_0027ef2c(...);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_00448c20; /* 0x448c20 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: aocDataTable2dGetEntryKind4. */
/* Supplied declaration required: FUN_0027ef2c. */
extern int FUN_002f4814(void);


void FUN_001b49c0(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  char *pcVar4;
  unsigned int in_fpscr;
  
  temp_v0 = DAT_00448c20;
  pcVar4 = (char *)0x0;
  *(unsigned char *)(DAT_00448c20 + 9) = 1;
  *(unsigned int *)(temp_v0 + 4) = 0;
  temp_v0 = FUN_002f4814();
  if (0 < temp_v0) {
    do {
      pcVar2 = pcVar4;
      aocDataTable2dGetEntryKind4();
      if (((*pcVar2 != -1) && (*pcVar2 == param_1)) && (pcVar2[1] == param_2)) {
        temp_v1 = *(int *)(pcVar2 + 8);
        VectorSignedToFloat((int)*(short *)(pcVar2 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(pcVar2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(pcVar2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = 0x1000260;
        if (temp_v1 != 0) {
          temp_v0 = temp_v1 + 0x1000260;
        }
        FUN_0027ef2c(temp_v0,temp_v1 != 0,(int)*(short *)(pcVar2 + 6),(int)*(short *)(pcVar2 + 2));
      }
      pcVar4 = pcVar4 + 1;
      temp_v0 = FUN_002f4814();
    } while ((int)pcVar4 < temp_v0);
  }
  if (param_1 != 10 || param_2 != 5) {
    return;
  }
  FUN_0027ef2c(0x1000264,1);
  FUN_0027ef2c(0x1000264,1);
  FUN_0027ef2c(0x1000263);
  FUN_0027ef2c(0x1000263,1);
  FUN_0027ef2c(0x1000263,1);
  return;
}

} /* extern "C" */
