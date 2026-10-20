/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d5c8` (_code @ 0x38d5c8, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int scrSetResult(int);
int FUN_003e8bb0(unsigned char [2], int, int);
int FUN_004c3ac0(int, int [3]);
int FUN_004c58e0(int, int, int, int);
int VectorSignedToFloat(int, int);

/* stack frame of void: 4 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp44; /* 0x44: local_44 */
    unsigned short sp5A; /* 0x5a: local_5a */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned int DAT_00570d78; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int btlGetMainState(void);
/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_004c3ac0. */
/* Supplied declaration required: FUN_004c58e0. */


unsigned int FUN_0038d5c8(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  int temp_v8 [3];
  unsigned char temp_v9 [2];
  unsigned short temp_v10;
  short temp_v11;
  char temp_v12;
  
  temp_v2 = scrGetArg(0);
  temp_v7 = 9999;
  temp_v8[0] = btlGetMainState();
  temp_v3 = temp_v2 & 0xffff;
  FUN_0019cac4();
  if (temp_v3 != 0) {
    temp_v5 = 4;
    temp_v6 = *(int *)(temp_v8[0] + 0x1ffc);
    do {
      puVar7 = (unsigned int *)(temp_v6 + temp_v5 * 0x408);
      temp_v3 = *puVar7;
      temp_v4 = puVar7[1];
      if (((((temp_v3 & DAT_00570d78) != 0 || (temp_v4 & DAT_00570d7c) != 0) &&
           ((DAT_00570d90 & temp_v3) == 0 && (DAT_00570d94 & temp_v4) == 0)) &&
          ((temp_v3 & DAT_00570d80) != 0 || (temp_v4 & DAT_00570d84) != 0)) &&
         (*(unsigned short *)((int)puVar7 + 0x166) == temp_v2)) {
        if (puVar7 != (unsigned int *)0x0) {
          temp_v0 = *(unsigned short *)(temp_v6 + 0x322);
          temp_v1 = *(unsigned short *)(temp_v6 + 0x324);
          *(unsigned short *)(temp_v6 + 0x322) = 1;
          *(unsigned short *)(temp_v6 + 0x324) = 1;
          FUN_003e8bb0(temp_v9,temp_v8[0],temp_v6);
          temp_v8[0] = 0;
          FUN_004c3ac0(temp_v10,temp_v8);
          temp_v5 = temp_v8[0] * 2;
          temp_v8[0] = (int)temp_v11;
          temp_v8[1] = 1;
          temp_v8[2] = 0;
          temp_v7 = 0;
          VectorSignedToFloat(*(unsigned short *)((int)puVar7 + temp_v5 + 0x2b6) & 0x3ff,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_004c58e0(0,(int)*(short *)(temp_v6 + 0x324),(int)*(short *)(temp_v6 + 8),
                       (int)(short)puVar7[2]);
          temp_v7 = temp_v7 * temp_v12;
          *(unsigned short *)(temp_v6 + 0x322) = temp_v0;
          *(unsigned short *)(temp_v6 + 0x324) = temp_v1;
        }
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x36);
  }
  scrSetResult(temp_v7);
  return 1;
}

} /* extern "C" */
