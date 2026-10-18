/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029bc30` (_code @ 0x29bc30, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018bfec(); /* 0x18bfec */
extern int FUN_001a15b0(); /* 0x1a15b0 */
extern int FUN_001c87d8(); /* 0x1c87d8 */
extern unsigned char LAB_001c8874; /* 0x1c8874 */
extern int DAT_0043da2c; /* 0x43da2c */
extern unsigned int *DAT_0044dc20; /* 0x44dc20 */

/* Supplied declaration required: FUN_00289b4c. */
extern unsigned int FUN_00292e94(void);
/* Supplied declaration required: FUN_00292eb0. */
/* Supplied declaration required: FUN_00292f44. */
/* Supplied declaration required: FUN_002954b8. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_0029c768. */
/* Supplied declaration required: FUN_0029e260. */
/* Supplied declaration required: FUN_0029eb14. */
/* Supplied declaration required: FUN_0029f10c. */
extern unsigned int *FUN_002a8a08(void);
/* Supplied declaration required: FUN_002a8a8c. */
/* Supplied declaration required: FUN_002aa268. */
/* Supplied declaration required: FUN_002aea28. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_003b7d78. */


unsigned int * FUN_0029bc30(void)

{
/* irregular: 2 goto(s); 23 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  char *pcVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar8;
  int temp_v5;
  int *piVar10;
  
  if (DAT_0044dc20 != (unsigned int *)0x0) {
    return DAT_0044dc20;
  }
  FUN_00289b4c();
  temp_v2 = FUN_002c4b84(0x100,0x100,0,0xd658,1);
  pcVar5 = "Result CALC";
  DAT_0044dc20 = (unsigned int *)temp_v2;
  FUN_002c5978("Result CALC",2,0,0,FUN_0018bfec,FUN_001c87d8,0);
  puVar8 = (unsigned int *)(temp_v2 + 0xd644);
  *puVar8 = (unsigned int)pcVar5;
  FUN_002c4c00("Result DrawUpLeft",0x80,0,0,FUN_001a15b0,0,0,pcVar5);
  FUN_002c4c00("Result DrawUpRight",0xde,0,0,FUN_001a15b0,0,0,*puVar8);
  pcVar5 = "Result DDRAW";
  FUN_002c4c00("Result DDRAW",0xe6,0,0,&LAB_001c8874,0,0,*puVar8);
  *(char **)(temp_v2 + 0xd64c) = pcVar5;
  FUN_003b7d78(temp_v2);
  *(unsigned char *)(temp_v2 + 0x3560) = 0;
  piVar10 = (int *)(temp_v2 + 0x352c);
  *(int *)(temp_v2 + 0x3530) = *piVar10;
  *piVar10 = 1;
  *(unsigned int *)(temp_v2 + 0x3534) = 0;
  *(unsigned int *)(temp_v2 + 0x353c) = 0;
  *(unsigned int *)(temp_v2 + 0x3544) = 0;
  temp_v3 = 0;
  if (temp_v3 < *(short *)(temp_v2 + 0x357c)) {
    do {
      FUN_002b9008();
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(short *)(temp_v2 + 0x357c));
  }
  *(unsigned short *)(temp_v2 + 0x357c) = 0;
  temp_v3 = *piVar10;
  if (temp_v3 == 0xe) {
    temp_v4 = 0xdf;
  }
  else if (temp_v3 < 0xf) {
    if (temp_v3 == 1) {
      temp_v4 = 0x62;
    }
    else if (temp_v3 == 10) {
      temp_v4 = 0x9e;
    }
    else if (temp_v3 == 0xb) {
      temp_v4 = 0x65;
    }
    else {
      if (temp_v3 != 0xd) goto LAB_00296b18;
      temp_v4 = 0x66;
    }
  }
  else if (temp_v3 == 0xf) {
    temp_v4 = 0x68;
  }
  else if (temp_v3 == 0x10) {
    temp_v4 = 0x6a;
  }
  else if (temp_v3 == 0x11) {
    temp_v4 = 0xe1;
  }
  else {
    if (temp_v3 != 0x12) goto LAB_00296b18;
    temp_v4 = 100;
  }
  FUN_0029f10c(0,0x323232ff);
  FUN_002b8b78(temp_v4);
LAB_00296b18:
  if ((unsigned int *)*piVar10 != (unsigned int *)0x14) {
    return (unsigned int *)*piVar10;
  }
  FUN_0029a3c4(0);
  FUN_00292f44(0);
  FUN_0029e260(0);
  FUN_0029eb14(0);
  FUN_0029c768(0);
  FUN_00292eb0();
  temp_v1 = FUN_00292e94();
  if ((temp_v1 != 0) && (puVar3 = (unsigned int *)FUN_002a8a08(), temp_v1 <= *puVar3)) {
    *piVar10 = 0x13;
    FUN_002b8b78(0x90);
    temp_v2 = *(int *)(temp_v2 + 0x3568);
    if (*(int *)(*(int *)(temp_v2 + 0xb0) + 8) >= 6) {
      for (temp_v3 = 0; temp_v0 = *(char *)(*(int *)(temp_v2 + 0xb4) + temp_v3 + 0xa0),
          *(char *)(temp_v2 + temp_v3) = temp_v0, temp_v0 != '\0'; temp_v3 = temp_v3 + 1) {
      }
      temp_v4 = *(unsigned int *)(*(int *)(temp_v2 + 0xb4) + 0xb8);
      *(unsigned int *)(temp_v2 + 0x1c) = 0;
      *(unsigned int *)(temp_v2 + 0x20) = 0;
      *(unsigned int *)(temp_v2 + 0x24) = 0;
      *(unsigned int *)(temp_v2 + 0x28) = 0;
      *(unsigned int *)(temp_v2 + 0x2c) = 0;
      *(unsigned int *)(temp_v2 + 0x30) = 0;
      *(unsigned int *)(temp_v2 + 0x34) = 0;
      *(unsigned int *)(temp_v2 + 0x18) = temp_v4;
      *(unsigned int *)(temp_v2 + 0x38) = 0;
      FUN_002c4b30(temp_v2 + 0x3c,0x70);
      *(unsigned int *)(temp_v2 + 200) = 5;
      *(unsigned int *)(temp_v2 + 0xcc) = 0;
      *(unsigned int *)(temp_v2 + 0xd0) = 0;
      return (unsigned int *)0x1;
    }
    return (unsigned int *)0x0;
  }
  FUN_002954b8(0);
  temp_v3 = FUN_002aea28(*(unsigned char *)(DAT_0043da2c + 0x4c9));
  puVar8 = (unsigned int *)FUN_002aea28(3);
  temp_v2 = DAT_0043da2c;
  if (temp_v3 != 0 && puVar8 != (unsigned int *)0x0) {
    if (*(char *)(temp_v3 + 0xc) != '\0') {
      temp_v3 = 0;
      do {
        FUN_002bf030(temp_v2 + temp_v3 * 0x8c + 0x34,1);
        temp_v5 = temp_v2 + temp_v3 * 4;
        temp_v0 = *(char *)(temp_v5 + 0x494);
        if (temp_v0 != '\0') {
          if (temp_v0 == '\a' || temp_v0 == '\t') {
            FUN_002a8a8c();
          }
          if (*(char *)(temp_v5 + 0x494) == '\b') {
            FUN_002a8a8c();
            FUN_002a8a8c();
          }
          FUN_002a8a8c();
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 6);
    }
    else {
      temp_v3 = 0;
      if (*(char *)(puVar8 + 3) != '\0') {
        do {
          FUN_002bf030(temp_v2 + temp_v3 * 0x8c + 0x34,1);
          temp_v5 = temp_v2 + temp_v3 * 4;
          if (*(char *)(temp_v5 + 0x494) != '\0') {
            *(unsigned char *)(temp_v5 + 0x494) = 0;
            FUN_002a8a8c();
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 6);
        temp_v3 = 0;
        do {
          temp_v5 = temp_v2 + temp_v3 * 0x8c + 0x37c;
          if (*(char *)(temp_v2 + 0x4c8) != '\x01') {
            FUN_002aa268(temp_v5,0,1);
          }
          else {
            FUN_002bdac0(temp_v5,3,0);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 2);
      }
      else {
        do {
          FUN_002bf030(temp_v2 + temp_v3 * 0x8c + 0x34,1);
          temp_v5 = temp_v2 + temp_v3 * 4;
          temp_v0 = *(char *)(temp_v5 + 0x494);
          if (temp_v0 != '\0') {
            if (temp_v0 == '\a' || temp_v0 == '\t') {
              FUN_002a8a8c();
            }
            if (*(char *)(temp_v5 + 0x494) == '\b') {
              FUN_002a8a8c();
              FUN_002a8a8c();
            }
            FUN_002a8a8c();
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 6);
      }
    }
    temp_v2 = DAT_0043da2c;
    puVar8 = (unsigned int *)(DAT_0043da2c + 0xc);
    *puVar8 = 0;
    *(unsigned int *)(temp_v2 + 0x10) = 3;
  }
  return puVar8;
}
