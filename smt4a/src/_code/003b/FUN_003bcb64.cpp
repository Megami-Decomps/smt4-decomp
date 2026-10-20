/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcb64` (_code @ 0x3bcb64, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randRange(int);
int sysMemClear(int [109], int);
int scrSetResult(...);
int FUN_003f0e20(int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} void_stack;

extern unsigned int DAT_005710e8; /* 0x5710e8 */
extern unsigned int DAT_005710ec; /* 0x5710ec */
extern unsigned int DAT_00571100; /* 0x571100 */
extern unsigned int DAT_00571104; /* 0x571104 */
extern unsigned int DAT_00571108; /* 0x571108 */
extern unsigned int DAT_0057110c; /* 0x57110c */

extern int btlGetMainState(void);
/* Supplied declaration required: randRange. */
extern int FUN_002a4b28(void);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003f0e20. */
extern int FUN_004d0bf0(unsigned short);


unsigned int FUN_003bcb64(void)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned char temp_v7;
  int aiStack_1e0 [109];
  int temp_v8;
  unsigned int *temp_v9;
  
  temp_v2 = btlGetMainState();
  temp_v0 = *(short *)(temp_v2 + 0x2356);
  temp_v2 = btlGetMainState();
  FUN_003f0e20(temp_v2,(int)temp_v0);
  temp_v8 = temp_v2 + 0x100;
  temp_v1 = 0;
  do {
    sysMemClear(aiStack_1e0,0x1b4);
    temp_v7 = 0;
    if ((temp_v1) && (temp_v3 = randRange(99), temp_v3 < 0x5a)) {
      temp_v2 = -1;
      scrSetResult(temp_v2);
      return 1;
    }
    temp_v6 = 0;
    do {
      temp_v4 = btlGetMainState();
      puVar8 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + temp_v6 * 0x408);
      temp_v3 = *puVar8;
      temp_v5 = puVar8[1];
      if (((((DAT_005710e8 & temp_v3) != 0 || (DAT_005710ec & temp_v5) != 0) &&
           ((DAT_00571108 & temp_v3) == 0 && (DAT_0057110c & temp_v5) == 0)) &&
          ((temp_v3 & DAT_00571100) != 0 || (temp_v5 & DAT_00571104) != 0)) &&
         ((*(short *)((int)puVar8 + 0x6e) != *(short *)(temp_v2 + 0x6e) &&
          (*(unsigned short *)((int)puVar8 + 0x27a) <= *(unsigned short *)(temp_v2 + 0x27a))))) {
        temp_v9 = puVar8 + 0x40;
        temp_v4 = FUN_004d0bf0(*(unsigned short *)((int)puVar8 + 0x166));
        if (((temp_v4 == 0) &&
            ((puVar8[0x101] != 0 && ((*(unsigned short *)(puVar8[0x101] + 0x16) & 0x40) != 0)))) &&
           (*(short *)(temp_v8 + 0x66) != *(short *)((int)temp_v9 + 0x66))) {
          if (temp_v1) {
            temp_v4 = FUN_002a4b28();
            if (temp_v4 != 0) {
              aiStack_1e0[temp_v7] = (int)puVar8;
              temp_v7 = temp_v7 + 1;
            }
          }
          else {
            temp_v4 = FUN_002a4b28();
            if (temp_v4 == 0) {
              aiStack_1e0[temp_v7] = (int)puVar8;
              temp_v7 = temp_v7 + 1;
            }
          }
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x6d);
    if (temp_v7 != 0) {
      temp_v2 = randRange((temp_v7 - 1) & 0xffff);
      temp_v2 = (int)*(short *)(aiStack_1e0[temp_v2] + 8);
      scrSetResult(temp_v2);
      return 1;
    }
    if (temp_v1) {
      scrSetResult(0xffffffff);
      return 1;
    }
    temp_v1 = 1;
  } while( 1 );
}

} /* extern "C" */
