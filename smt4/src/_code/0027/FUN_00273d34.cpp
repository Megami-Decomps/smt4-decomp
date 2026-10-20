/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273d34` (_code @ 0x273d34, 0x224 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00267074(int);
int FUN_002670cc(void);
int FUN_00267144(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

/* Supplied declaration required: FUN_00267074. */
/* Supplied declaration required: FUN_002670cc. */
/* Supplied declaration required: FUN_00267144. */
extern int FUN_002671bc(void);
extern int FUN_0027d968(void);
extern int FUN_002c2950(void);
extern int FUN_00326e44(void);


void FUN_00273d34(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  int *piVar7;
  int temp_v5;
  int temp_v6;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int temp_v7;
  unsigned char temp_v8;
  
  temp_v1 = FUN_002c2950();
  temp_v7 = 0;
  temp_v2 = FUN_002c2950();
  temp_v3 = 0;
  temp_v5 = 0x10;
  do {
    temp_v5 = temp_v5 - 1;
    temp_v6 = temp_v2 + temp_v3 * 0x14;
    *(unsigned char *)(temp_v6 + 0xf20) = 0;
    *(unsigned short *)(temp_v6 + 0xf24) = 0;
    *(unsigned char *)(temp_v6 + 0xf23) = 0;
    temp_v3 = temp_v3 + 1;
    *(unsigned short *)(temp_v6 + 0xf28) = 0;
  } while (temp_v5 != 0);
  pcVar12 = (char *)0x0;
  temp_v2 = FUN_002671bc();
  if (0 < temp_v2) {
    do {
      pcVar5 = pcVar12;
      FUN_00267144();
      temp_v4 = (unsigned int)*pcVar5;
      temp_v8 = temp_v4 != 0xffffffff;
      if (temp_v8) {
        temp_v4 = (unsigned int)*(unsigned short *)(pcVar5 + 0x12);
      }
      if ((temp_v8 && temp_v4 != 0) && (temp_v2 = FUN_0027d968(), temp_v2 == *(short *)(pcVar5 + 0x12))) {
        if (*(short *)(pcVar5 + 0xc) != 0) {
          temp_v2 = temp_v1 + temp_v7 * 0x14;
          *(unsigned char *)(temp_v2 + 0xf20) = (*(unsigned char *)(temp_v2 + 0xf20) & 0xfb) | 3;
          temp_v0 = *(short *)(pcVar5 + 0xc);
          piVar10 = (int *)0x0;
          temp_v3 = FUN_00326e44();
          piVar11 = (int *)0xffffffff;
          if (0 < temp_v3) {
            do {
              piVar7 = piVar10;
              FUN_002670cc();
              if ((*piVar7 != -1) && (piVar11 = piVar10, *piVar7 == (int)temp_v0)) break;
              piVar10 = (int *)((int)piVar10 + 1);
              temp_v3 = FUN_00326e44();
              piVar11 = (int *)0xffffffff;
            } while ((int)piVar10 < temp_v3);
          }
          temp_v3 = (int)(short)(int)piVar11;
          *(short *)(temp_v2 + 0xf24) = (short)(int)piVar11;
          FUN_002670cc();
          *(unsigned char *)(temp_v2 + 0xf23) = 0;
          *(short *)(temp_v2 + 0xf28) = *(short *)(temp_v3 + 0xe) * 0x708;
          *(unsigned char *)(temp_v2 + 0xf21) = *(unsigned char *)(temp_v3 + 4);
          *(unsigned char *)(temp_v2 + 0xf22) = *(unsigned char *)(temp_v3 + 5);
          *(unsigned short *)(temp_v2 + 0xf2c) = *(unsigned short *)(temp_v3 + 6);
          *(unsigned short *)(temp_v2 + 0xf2e) = *(unsigned short *)(temp_v3 + 8);
          *(unsigned short *)(temp_v2 + 0xf30) = *(unsigned short *)(temp_v3 + 10);
          *(unsigned short *)(temp_v2 + 0xf32) = *(unsigned short *)(temp_v3 + 0xc);
          *(unsigned char *)(temp_v2 + 0xf2a) = *(unsigned char *)(temp_v3 + 0x10);
          *(unsigned char *)(temp_v2 + 0xf2b) = *(unsigned char *)(temp_v3 + 0x11);
          FUN_00267074(temp_v7);
        }
        else if (pcVar5[0xf] == '\x02' || pcVar5[0xf] == '\x03') {
          temp_v2 = temp_v1 + temp_v7 * 0x14;
          *(unsigned char *)(temp_v2 + 0xf20) = (*(unsigned char *)(temp_v2 + 0xf20) & 0xf9) | 1;
          *(unsigned short *)(temp_v2 + 0xf24) = 0;
          *(unsigned char *)(temp_v2 + 0xf23) = 0;
          *(unsigned short *)(temp_v2 + 0xf28) = 0;
          *(char *)(temp_v2 + 0xf21) = *pcVar5;
          *(char *)(temp_v2 + 0xf22) = pcVar5[1];
          *(unsigned short *)(temp_v2 + 0xf2c) = *(unsigned short *)(pcVar5 + 2);
          *(unsigned short *)(temp_v2 + 0xf2e) = *(unsigned short *)(pcVar5 + 4);
          *(unsigned short *)(temp_v2 + 0xf30) = *(unsigned short *)(pcVar5 + 6);
          *(unsigned short *)(temp_v2 + 0xf32) = *(unsigned short *)(pcVar5 + 8);
          *(unsigned char *)(temp_v2 + 0xf2a) = 0;
          *(unsigned char *)(temp_v2 + 0xf2b) = 0;
          FUN_00267074(temp_v7);
        }
        temp_v7 = temp_v7 + 1;
      }
      pcVar12 = pcVar12 + 1;
      temp_v2 = FUN_002671bc();
    } while ((int)pcVar12 < temp_v2);
  }
  return;
}

} /* extern "C" */
