/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9970` (_code @ 0x1a9970, 0x428 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern signed char DAT_0044db89; /* 0x44db89 */
extern int DAT_0044db8c; /* 0x44db8c */
extern int DAT_0044db90; /* 0x44db90 */
extern unsigned int DAT_0044db94; /* 0x44db94 */
extern int DAT_0044db98; /* 0x44db98 */
extern int DAT_0049fc18; /* 0x49fc18 */

/* Supplied declaration required: FUN_002874e4. */
extern int FUN_0028753c(void);
extern int FUN_0028756c(void);
extern int FUN_0028757c(unsigned int *);
/* Supplied declaration required: FUN_00287590. */
extern int FUN_002876d0(unsigned int);
/* Supplied declaration required: FUN_00287790. */
extern int FUN_00287958(unsigned int, unsigned int);
extern unsigned int FUN_0028796c(unsigned int);
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_0028dc54. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
extern int FUN_002990bc(unsigned int);
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a72fc. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c0ba8. */
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c59b8. */
/* Supplied declaration required: FUN_0032c8d0. */
/* Supplied declaration required: FUN_00381d9c. */
/* Supplied declaration required: FUN_00384304. */
/* Supplied declaration required: FUN_00384ac8. */
/* Supplied declaration required: FUN_00385488. */


unsigned int FUN_001a9970(void)

{
/* irregular: 2 goto(s); 21 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  short temp_v6;
  unsigned int temp_v7 [2];
  unsigned char temp_v8 [28];
  
  temp_v0 = DAT_0044db8c;
  puVar6 = temp_v7;
  switch(*(unsigned char *)(DAT_0044db8c + 0x19)) {
  case 0:
    if (DAT_0044db90 != 0xb) {
      if (DAT_0044db90 < 0xc) {
        if (DAT_0044db90 == 1) {
          temp_v6 = 0;
        }
        else if (DAT_0044db90 == 9) {
          temp_v6 = 2;
        }
        else if (DAT_0044db90 == 10) {
          temp_v6 = 3;
        }
        else {
          temp_v6 = 1;
        }
      }
      else if (DAT_0044db90 == 0xc || DAT_0044db90 == 0xd) {
        temp_v6 = 3;
      }
      else {
        temp_v6 = 1;
      }
    }
    else {
      temp_v6 = 3;
    }
    if (DAT_0044db98 == 0) {
      if ((temp_v6 == 1) && (temp_v2 = FUN_002c0ba8(0x235), temp_v2 != 0)) {
        temp_v2 = FUN_002c0ba8(0x1c0);
        if ((temp_v2 != 0) && (temp_v2 = FUN_002c0ba8(0x424), temp_v2 != 0)) {
          temp_v3 = FUN_0028796c(1);
          temp_v2 = FUN_00287958(temp_v3,4);
          if (temp_v2 != 0) {
            FUN_00287790(0);
          }
        }
        else {
          FUN_00287790(0);
        }
      }
      temp_v5 = 0;
      do {
        temp_v2 = temp_v5 * 0x1a;
        if ((*(short *)(temp_v2 + 0x44dbc6) == temp_v6) &&
           ((*(short *)(temp_v2 + 0x44dbc8) == -1 || (*(short *)(temp_v2 + 0x44dbc8) == DAT_0044db90))))
        {
          if (*(short *)(temp_v2 + 0x44dbc2) != 0) {
            if (*(short *)(temp_v2 + 0x44dbc2) == -1) {
              temp_v1 = FUN_002990bc(0x65);
              if ((temp_v1 == 0) || (temp_v1 = FUN_002990bc(0x66), temp_v1 == 0)) goto LAB_001a9b34;
              temp_v1 = FUN_002990bc(0x67);
            }
            else {
              temp_v1 = FUN_002c0ba8();
            }
            if (temp_v1 == 0) goto LAB_001a9b34;
          }
          if ((*(short *)(temp_v2 + 0x44dbc4) == 0) || (temp_v1 = FUN_002c0ba8(), temp_v1 == 0)) {
            if (temp_v2 != -0x44dbb0) {
              temp_v7[0] = (unsigned int)*(unsigned short *)(temp_v2 + 0x44dbc0);
              temp_v7[1] = 0xffffffff;
              FUN_002bf86c(temp_v8);
              FUN_002c59b8(4,temp_v7,0x20);
              return 0;
            }
            break;
          }
        }
LAB_001a9b34:
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 3);
      if (DAT_0044db90 != 1) {
        temp_v3 = 0x100005a;
        temp_v2 = FUN_002876d0(0x100005a);
      }
      else {
        temp_v3 = 0x100005d;
        temp_v2 = FUN_002876d0(0x100005d);
      }
      if (temp_v2 != 1) {
        FUN_00287590(temp_v3);
      }
      FUN_00289b4c();
      FUN_0028dc54();
      FUN_0028d974();
      FUN_00289ae8();
    }
    puVar3 = (unsigned int *)0xfc4;
    FUN_002c23f8();
    temp_v2 = 0;
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = 0;
      temp_v2 = FUN_0028757c(puVar3 + 0x196);
      temp_v2 = temp_v2 - 0x658;
    }
    *(int *)(temp_v0 + 0x1c) = temp_v2;
    FUN_00381d9c();
    FUN_00384304(*(unsigned int *)(temp_v0 + 0x1c),DAT_0044db90,DAT_0044db94,DAT_0044db98);
    *(unsigned char *)(temp_v0 + 0x19) = 1;
    break;
  case 1:
    FUN_00384ac8(*(unsigned int *)(DAT_0044db8c + 0x1c));
    if ((**(unsigned int **)(temp_v0 + 0x1c) & 1) != 0) {
      *(unsigned char *)(temp_v0 + 0x19) = 3;
    }
    break;
  case 2:
    *(unsigned char *)(DAT_0044db8c + 0x19) = 4;
    *(unsigned char *)(temp_v0 + 0x18) = 1;
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_002a72fc();
      FUN_002b2520(*(unsigned int *)(temp_v0 + 0x1c));
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
    break;
  case 3:
    temp_v2 = *(int *)(DAT_0044db8c + 0x1c);
    if ((((temp_v2 == 0) || (FUN_00385488(), temp_v2 == 0)) && (temp_v2 = FUN_0028756c(), temp_v2 != 0)) &&
       (DAT_0044db98 == 0)) {
      temp_v2 = FUN_0028753c();
      if (temp_v2 != 0) {
        temp_v4 = 4;
        temp_v7[0] = DAT_0049fc18 - 200;
        temp_v3 = 0xe;
      }
      else {
        temp_v4 = 0;
        puVar6 = (unsigned int *)0x0;
        temp_v3 = 6;
      }
      FUN_002c59b8(temp_v3,puVar6,temp_v4);
    }
    *(unsigned char *)(temp_v0 + 0x19) = 4;
    *(unsigned char *)(temp_v0 + 0x18) = 1;
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_002a72fc();
      FUN_002b2520(*(unsigned int *)(temp_v0 + 0x1c));
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
    if (DAT_0044db98 == 0) {
      FUN_00291be8();
      FUN_00291a5c();
      FUN_002874e4();
    }
    break;
  case 4:
    if (DAT_0044db89 != '\0') {
      FUN_002a0678(0,1);
      FUN_002a0678(1);
      FUN_0032c8d0();
    }
    return 0xffffffff;
  }
  return 0;
}
