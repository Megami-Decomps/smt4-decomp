/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00274230` (_code @ 0x274230, 0x7d4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int *DAT_00447e88; /* 0x447e88 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern signed char DAT_0049f93e; /* 0x49f93e */
extern signed char DAT_0049fa98; /* 0x49fa98 */
extern unsigned char DAT_0049fab5; /* 0x49fab5 */
extern signed char DAT_0049fabc; /* 0x49fabc */
extern unsigned int DAT_0049fac0; /* 0x49fac0 */
extern unsigned int DAT_0049fac4; /* 0x49fac4 */
extern unsigned int DAT_0049fbac; /* 0x49fbac */
extern unsigned int DAT_0049fbb0; /* 0x49fbb0 */
extern int DAT_0049fc88; /* 0x49fc88 */

/* Supplied declaration required: FUN_0020fe84. */
extern int FUN_0025be50(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0025beb8. */
/* Supplied declaration required: FUN_0025bffc. */
/* Supplied declaration required: FUN_0025c064. */
/* Supplied declaration required: FUN_0027fbbc. */
/* Supplied declaration required: FUN_0027ff10. */
/* Supplied declaration required: FUN_00287300. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_002940ac. */
/* Supplied declaration required: FUN_0029411c. */
/* Supplied declaration required: FUN_002946f4. */
/* Supplied declaration required: FUN_00297920. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a5930. */
/* Supplied declaration required: FUN_002a5a54. */
extern int FUN_002b66ec(void);
extern int *FUN_0033534c(int);
/* Supplied declaration required: FUN_00335414. */
/* Supplied declaration required: FUN_00343e90. */


void FUN_00274230(void)

{
/* irregular: 2 goto(s); 18 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  int *piVar3;
  int *piVar4;
  unsigned int temp_v0;
  int temp_v1;
  int *piVar7;
  int temp_v2;
  int temp_v3;
  int *temp_v4;
  int temp_v5;
  
  if ((0 < DAT_00447e88[100]) && (DAT_00447e88[99] != -1)) {
    FUN_0025c064();
    DAT_00447e88[100] = DAT_00447e88[100] - 1;
  }
  if ((char)DAT_00447e88[0x4d] == '\0') {
    return;
  }
  if ((char)DAT_00447e88[0x66] != '\0') {
    temp_v0 = 0;
    do {
      piVar7 = DAT_00447e88;
      piVar3 = (int *)DAT_00447e88[temp_v0 + 0x6a];
      piVar4 = (int *)DAT_00447e88[temp_v0 + 0x67];
      if (piVar3 != piVar4) {
        DAT_00447e88[temp_v0 + 0x67] = (int)piVar3;
        if (temp_v0 < 3) {
          piVar4 = (int *)0x1c0;
        }
        FUN_00343e90(piVar7[0x65],temp_v0 & 0xff,piVar3,piVar4);
      }
      temp_v0 = temp_v0 + 1;
    } while ((int)temp_v0 < 3);
  }
  else {
    temp_v2 = FUN_002b66ec();
    piVar3 = DAT_00447e88;
    if ((short)DAT_00447e88[0x6d] != *(short *)(temp_v2 + 6)) {
      *(short *)(DAT_00447e88 + 0x6d) = *(short *)(temp_v2 + 6);
      FUN_002946f4(piVar3[0x65],0,0x1c0);
    }
    piVar3 = DAT_00447e88;
    if (*(short *)((int)DAT_00447e88 + 0x1b6) != *(short *)(temp_v2 + 8)) {
      *(short *)((int)DAT_00447e88 + 0x1b6) = *(short *)(temp_v2 + 8);
      FUN_002946f4(piVar3[0x65],1,0x1c0);
    }
    piVar7 = DAT_00447e88;
    piVar3 = DAT_00447e88 + 0x40;
    if ((short)DAT_00447e88[0x6e] != *(short *)(temp_v2 + 10)) {
      *(short *)(DAT_00447e88 + 0x6e) = *(short *)(temp_v2 + 10);
      piVar3 = (int *)0x1c0;
      FUN_002946f4(piVar7[0x65],2);
    }
  }
  FUN_00297920(DAT_00447e88[0x65]);
  temp_v2 = 0;
  if ((*DAT_00447e88 == 0x1d || *DAT_00447e88 == 0x21) || (DAT_0049f93e != '\0')) {
    temp_v3 = 0;
    piVar7 = (int *)0xc7c34f80;
    temp_v4 = (int *)0xc7c34f80;
    temp_v5 = 0;
    FUN_0029411c(DAT_00447e88[0x65],&temp_v3);
  }
  else {
    temp_v3 = DAT_00447e88[7];
    piVar3 = (int *)DAT_00447e88[8];
    temp_v5 = DAT_00447e88[9];
    temp_v4 = piVar3;
    FUN_0029411c(DAT_00447e88[0x65],&temp_v3);
    FUN_00335414(DAT_00447e88[0x65]);
    piVar7 = (int *)0x3f800000;
    FUN_002940ac(DAT_00447e88[0x65]);
  }
  temp_v1 = 0;
  if ((char)DAT_00447e88[0x17] == '\0') {
    piVar1 = (int *)FUN_0033534c(DAT_00447e88[0x65]);
    piVar4 = DAT_00447e88;
    piVar3 = (int *)DAT_00447e88[0x15];
    if (piVar1 != piVar3) goto LAB_00274444;
    DAT_00447e88[0x18] = DAT_00447e88[0x18] + 1;
    FUN_0027fbbc(piVar4[0x65]);
    if (DAT_00447e88[0x15] != 2) {
      if ((DAT_00447e88[0x15] == 0x12) &&
         ((((temp_v2 = DAT_00447e88[0x19], temp_v2 < 0x41f00000 &&
            (piVar3 = piVar7, (int)piVar7 >= 0x41f00000)) ||
           (((temp_v2 < 0x42940000 && (piVar3 = piVar7, (int)piVar7 >= 0x42940000)) ||
            ((temp_v2 < 0x41000000 && ((int)piVar7 >= 0x41000000)))))) ||
          ((temp_v2 < 0x42500000 && ((int)piVar7 >= 0x42500000)))))) {
        FUN_0025bffc();
        FUN_0025beb8();
        FUN_0027ff10(0xffffffff);
      }
    }
    else if (((DAT_00447e88[0x19] < 0x40000000) && ((int)piVar7 >= 0x40000000)) ||
            ((DAT_00447e88[0x19] < 0x41300000 && ((int)piVar7 >= 0x41300000)))) {
      FUN_0025bffc();
      FUN_0025beb8();
      FUN_0027ff10(0xffffffff);
    }
    DAT_00447e88[0x19] = (int)piVar7;
  }
  else {
LAB_00274444:
    piVar7 = DAT_00447e88;
    *(unsigned char *)(DAT_00447e88 + 0x17) = 0;
    piVar7[0x18] = 0;
    FUN_0020fe84(piVar7[0x65],piVar7[0x15]);
    DAT_00447e88[0x19] = temp_v2;
  }
  puVar2 = (unsigned int *)DAT_00447e88[0x5e];
  if (puVar2 != (unsigned int *)0x0) {
    piVar3 = (int *)DAT_00447e88[0x5f];
  }
  if (puVar2 == (unsigned int *)0x0 || piVar3 == (int *)0x0) {
    return;
  }
  if (DAT_00447e88[0x59] == 0) {
    return;
  }
  if (DAT_0049f934 != '\0') {
    if ((*puVar2 & 2) == 0) {
      *puVar2 = *puVar2 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
    }
    puVar2 = (unsigned int *)DAT_00447e88[0x5f];
    if ((*puVar2 & 2) == 0) {
      *puVar2 = *puVar2 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
    }
  }
  else {
    temp_v0 = *puVar2;
    if (*(char *)((int)DAT_00447e88 + 0x182) != '\0') {
      if ((temp_v0 & 2) != 0) {
        *puVar2 = temp_v0 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
      }
    }
    else if ((temp_v0 & 2) == 0) {
      *puVar2 = temp_v0 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
    }
    temp_v3 = DAT_00447e88[7];
    temp_v4 = (int *)DAT_00447e88[8];
    temp_v5 = DAT_00447e88[9];
    FUN_0028c8a8(*(unsigned int *)(DAT_00447e88[0x5e] + 8),0,&temp_v3);
    FUN_0028c880(*(unsigned int *)(DAT_00447e88[0x5e] + 8),0);
    if (*(char *)((int)DAT_00447e88 + 0x183) != '\0') {
      FUN_002a5a54(*(unsigned int *)(DAT_00447e88[0x5e] + 8),1);
      FUN_00287300(*(unsigned int *)(DAT_00447e88[0x5e] + 8),1);
      FUN_002a5930(*(unsigned int *)(DAT_00447e88[0x5e] + 8),1);
      piVar3 = DAT_00447e88;
      *(unsigned char *)((int)DAT_00447e88 + 0x183) = 0;
      *(unsigned char *)(piVar3 + 0x61) = 0;
    }
    puVar2 = (unsigned int *)DAT_00447e88[0x5f];
    if (puVar2 != (unsigned int *)0x0) {
      temp_v0 = *puVar2;
      if ((char)DAT_00447e88[0x60] != '\0') {
        if ((temp_v0 & 2) != 0) {
          *puVar2 = temp_v0 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
        }
      }
      else if ((temp_v0 & 2) == 0) {
        *puVar2 = temp_v0 | 2;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
      }
      temp_v3 = DAT_00447e88[7];
      temp_v4 = (int *)DAT_00447e88[8];
      temp_v5 = DAT_00447e88[9];
      FUN_0028c8a8(*(unsigned int *)(DAT_00447e88[0x5f] + 8),0,&temp_v3);
      FUN_0028c880(*(unsigned int *)(DAT_00447e88[0x5f] + 8),0);
      piVar3 = DAT_00447e88;
      if (*(char *)((int)DAT_00447e88 + 0x181) != '\0') {
        *(unsigned char *)((int)DAT_00447e88 + 0x181) = 0;
        FUN_002a5a54(*(unsigned int *)(piVar3[0x5f] + 8),0);
        FUN_00287300(*(unsigned int *)(DAT_00447e88[0x5f] + 8),0);
        FUN_002a5930(*(unsigned int *)(DAT_00447e88[0x5f] + 8),0);
      }
    }
  }
  if ((DAT_00447e88[0x5c] == 0) && (puVar2 = (unsigned int *)DAT_00447e88[0x59], puVar2 != (unsigned int *)0x0)) {
    temp_v0 = *puVar2;
    if (DAT_0049fa98 != '\0') {
      if ((temp_v0 & 2) != 0) {
        *puVar2 = temp_v0 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
      }
LAB_0027488c:
      FUN_0028c8a8(*(unsigned int *)(DAT_00447e88[0x59] + 8),0,DAT_00447e88 + 7);
      FUN_0028c880(*(unsigned int *)(DAT_00447e88[0x59] + 8),0);
      temp_v1 = DAT_00447e88[0x5a];
      piVar3 = DAT_00447e88;
      if (temp_v1 != DAT_00447e88[0x5b]) {
        piVar3[0x5b] = temp_v1;
        FUN_002a5a54(*(unsigned int *)(piVar3[0x59] + 8));
        FUN_00287300(*(unsigned int *)(DAT_00447e88[0x59] + 8),DAT_00447e88[0x5a]);
      }
    }
    else {
      if ((temp_v0 & 2) != 0) goto LAB_0027488c;
      *puVar2 = temp_v0 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
      piVar3 = DAT_00447e88;
      DAT_00447e88[0x5a] = 0;
      piVar3[0x5b] = temp_v1;
      FUN_002a5a54(*(unsigned int *)(piVar3[0x59] + 8));
      FUN_00287300(*(unsigned int *)(DAT_00447e88[0x59] + 8),DAT_00447e88[0x5a]);
    }
  }
  if (DAT_0049fabc != '\0') {
    temp_v0 = DAT_0049fac0;
    if (DAT_0049fac0 == 2) {
      temp_v0 = (unsigned int)DAT_0049fab5;
    }
    if ((DAT_0049fac0 == 2 && temp_v0 == 0) && (DAT_0049fc88 != 0)) {
      temp_v2 = FUN_0025be50(DAT_0049fbac,DAT_0049fbb0,7);
      DAT_00447e88[0x5d] = temp_v2;
      FUN_002a06c8(temp_v2,1);
      FUN_0028c8a8(*(unsigned int *)(DAT_00447e88[0x5d] + 8),0,&DAT_0049fac4);
      FUN_0028c880(*(unsigned int *)(DAT_00447e88[0x5d] + 8),0);
      FUN_002a5a54(*(unsigned int *)(DAT_00447e88[0x5d] + 8),0);
      FUN_00287300(*(unsigned int *)(DAT_00447e88[0x5d] + 8),0);
    }
    DAT_0049fac0 = DAT_0049fac0 + 1;
    if ((int)DAT_0049fac0 >= 0x33) {
      DAT_0049fabc = '\0';
      DAT_0049fac0 = 0;
    }
  }
  return;
}
