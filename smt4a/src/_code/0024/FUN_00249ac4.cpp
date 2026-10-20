/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249ac4` (_code @ 0x249ac4, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagIsSet(...);
int FUN_002dd380(...);
int FUN_00314638(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_005821a0; /* 0x5821a0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: FUN_002dd380. */
/* Supplied declaration required: FUN_00314638. */
extern int FUN_00379858(void);


void FUN_00249ac4(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  char *pcVar5;
  unsigned int in_fpscr;
  
  temp_v1 = DAT_005821a0;
  pcVar5 = (char *)0x0;
  *(unsigned char *)(DAT_005821a0 + 9) = 1;
  *(unsigned int *)(temp_v1 + 4) = 0;
  temp_v1 = FUN_00379858();
  if (0 < temp_v1) {
    do {
      pcVar3 = pcVar5;
      FUN_00314638();
      if ((((*pcVar3 != -1) && (*pcVar3 == param_1)) && (pcVar3[1] == param_2)) &&
         (((temp_v0 = *(short *)(pcVar3 + 0xe), *(short *)(pcVar3 + 0xc) == 0 ||
           (temp_v1 = gameFlagIsSet(), temp_v1 != 0)) &&
          ((temp_v0 == 0 || (temp_v1 = gameFlagIsSet((int)temp_v0), temp_v1 == 0)))))) {
        temp_v2 = *(int *)(pcVar3 + 8);
        VectorSignedToFloat((int)*(short *)(pcVar3 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(pcVar3 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(pcVar3 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v1 = 0x100030c;
        if (temp_v2 != 0) {
          temp_v1 = temp_v2 + 0x100030c;
        }
        FUN_002dd380(temp_v1,temp_v2 != 0,(int)*(short *)(pcVar3 + 4),(int)*(short *)(pcVar3 + 6));
      }
      pcVar5 = pcVar5 + 1;
      temp_v1 = FUN_00379858();
    } while ((int)pcVar5 < temp_v1);
  }
  if (param_1 != 10 || param_2 != 5) {
    return;
  }
  FUN_002dd380(0x1000310,1);
  FUN_002dd380(0x1000310,1);
  FUN_002dd380(0x100030f);
  FUN_002dd380(0x100030f,1);
  FUN_002dd380(0x100030f,1);
  return;
}

} /* extern "C" */
