/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a2a0` (_code @ 0x12a2a0, 0x344 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_0013af98; /* 0x13af98 */
extern signed char DAT_00465630; /* 0x465630 */
extern romwright_code *DAT_00465634; /* 0x465634 */
extern unsigned int DAT_00465638; /* 0x465638 */
extern unsigned int DAT_00465644; /* 0x465644 */
extern unsigned int DAT_004e5290; /* 0x4e5290 */
extern unsigned int DAT_004e5294; /* 0x4e5294 */
extern unsigned int DAT_004e5298; /* 0x4e5298 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0013afa4. */
/* Supplied declaration required: FUN_0013afdc. */
/* Supplied declaration required: FUN_0013b1ac. */
/* Supplied declaration required: FUN_0013b1bc. */
/* Supplied declaration required: FUN_0013b1ec. */
extern int FUN_0013b234(unsigned int, unsigned int);
extern int FUN_0013b3f0(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002ad45c. */
/* Supplied declaration required: FUN_002ad470. */
extern int FUN_002ad4c0(void);
extern unsigned int FUN_002bb440(void);
/* Supplied declaration required: FUN_002bb460. */
/* Supplied declaration required: FUN_002bb470. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002bce48. */
/* Supplied declaration required: FUN_002c14f4. */
/* Supplied declaration required: FUN_002c4244. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_002c5f58. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0012a2a0(void)

{
/* irregular: 13 unstructured edge(s); 3 goto(s); 20 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_24;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  FUN_002c5f58(&temp_v6,&LAB_0013af98,4,3);
  temp_v6 = DAT_004e5290;
  temp_v7 = DAT_004e5294;
  temp_v8 = DAT_004e5298;
  do {
    if (DAT_00465630 != '\0') {
      return;
    }
    temp_v4 = 0xffffffff;
    uStack_24 = 0xffffffff;
    puVar1 = &temp_v5;
    FUN_002c42fc(puVar1,&temp_v6,3,0);
    if ((int)puVar1 < 0) {
      FUN_002c14f4();
    }
    if (DAT_00465630 != '\0') {
      return;
    }
    puVar2 = &DAT_00465644;
    FUN_002ad470();
    if (puVar2 == (unsigned int *)0x0) {
      software_interrupt(0x19);
      if ((int)(&DAT_004e5290)[temp_v5] < 0) {
        FUN_002c5468();
      }
      if (temp_v5 == 2) {
        temp_v0 = 0xc;
      }
      else {
        if (temp_v5 == 1) {
          if ((DAT_00465634 == (romwright_code *)0x0) || (temp_v1 = (*DAT_00465634)(DAT_00465638), temp_v1 != 0))
          {
            FUN_002c4244(&DAT_00465644);
          }
          continue;
        }
        if (temp_v5 != 0) continue;
        FUN_002bb6b8();
        temp_v0 = FUN_002bb440();
        temp_v1 = FUN_0013b3f0(temp_v0,&temp_v4);
        FUN_002bb648();
        if (temp_v1 < 0) continue;
        temp_v2 = temp_v4;
        switch(temp_v2) {
        default:
          FUN_002bce48();
          continue;
        case 1:
        case 2:
          temp_v1 = FUN_002ad4c0();
          if (temp_v1 == 0) {
            temp_v0 = 1;
            if ((temp_v4 & 0xff) != 1) {
              temp_v0 = 2;
            }
            FUN_0013b1ec(temp_v0);
          }
          if ((DAT_00465634 != (romwright_code *)0x0) && (temp_v1 = (*DAT_00465634)(DAT_00465638), temp_v1 == 0))
          continue;
          if ((temp_v4 & 0xff) == 1) {
            temp_v0 = 6;
          }
          else {
            temp_v0 = 7;
          }
          break;
        case 3:
        case 4:
        case 5:
        case 6:
          temp_v3 = temp_v2 == 3;
          if (temp_v3) {
            temp_v2 = 1;
          }
          if (!temp_v3 && temp_v2 != 4) {
            if (temp_v2 == 5) {
              temp_v2 = 2;
            }
            else {
              if (temp_v2 != 6) goto joined_r0x0012a558;
              temp_v2 = 3;
            }
          }
          FUN_0013b1bc(temp_v2);
joined_r0x0012a558:
          if (DAT_00465634 == (romwright_code *)0x0) continue;
          (*DAT_00465634)(DAT_00465638);
          continue;
        case 7:
          FUN_0013afa4();
          FUN_0013b1ac(1);
          FUN_002bb460(1);
          goto joined_r0x0012a558;
        case 8:
          FUN_0013afdc();
          FUN_002bb470(1);
          goto joined_r0x0012a558;
        case 9:
          FUN_002bb470(0);
          continue;
        case 10:
          FUN_002bb6b8();
          temp_v1 = FUN_0013b234(0,0x40);
          if (temp_v1 < 0) {
            FUN_002c14f4(temp_v1,0x12a598);
          }
          FUN_002bb648();
          continue;
        case 0xb:
          FUN_002bb460(1);
          continue;
        }
      }
      FUN_002ad45c(temp_v0);
      FUN_002c4244(&DAT_00465644);
      continue;
    }
    FUN_002bb490(10000000,0);
    software_interrupt(0x18);
    if ((int)(&DAT_004e5290)[temp_v5] < 0) {
      FUN_002c5468();
    }
  } while( 1 );
}
