/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0654` (_code @ 0x1d0654, 0xc54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_0018b660. */
/* Supplied declaration required: FUN_00194dbc. */
/* Supplied declaration required: FUN_001a7f30. */
/* Supplied declaration required: FUN_001d1b1c. */
/* Supplied declaration required: FUN_001e0578. */
/* Supplied declaration required: FUN_001f4aa8. */
/* Supplied declaration required: FUN_00223c00. */
/* Supplied declaration required: FUN_00269f1c. */
/* Supplied declaration required: FUN_00269f34. */
extern int FUN_00269fb0(void);
/* Supplied declaration required: FUN_0026a004. */
/* Supplied declaration required: FUN_0026a02c. */
/* Supplied declaration required: FUN_0026a5b0. */
/* Supplied declaration required: FUN_0026a5f4. */
/* Supplied declaration required: FUN_0026a62c. */
/* Supplied declaration required: FUN_0026a7c4. */
/* Supplied declaration required: FUN_0026a800. */
/* Supplied declaration required: FUN_0026d810. */
/* Supplied declaration required: FUN_0028a5d0. */
/* Supplied declaration required: FUN_0028ab8c. */
/* Supplied declaration required: FUN_00298bdc. */
/* Supplied declaration required: FUN_00298fa8. */
extern int FUN_002994b4(int, unsigned int);
/* Supplied declaration required: FUN_0029a03c. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_0029ea14. */
/* Supplied declaration required: FUN_0029ea28. */
/* Supplied declaration required: FUN_0029eb14. */
extern unsigned int FUN_0029eba8(int);
extern int FUN_0029f0f4(int);
/* Supplied declaration required: FUN_0029f10c. */
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_002a05fc. */
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002cd2cc. */
/* Supplied declaration required: FUN_002cf6d4. */
/* Supplied declaration required: FUN_002cfb38. */
/* Supplied declaration required: FUN_002e2454. */
/* Supplied declaration required: FUN_002e32c8. */
/* Supplied declaration required: FUN_003aaef0. */
/* Supplied declaration required: FUN_003acc2c. */
/* Supplied declaration required: FUN_003acd48. */
/* Supplied declaration required: FUN_003ad13c. */
/* Supplied declaration required: FUN_003ad300. */


void FUN_001d0654(int *param_1)

{
/* irregular: 40 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  
  temp_v4 = 0;
  temp_v2 = *param_1;
  temp_v0 = FUN_0029eba8(temp_v2 + 0x34);
  temp_v1 = FUN_002994b4((int)*(char *)(temp_v2 + 0x98),temp_v0);
  switch(temp_v1) {
  case 7:
    *(unsigned char *)(temp_v2 + 0x25bd) = 1;
    FUN_0029c660(0,10,0xff);
    FUN_001a7f30(0x1e);
    return;
  case 9:
    FUN_0026a800();
    FUN_002bdac0(temp_v2 + 0x6d4,1,0);
    FUN_0026d810();
    FUN_00298bdc();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    temp_v1 = FUN_0029f0f4(temp_v2 + 0x1dc);
    if (0 < temp_v1) {
      FUN_0029eb14(1);
      FUN_0029ea28();
      FUN_00298fa8(1);
    }
    *(unsigned int *)(temp_v2 + 0x20) = 0xe;
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 4;
    return;
  case 10:
    temp_v1 = FUN_0029f0f4(temp_v2 + 0x240);
    if (temp_v1 < 1) {
      return;
    }
    FUN_0026a800();
    FUN_002bdac0(temp_v2 + 0x6d4,1,0);
    FUN_0026d810();
    FUN_003acd48();
    FUN_003ad300();
    temp_v1 = FUN_0029f260(temp_v2 + 0x240);
    temp_v4 = FUN_0029f248(temp_v2 + 0x240);
    FUN_003ad13c((int)*(short *)(temp_v2 + (temp_v4 + temp_v1) * 2 + 0x1db4));
    FUN_003acc2c();
    FUN_003aaef0();
    *(unsigned int *)(temp_v2 + 0x20) = 0x10;
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 4;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0xb:
  case 0xc:
  case 0xd:
    if (temp_v1 == 0xb) {
      temp_v4 = temp_v2 + 0xb0;
    }
    else if (temp_v1 == 0xc) {
      temp_v4 = temp_v2 + 0x114;
    }
    else if (temp_v1 == 0xd) {
      temp_v4 = temp_v2 + 0x178;
    }
    temp_v4 = FUN_0029f0f4(temp_v4);
    if (temp_v4 < 1) {
      return;
    }
    FUN_0026a800();
    FUN_002bdac0(temp_v2 + 0x6d4,1,0);
    FUN_0026d810();
    if (temp_v1 != 0xb) {
      if (temp_v1 != 0xc) {
        if (temp_v1 == 0xd) {
          *(unsigned int *)(temp_v2 + 0x20) = 0xd;
          FUN_0026a62c();
        }
      }
      else {
        temp_v0 = 0xc;
        *(unsigned int *)(temp_v2 + 0x20) = 0xc;
        FUN_0026a62c(temp_v0);
      }
    }
    else {
      *(unsigned int *)(temp_v2 + 0x20) = 10;
      temp_v0 = 0xb;
      FUN_0026a62c(temp_v0);
    }
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 4;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0xe:
    FUN_0026a800();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 0x16;
    return;
  case 0x10:
    FUN_0026a800();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 0x17;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    if (temp_v1 == 0x11) {
      temp_v4 = temp_v2 + 0x2a4;
    }
    else if (temp_v1 == 0x12) {
      temp_v4 = temp_v2 + 0x308;
    }
    else if (temp_v1 == 0x13) {
      temp_v4 = temp_v2 + 0x36c;
    }
    else if (temp_v1 == 0x14) {
      temp_v4 = temp_v2 + 0x3d0;
    }
    else if (temp_v1 == 0x15) {
      temp_v4 = temp_v2 + 0x434;
    }
    else if (temp_v1 == 0x16) {
      temp_v4 = temp_v2 + 0x498;
    }
    else if (temp_v1 == 0x17) {
      temp_v4 = temp_v2 + 0x4fc;
    }
    temp_v1 = FUN_0029f0f4(temp_v4);
    if (0 < temp_v1) {
      FUN_0026a800();
      FUN_002bdac0(temp_v2 + 0x6d4,1,0);
      FUN_0026d810();
      FUN_0026a7c4();
      FUN_0029cee4(1);
      FUN_0029eb14(1);
      FUN_0029ea28();
      *(unsigned int *)(temp_v2 + 0x20) = 0x1a;
      FUN_0029a03c(0x11);
      FUN_0029a03c(0x12);
      FUN_0029a03c(0x13);
      FUN_0029a03c(0x14);
      FUN_0029a03c(0x15);
      FUN_0029a03c(0x16);
      FUN_0029a03c(0x17);
      temp_v1 = DAT_0043da90;
      puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
      *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 4;
      return;
    }
    break;
  case 0x18:
    FUN_0026a800();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    FUN_0026a5f4(0);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 0x12;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x19:
    FUN_0026a800();
    FUN_0026d810();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    FUN_001f4aa8(0);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 0x21;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x1a:
    FUN_002e2454();
    *(int *)(temp_v2 + 0xc) = temp_v1;
    FUN_0026d810();
    FUN_0029f10c(0,0x323232ff);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 0x22;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    FUN_0026a7c4();
    FUN_0029cee4(1);
    FUN_0026a5b0();
    return;
  case 0x1b:
    FUN_0026d810();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 0x23;
    FUN_0026a02c();
    FUN_002cf6d4();
    *(unsigned char *)(temp_v2 + 0x248c) = 1;
    return;
  case 0x1c:
    FUN_0026d810();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 0x24;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    FUN_0026a02c();
    FUN_00223c00();
    *(unsigned char *)(temp_v2 + 0x248d) = 1;
    return;
  case 0x24:
    FUN_0026a800();
    FUN_002cfb38(0);
    FUN_002a05fc();
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 0x21;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    FUN_00269f34();
    return;
  case 0x25:
    FUN_0026a800();
    FUN_0026d810();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 0x2e;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x26:
    FUN_0026a800();
    FUN_0026d810();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 0x2f;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    return;
  case 0x27:
    FUN_0018b660();
    FUN_0026a800();
    FUN_002bdac0(temp_v2 + 0x6d4,1,0);
    FUN_0026d810();
    FUN_0026a7c4();
    FUN_0029cee4(1);
    *(unsigned int *)(temp_v2 + 0x20) = 0x2b;
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 4;
    return;
  case 0x29:
    FUN_00194dbc();
    FUN_0026a800();
    FUN_002bdac0(temp_v2 + 0x6d4,0);
    FUN_0026d810();
    *(unsigned int *)(temp_v2 + 0x20) = 0x2c;
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 4;
    return;
  case 0x2a:
    temp_v1 = FUN_00269fb0();
    if (temp_v1 != 0) {
      FUN_0026a800();
      FUN_0026a004(0);
      temp_v1 = DAT_0043da90;
      puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
      *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
      *puVar5 = 0x1d;
      *(unsigned int *)(temp_v1 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      FUN_00269f34();
      return;
    }
    break;
  case 0x2b:
    FUN_0026a800();
    FUN_0026a004(1);
    temp_v1 = DAT_0043da90;
    puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
    *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
    *puVar5 = 0x1d;
    *(unsigned int *)(temp_v1 + 0x1c) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    FUN_00269f34();
    return;
  case 0x2c:
    temp_v1 = FUN_00269fb0();
    if (temp_v1 != 0) {
      FUN_0026a800();
      FUN_001d1b1c(0);
      temp_v1 = DAT_0043da90;
      puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
      *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 0x21;
      FUN_002a05fc();
      FUN_00269f34();
      return;
    }
    break;
  case 0x2d:
    temp_v1 = FUN_00269fb0();
    if (temp_v1 != 0) {
      temp_v1 = FUN_002a8a08();
      temp_v3 = 0;
      if (*(char *)(temp_v1 + 0x910b) != '\0') {
        do {
          temp_v2 = (int)*(char *)(temp_v1 + temp_v3 + 0x90f0);
          if (-1 < temp_v2) {
            temp_v2 = temp_v1 + temp_v2 * 0x604 + 0x90;
            FUN_002cd2cc();
            if (temp_v2 == 0) {
              FUN_0026a800();
              FUN_001e0578(0);
              temp_v1 = DAT_0043da90;
              puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
              *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
              *puVar5 = 0x21;
              *(unsigned int *)(temp_v1 + 0x1c) = 0;
              *(unsigned int *)(temp_v1 + 0x14) = 0;
              FUN_002a05fc();
              FUN_00269f34();
              return;
            }
          }
          temp_v3 = temp_v3 + 1;
          if (*(unsigned char *)(temp_v1 + 0x910b) <= temp_v3) {
            return;
          }
        } while( 1 );
      }
    }
    break;
  case 0x2f:
    temp_v1 = FUN_00269fb0();
    if (temp_v1 != 0) {
      FUN_0026a800();
      FUN_0026a004(3);
      temp_v1 = DAT_0043da90;
      puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
      *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
      *puVar5 = 0x1d;
      *(unsigned int *)(temp_v1 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      FUN_00269f34();
      *(unsigned char *)(temp_v2 + 0x248e) = 1;
      return;
    }
    break;
  case 0x30:
    temp_v1 = FUN_00269fb0();
    if (temp_v1 != 0) {
      FUN_0026a800();
      FUN_0026a004(4);
      FUN_00269f34();
      FUN_002e32c8();
      FUN_0026a7c4();
      FUN_0029cee4(1);
      FUN_0026a5f4(1);
      FUN_0028ab8c(0xd,0,0xffffffff);
      FUN_0028a5d0(1);
      FUN_0029ea14();
      temp_v1 = DAT_0043da90;
      puVar5 = (unsigned int *)(DAT_0043da90 + 0x18);
      *(unsigned int *)(DAT_0043da90 + 0x1c) = 0;
      *(unsigned int *)(temp_v1 + 0x24) = *puVar5;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
      *(unsigned int *)(temp_v1 + 0x18) = 0x13;
      return;
    }
    break;
  case 0x31:
    *(unsigned int *)(temp_v2 + 0x20) = 0x34;
    return;
  case 0x32:
    *(unsigned int *)(temp_v2 + 0x18) = 0x31;
    FUN_00269f1c(2);
    FUN_0026d810();
    FUN_0029cee4(1);
    FUN_0026a5b0();
    return;
  case 0x33:
    *(unsigned int *)(temp_v2 + 0x18) = 0x32;
    FUN_00269f1c(1);
    FUN_0026d810();
    FUN_0029cee4(1);
    FUN_0026a5b0();
    return;
  case 0x34:
    *(unsigned int *)(temp_v2 + 0x18) = 0x33;
    FUN_00269f1c(3);
    FUN_0026d810();
    FUN_0029cee4(1);
    FUN_0026a5b0();
    return;
  }
  return;
}
