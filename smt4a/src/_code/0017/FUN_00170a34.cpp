/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170a34` (_code @ 0x170a34, 0x344 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001713d8(int);
int FUN_001713e8(int);
int FUN_0017fd38(unsigned int *, int *, int, int);
int FUN_00189a38(...);
int FUN_0018b68c(unsigned int);
int FUN_0018b69c(void);
int FUN_0018b6d4(void);
int FUN_0018b868(void);
int FUN_0018b900(int);
int FUN_0018b910(int);
int FUN_0018b964(void);
int FUN_0018b9f0(unsigned int);
int FUN_00195fc8(void);
int FUN_001a08d8(unsigned int *);
int FUN_001af214(void);
int FUN_001bcd48(int, int);
int FUN_002e3140(void);
int FUN_002f5020(int *, unsigned char *, int, int);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_0018b630; /* 0x18b630 */
extern signed char DAT_005b4448; /* 0x5b4448 */
extern romwright_code *DAT_005b444c; /* 0x5b444c */
extern unsigned int DAT_005b4450; /* 0x5b4450 */
extern unsigned int DAT_005b445c; /* 0x5b445c */
extern unsigned int DAT_006416a8; /* 0x6416a8 */
extern unsigned int DAT_006416ac; /* 0x6416ac */
extern unsigned int DAT_006416b0; /* 0x6416b0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001713d8. */
/* Supplied declaration required: FUN_001713e8. */
/* Supplied declaration required: FUN_0017fd38. */
/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0018b68c. */
/* Supplied declaration required: FUN_0018b69c. */
/* Supplied declaration required: FUN_0018b6d4. */
extern unsigned int FUN_0018b70c(void);
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b900. */
/* Supplied declaration required: FUN_0018b910. */
/* Supplied declaration required: FUN_0018b964. */
extern int FUN_0018b9e0(void);
/* Supplied declaration required: FUN_0018b9f0. */
extern int FUN_0018ba38(unsigned int, unsigned int);
extern int FUN_0018bc38(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_001a08d8. */
/* Supplied declaration required: FUN_001af214. */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002f5020. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00170a34(void)

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
  
  FUN_002f5020(&temp_v6,&LAB_0018b630,4,3);
  temp_v6 = DAT_006416a8;
  temp_v7 = DAT_006416ac;
  temp_v8 = DAT_006416b0;
  do {
    if (DAT_005b4448 != '\0') {
      return;
    }
    puVar1 = &temp_v5;
    temp_v4 = 0xffffffff;
    uStack_24 = 0xffffffff;
    FUN_0017fd38(puVar1,&temp_v6,3,0);
    if ((int)puVar1 < 0) {
      FUN_00189a38();
    }
    if (DAT_005b4448 != '\0') {
      return;
    }
    puVar2 = &DAT_005b445c;
    FUN_001af214();
    if (puVar2 == (unsigned int *)0x0) {
      software_interrupt(0x19);
      if ((int)(&DAT_006416a8)[temp_v5] < 0) {
        FUN_002e3140();
      }
      if (temp_v5 == 2) {
        temp_v0 = 0xc;
      }
      else {
        if (temp_v5 == 1) {
          if ((DAT_005b444c == (romwright_code *)0x0) || (temp_v1 = (*DAT_005b444c)(DAT_005b4450), temp_v1 != 0))
          {
            FUN_001a08d8(&DAT_005b445c);
          }
          continue;
        }
        if (temp_v5 != 0) continue;
        FUN_0018b868();
        temp_v0 = FUN_0018b70c();
        temp_v1 = FUN_0018bc38(temp_v0,&temp_v4);
        FUN_0018b964();
        if (temp_v1 < 0) continue;
        temp_v2 = temp_v4;
        switch(temp_v2) {
        default:
          FUN_00195fc8();
          continue;
        case 1:
        case 2:
          temp_v1 = FUN_0018b9e0();
          if (temp_v1 == 0) {
            temp_v0 = 1;
            if ((temp_v4 & 0xff) != 1) {
              temp_v0 = 2;
            }
            FUN_0018b9f0(temp_v0);
          }
          if ((DAT_005b444c != (romwright_code *)0x0) && (temp_v1 = (*DAT_005b444c)(DAT_005b4450), temp_v1 == 0))
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
              if (temp_v2 != 6) goto joined_r0x00170cec;
              temp_v2 = 3;
            }
          }
          FUN_0018b910(temp_v2);
joined_r0x00170cec:
          if (DAT_005b444c == (romwright_code *)0x0) continue;
          (*DAT_005b444c)(DAT_005b4450);
          continue;
        case 7:
          FUN_0018b69c();
          FUN_0018b900(1);
          FUN_001713e8(1);
          goto joined_r0x00170cec;
        case 8:
          FUN_0018b6d4();
          FUN_001713d8(1);
          goto joined_r0x00170cec;
        case 9:
          FUN_001713d8(0);
          continue;
        case 10:
          FUN_0018b868();
          temp_v1 = FUN_0018ba38(0,0x40);
          if (temp_v1 < 0) {
            FUN_00189a38(temp_v1,0x170d2c);
          }
          FUN_0018b964();
          continue;
        case 0xb:
          FUN_001713e8(1);
          continue;
        }
      }
      FUN_0018b68c(temp_v0);
      FUN_001a08d8(&DAT_005b445c);
      continue;
    }
    FUN_001bcd48(10000000,0);
    software_interrupt(0x18);
    if ((int)(&DAT_006416a8)[temp_v5] < 0) {
      FUN_002e3140();
    }
  } while( 1 );
}

} /* extern "C" */
