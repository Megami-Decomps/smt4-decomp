/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d9634` (_code @ 0x1d9634, 0x370 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029c3b0(int);
int FUN_002a03d8(...);
int FUN_002b2368(int);
int FUN_002be624(unsigned char [24], unsigned char *, int, unsigned int);
int asdOperatorNew(void);
int asdSequenceRequest(...);
int FUN_00343b48(void);
int FUN_003a0994(unsigned int);
int FUN_003a14ac(void);
int FUN_003a3914(void);
int FUN_003a5e30(void);
int FUN_003a63c8(int [2]);
int FUN_003a63f8(int [2]);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_001d99b0; /* 0x1d99b0 */
extern unsigned char *DAT_0044df80; /* 0x44df80 */
extern int g_shop; /* 0x44e050 */
extern int DAT_0049fc18; /* 0x49fc18 */

extern int FUN_00263c34(int);
extern int gameStateIsFlagSetAndLarge(void);
extern int FUN_00287304(void);
/* Supplied declaration required: FUN_0029c3b0. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdSequenceRequest. */
extern int FUN_00343af0(void);
/* Supplied declaration required: FUN_00343b48. */
/* Supplied declaration required: FUN_003a0994. */
/* Supplied declaration required: FUN_003a14ac. */
/* Supplied declaration required: FUN_003a3914. */
/* Supplied declaration required: FUN_003a5e30. */
extern int storyFlagRangeAnySet(void);
/* Supplied declaration required: FUN_003a63c8. */
/* Supplied declaration required: FUN_003a63f8. */


unsigned int FUN_001d9634(void)

{
/* irregular: 13 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  int *piVar6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  int temp_v7 [2];
  unsigned char temp_v8 [24];
  
  temp_v3 = g_shop;
  piVar6 = temp_v7;
  temp_v0 = *(char *)(g_shop + 5);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          if (*(char *)(g_shop + 0x14) != '\0') {
            temp_v2 = *(int *)(g_shop + 8);
            if (temp_v2 >= 100) {
              if (temp_v2 == 0x6d) {
                temp_v5 = 2;
              }
              else {
                temp_v5 = 4;
              }
            }
            else if (temp_v2 == 8) {
              temp_v5 = 1;
            }
            else {
              temp_v5 = 3;
            }
            if (DAT_0044df80 == (unsigned char *)0x0) {
              puVar4 = (unsigned char *)0x8;
              asdOperatorNew();
              DAT_0044df80 = puVar4;
              if (puVar4 != (unsigned char *)0x0) {
                *puVar4 = 0;
                *(unsigned int *)(puVar4 + 4) = 0;
              }
            }
            temp_v6 = DAT_0044df80 == (unsigned char *)0x0;
            *(unsigned int *)(DAT_0044df80 + 4) = *(unsigned int *)(temp_v3 + 8);
            if (temp_v6) {
              puVar4 = (unsigned char *)0x8;
              asdOperatorNew();
              DAT_0044df80 = puVar4;
              if (puVar4 != (unsigned char *)0x0) {
                *puVar4 = 0;
                *(unsigned int *)(puVar4 + 4) = 0;
              }
            }
            *DAT_0044df80 = 1;
            temp_v7[1] = 0xffffffff;
            temp_v7[0] = 0x4b;
            FUN_002be624(temp_v8,&LAB_001d99b0,0x4b,temp_v5);
            asdSequenceRequest(4,temp_v7,0x20);
          }
          else {
            temp_v2 = FUN_00287304();
            if (temp_v2 != 0) {
              temp_v3 = gameStateIsFlagSetAndLarge();
              if (temp_v3 != 0) {
                temp_v4 = 4;
                temp_v7[0] = DAT_0049fc18 - 200;
                temp_v5 = 0xe;
              }
              else {
                temp_v4 = 0;
                piVar6 = (int *)0x0;
                temp_v5 = 6;
              }
              asdSequenceRequest(temp_v5,piVar6,temp_v4);
            }
            else if (*(char *)(temp_v3 + 0xc) != '\0') {
              FUN_002a03d8(0,1);
              FUN_002a03d8(1);
            }
            else {
              FUN_002a03d8(0,1);
              FUN_002a03d8(1);
              FUN_0029c3b0(0xf);
            }
          }
          return 0xffffffff;
        }
      }
      else {
        if (*(int *)(g_shop + 0x18) != 0) {
          FUN_003a3914();
          if (*(int *)(temp_v3 + 0x18) != 0) {
            temp_v2 = FUN_00263c34(*(int *)(temp_v3 + 0x18) + 0x828);
            FUN_002b2368(temp_v2 - 0x828);
          }
          FUN_003a63f8(temp_v7);
        }
        *(unsigned char *)(temp_v3 + 5) = 3;
      }
    }
    else if (((g_shop != 0) && (*(int *)(g_shop + 0x18) != 0)) &&
            (FUN_003a14ac(), (**(unsigned int **)(temp_v3 + 0x18) & 1) != 0)) {
      *(unsigned char *)(temp_v3 + 5) = 2;
    }
  }
  else {
    temp_v2 = storyFlagRangeAnySet();
    if ((((temp_v2 != 0) && (temp_v2 = FUN_00343af0(), temp_v2 == 0)) &&
        (temp_v2 = *(int *)(temp_v3 + 8), temp_v2 != 6)) &&
       (((!(temp_v2 == 7 || temp_v2 == 9) && (!(temp_v2 == 10 || temp_v2 == 0xb))) &&
        ((!(temp_v2 == 0xc || temp_v2 == 0x69) &&
         ((!(temp_v2 == 0x6e || temp_v2 == 0x6f) && (!(temp_v2 == 0x70 || temp_v2 == 0x71))))))))) {
      *(unsigned char *)(temp_v3 + 0x14) = 1;
      FUN_00343b48();
      *(unsigned char *)(temp_v3 + 5) = 3;
    }
    else {
      FUN_003a63c8(temp_v7);
      temp_v2 = 0x15d6c;
      if (*(char *)(temp_v3 + 6) != '\0') {
        if (*(char *)(temp_v3 + 6) == '\x01') {
          asdOperatorNew();
          temp_v1 = 0;
          if (temp_v2 != 0) {
            temp_v1 = FUN_003a5e30();
          }
          temp_v2 = *(int *)(temp_v3 + 0x10);
          *(int *)(temp_v3 + 0x18) = temp_v1;
          if (temp_v2 == 8) {
            temp_v2 = 8;
          }
          *(int *)(temp_v1 + 0x860) = temp_v2;
        }
      }
      else {
        asdOperatorNew();
        temp_v5 = 0;
        if (temp_v2 != 0) {
          temp_v5 = FUN_003a5e30();
        }
        *(unsigned int *)(temp_v3 + 0x18) = temp_v5;
      }
      FUN_003a0994(*(unsigned int *)(temp_v3 + 0x18));
      *(unsigned char *)(temp_v3 + 5) = 1;
    }
  }
  return 0;
}

} /* extern "C" */
