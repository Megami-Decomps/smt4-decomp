/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0bc0` (_code @ 0x3d0bc0, 0xc4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int FUN_00312830(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_002b2748(...); /* 0x2b2748 */
extern int FUN_002b2bbc(...); /* 0x2b2bbc */
extern int FUN_002ce1d8(...); /* 0x2ce1d8 */
extern int FUN_002ce22c(...); /* 0x2ce22c */
extern int FUN_002ce2a0(...); /* 0x2ce2a0 */
extern int FUN_002ce304(...); /* 0x2ce304 */
extern int FUN_002ce378(...); /* 0x2ce378 */
extern int FUN_002ce3ec(...); /* 0x2ce3ec */
extern int FUN_002ce460(...); /* 0x2ce460 */
extern int FUN_002ce4d4(...); /* 0x2ce4d4 */
extern int FUN_002ce520(...); /* 0x2ce520 */
extern int FUN_002fd7c0(...); /* 0x2fd7c0 */
extern int FUN_002fd824(...); /* 0x2fd824 */
extern int FUN_002fd8e4(...); /* 0x2fd8e4 */
extern int FUN_002fdd2c(...); /* 0x2fdd2c */
extern int FUN_002fdd80(...); /* 0x2fdd80 */
extern int FUN_002fdec8(...); /* 0x2fdec8 */
extern int FUN_00321a98(...); /* 0x321a98 */
extern int FUN_00321b8c(...); /* 0x321b8c */
extern int FUN_0034f028(...); /* 0x34f028 */
extern int FUN_0034f4f0(...); /* 0x34f4f0 */
extern int FUN_0034f558(...); /* 0x34f558 */
extern int FUN_0034f678(...); /* 0x34f678 */
extern int FUN_0035feb0(...); /* 0x35feb0 */
extern int FUN_0035ff04(...); /* 0x35ff04 */
extern int FUN_0035ff78(...); /* 0x35ff78 */
extern int FUN_0035ffcc(...); /* 0x35ffcc */
extern unsigned char LAB_00360030; /* 0x360030 */
extern int FUN_003600a4(...); /* 0x3600a4 */
extern int FUN_00360118(...); /* 0x360118 */
extern int FUN_0036018c(...); /* 0x36018c */
extern int FUN_00360200(...); /* 0x360200 */
extern int FUN_0036024c(...); /* 0x36024c */
extern int FUN_0036027c(...); /* 0x36027c */
extern int FUN_003602d0(...); /* 0x3602d0 */
extern int FUN_0036031c(...); /* 0x36031c */
extern int FUN_00375874(...); /* 0x375874 */
extern int FUN_003758d8(...); /* 0x3758d8 */
extern int FUN_00375998(...); /* 0x375998 */
extern int FUN_00375aa8(...); /* 0x375aa8 */
extern int FUN_00375afc(...); /* 0x375afc */
extern int FUN_00375b54(...); /* 0x375b54 */
extern int FUN_003811ec(...); /* 0x3811ec */
extern int FUN_003812e0(...); /* 0x3812e0 */
extern int FUN_0039ec5c(...); /* 0x39ec5c */
extern int FUN_0039ecc4(...); /* 0x39ecc4 */
extern int FUN_003aa0b4(...); /* 0x3aa0b4 */
extern int FUN_003aa108(...); /* 0x3aa108 */
extern int FUN_003aa154(...); /* 0x3aa154 */
extern int FUN_003aa180(...); /* 0x3aa180 */
extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: qsort. */
extern int FUN_0026140c(void);
extern unsigned int FUN_002c2c68(int);
/* Supplied declaration required: FUN_00312830. */


void FUN_003d0bc0(int param_1)

{
/* irregular: 5 goto(s); 51 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *pbVar5;
  int temp_v4;
  int temp_v5;
  
  temp_v3 = DAT_0057f108;
  temp_v1 = FUN_0026140c();
  pbVar5 = (unsigned char *)0x0;
  temp_v4 = 0;
  temp_v5 = 0;
  if (param_1 != 0x18) {
    if (param_1 < 0x18) {
      switch(param_1) {
      case 9:
        pbVar5 = (unsigned char *)(temp_v1 + 1);
        temp_v1 = temp_v3 + 0x1b70;
        temp_v3 = temp_v3 + 0x1ec;
        if ((*pbVar5 & 0x7f) == 0xb) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_003811ec);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_00321a98);
          }
        }
        if ((*pbVar5 & 0x7f) == 0x20) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_00375998);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_002fd8e4);
          }
        }
        if ((*pbVar5 & 0x7f) == 0xd) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_0034f028);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_002b2748);
          }
        }
        if ((*pbVar5 & 0x7f) == 0xf) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_003812e0);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_00321b8c);
          }
        }
        if ((*pbVar5 & 0x7f) == 0x11) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_00375874);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,8,FUN_002fd7c0);
          }
        }
        if ((*pbVar5 & 0x7f) != 3) {
          return;
        }
        if ((char)*pbVar5 < '\0') {
          temp_v2 = FUN_002c2c68(temp_v3);
          FUN_00312830(temp_v1,temp_v2,8,FUN_003758d8);
          return;
        }
        temp_v2 = FUN_002c2c68(temp_v3);
        FUN_00312830(temp_v1,temp_v2,8,FUN_002fd824);
        return;
      default:
        return;
      case 0xb:
        pbVar5 = (unsigned char *)(temp_v1 + 3);
        temp_v1 = temp_v3 + 0x21b0;
        temp_v3 = temp_v3 + 0xc0;
        if ((*pbVar5 & 0x7f) == 0xc) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,2,FUN_00375b54);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,2,FUN_002fdec8);
          }
        }
        if ((*pbVar5 & 0x7f) == 0x10) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,2,FUN_003602d0);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,2,FUN_002ce4d4);
          }
        }
        if ((*pbVar5 & 0x7f) != 3) {
          return;
        }
        if ((char)*pbVar5 < '\0') {
          temp_v2 = FUN_002c2c68(temp_v3);
          FUN_00312830(temp_v1,temp_v2,2,FUN_0036031c);
          return;
        }
        temp_v2 = FUN_002c2c68(temp_v3);
        FUN_00312830(temp_v1,temp_v2,2,FUN_002ce520);
        return;
      case 0xe:
        pbVar5 = (unsigned char *)(temp_v1 + 4);
        temp_v1 = temp_v3 + 0x2a78;
        temp_v3 = temp_v3 + 0x188;
        if ((*pbVar5 & 0x7f) == 0x21) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,2,FUN_003aa154);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,2,FUN_0036024c);
          }
        }
        if ((*pbVar5 & 0x7f) == 0x10) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,2,FUN_003aa108);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v1,temp_v2,2,FUN_00360200);
          }
        }
        if ((*pbVar5 & 0x7f) != 3) {
          return;
        }
        if ((char)*pbVar5 < '\0') {
          temp_v2 = FUN_002c2c68(temp_v3);
          FUN_00312830(temp_v1,temp_v2,2,FUN_003aa180);
          return;
        }
        temp_v2 = FUN_002c2c68(temp_v3);
        FUN_00312830(temp_v1,temp_v2,2,FUN_0036027c);
        return;
      case 0x13:
      case 0x14:
LAB_003d1140:
        if (param_1 == 0x13 || param_1 == 0x48) {
          pbVar5 = (unsigned char *)(temp_v1 + 5);
          temp_v5 = temp_v3 + 0x2b68;
          temp_v4 = temp_v3 + 0x2b4;
        }
        if (param_1 == 0x14 || param_1 == 0x49) {
          pbVar5 = (unsigned char *)(temp_v1 + 6);
          temp_v5 = temp_v3 + 0x2c58;
          temp_v4 = temp_v3 + 0x318;
        }
        if ((*pbVar5 & 0x7f) == 6) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v4);
            qsort(temp_v5,temp_v2,2,FUN_0035ffcc);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v4);
            qsort(temp_v5,temp_v2,2,FUN_002ce2a0);
          }
        }
        if ((*pbVar5 & 0x7f) == 0x11) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v4);
            qsort(temp_v5,temp_v2,2,FUN_003aa0b4);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v4);
            qsort(temp_v5,temp_v2,2,FUN_0035ff78);
          }
        }
        if ((*pbVar5 & 0x7f) == 0x12) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v4);
            qsort(temp_v5,temp_v2,2,FUN_0039ec5c);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v4);
            qsort(temp_v5,temp_v2,2,FUN_0034f4f0);
          }
        }
        if ((*pbVar5 & 0x7f) != 3) {
          return;
        }
        if ((char)*pbVar5 < '\0') {
          temp_v2 = FUN_002c2c68(temp_v4);
          FUN_00312830(temp_v5,temp_v2,2,FUN_00375aa8);
          return;
        }
        temp_v2 = FUN_002c2c68(temp_v4);
        FUN_00312830(temp_v5,temp_v2,2,FUN_002fdd2c);
        return;
      case 0x15:
LAB_003d0c64:
        pbVar5 = (unsigned char *)(temp_v1 + 7);
        temp_v4 = temp_v3 + 0x2d48;
        temp_v3 = temp_v3 + 0x37c;
        if ((*pbVar5 & 0x7f) == 6) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v4,temp_v2,2,FUN_0035ffcc);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v4,temp_v2,2,FUN_002ce2a0);
          }
        }
        if ((*pbVar5 & 0x7f) == 0x1f) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v4,temp_v2,2,FUN_00375afc);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v4,temp_v2,2,FUN_002fdd80);
          }
        }
        if ((*pbVar5 & 0x7f) == 0x13) {
          if ((char)*pbVar5 < '\0') {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v4,temp_v2,2,FUN_0035feb0);
          }
          else {
            temp_v2 = FUN_002c2c68(temp_v3);
            qsort(temp_v4,temp_v2,2,FUN_002ce1d8);
          }
        }
        temp_v0 = *pbVar5;
        if ((temp_v0 & 0x7f) != 3) {
          return;
        }
        if ((char)temp_v0 < '\0') {
          temp_v2 = FUN_002c2c68(temp_v3);
          FUN_00312830(temp_v4,temp_v2,2,FUN_00375aa8);
          return;
        }
        temp_v2 = FUN_002c2c68(temp_v3);
        FUN_00312830(temp_v4,temp_v2,2,FUN_002fdd2c);
        return;
      case 0x16:
      case 0x17:
        goto LAB_003d1414;
      }
    }
    if (param_1 != 0x4b) {
      if (param_1 < 0x4b) {
        if (param_1 != 0x19) {
          if (param_1 == 0x48 || param_1 == 0x49) goto LAB_003d1140;
          if (param_1 != 0x4a) {
            return;
          }
          goto LAB_003d0c64;
        }
      }
      else {
        if (param_1 == 0x4c || param_1 == 0x4d) goto LAB_003d1414;
        if (param_1 != 0x4e) {
          return;
        }
      }
      temp_v4 = temp_v3 + 0x307c;
      temp_v3 = temp_v3 + 0x50c;
      if ((*(unsigned char *)(temp_v1 + 0xb) & 0x7f) == 0x33) {
        if ((char)*(unsigned char *)(temp_v1 + 0xb) < '\0') {
          temp_v2 = FUN_002c2c68(temp_v3);
          qsort(temp_v4,temp_v2,2,FUN_0039ecc4);
        }
        else {
          temp_v2 = FUN_002c2c68(temp_v3);
          qsort(temp_v4,temp_v2,2,FUN_0034f558);
        }
      }
      temp_v0 = *(unsigned char *)(temp_v1 + 0xb);
      if ((temp_v0 & 0x7f) != 3) {
        return;
      }
      if ((char)temp_v0 < '\0') {
        temp_v2 = FUN_002c2c68(temp_v3);
        FUN_00312830(temp_v4,temp_v2,2,FUN_00375aa8);
        return;
      }
      temp_v2 = FUN_002c2c68(temp_v3);
      FUN_00312830(temp_v4,temp_v2,2,FUN_002fdd2c);
      return;
    }
LAB_003d1414:
    if (param_1 != 0x16) goto LAB_003d141c;
    pbVar5 = (unsigned char *)(temp_v1 + 8);
    temp_v5 = temp_v3 + 0x2dac;
    temp_v4 = temp_v3 + 0x3e0;
  }
  else {
LAB_003d141c:
    if (param_1 == 0x4b) {
      pbVar5 = (unsigned char *)(temp_v1 + 8);
      temp_v5 = temp_v3 + 0x2dac;
      temp_v4 = temp_v3 + 0x3e0;
    }
  }
  if (param_1 == 0x17 || param_1 == 0x4c) {
    pbVar5 = (unsigned char *)(temp_v1 + 9);
    temp_v5 = temp_v3 + 0x2e9c;
    temp_v4 = temp_v3 + 0x444;
  }
  if (param_1 == 0x18 || param_1 == 0x4d) {
    pbVar5 = (unsigned char *)(temp_v1 + 10);
    temp_v5 = temp_v3 + 0x2f8c;
    temp_v4 = temp_v3 + 0x4a8;
  }
  if ((*pbVar5 & 0x7f) == 4) {
    if ((char)*pbVar5 < '\0') {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_0034f678);
    }
    else {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_002b2bbc);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x24) {
    if ((char)*pbVar5 < '\0') {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_0036018c);
    }
    else {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_002ce460);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x25) {
    if ((char)*pbVar5 < '\0') {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,&LAB_00360030);
    }
    else {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_002ce304);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x26) {
    if ((char)*pbVar5 < '\0') {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_00360118);
    }
    else {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_002ce3ec);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x27) {
    if ((char)*pbVar5 < '\0') {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_0035ff04);
    }
    else {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_002ce22c);
    }
  }
  if ((*pbVar5 & 0x7f) == 0x28) {
    if ((char)*pbVar5 < '\0') {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_003600a4);
    }
    else {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_002ce378);
    }
  }
  if ((*pbVar5 & 0x7f) == 3) {
    if ((char)*pbVar5 < '\0') {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_00375aa8);
    }
    else {
      temp_v2 = FUN_002c2c68(temp_v4);
      qsort(temp_v5,temp_v2,2,FUN_002fdd2c);
    }
  }
  if ((*pbVar5 & 0x7f) != 0x32) {
    return;
  }
  if ((char)*pbVar5 < '\0') {
    temp_v2 = FUN_002c2c68(temp_v4);
    FUN_00312830(temp_v5,temp_v2,2,0x39ecf0);
    return;
  }
  temp_v2 = FUN_002c2c68(temp_v4);
  FUN_00312830(temp_v5,temp_v2,2,0x34f588);
  return;
}

} /* extern "C" */
