/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002831f0` (_code @ 0x2831f0, 0xdcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001f5e38(); /* 0x1f5e38 */
extern int FUN_001f6384(); /* 0x1f6384 */
extern int FUN_00206d38(); /* 0x206d38 */
extern int FUN_00206d8c(); /* 0x206d8c */
extern int FUN_00206dcc(); /* 0x206dcc */
extern int FUN_00206e30(); /* 0x206e30 */
extern int FUN_00206e70(); /* 0x206e70 */
extern int FUN_00206eb0(); /* 0x206eb0 */
extern int FUN_00206ef0(); /* 0x206ef0 */
extern int FUN_00206f30(); /* 0x206f30 */
extern int FUN_00206f7c(); /* 0x206f7c */
extern int FUN_00218fe8(); /* 0x218fe8 */
extern int FUN_0021904c(); /* 0x21904c */
extern int FUN_0021910c(); /* 0x21910c */
extern int FUN_002193e0(); /* 0x2193e0 */
extern int FUN_00219434(); /* 0x219434 */
extern int FUN_00219540(); /* 0x219540 */
extern int FUN_00249950(); /* 0x249950 */
extern int FUN_0025779c(); /* 0x25779c */
extern int FUN_002c6ca4(); /* 0x2c6ca4 */
extern int FUN_002dc52c(); /* 0x2dc52c */
extern int FUN_002dc5cc(); /* 0x2dc5cc */
extern int FUN_002dc6c4(); /* 0x2dc6c4 */
extern int FUN_002dcc78(); /* 0x2dcc78 */
extern int FUN_002dccd0(); /* 0x2dccd0 */
extern int FUN_002dcd38(); /* 0x2dcd38 */
extern int FUN_002dce58(); /* 0x2dce58 */
extern int FUN_002e446c(); /* 0x2e446c */
extern int FUN_002e4684(); /* 0x2e4684 */
extern int FUN_002e46d0(); /* 0x2e46d0 */
extern int FUN_002e4724(); /* 0x2e4724 */
extern int FUN_002e4764(); /* 0x2e4764 */
extern int FUN_002e47b8(); /* 0x2e47b8 */
extern int FUN_002e481c(); /* 0x2e481c */
extern int FUN_002e485c(); /* 0x2e485c */
extern int FUN_002e489c(); /* 0x2e489c */
extern int FUN_002e48dc(); /* 0x2e48dc */
extern int FUN_002e491c(); /* 0x2e491c */
extern int FUN_002e4968(); /* 0x2e4968 */
extern int FUN_002e4998(); /* 0x2e4998 */
extern int FUN_002e49ec(); /* 0x2e49ec */
extern int FUN_002e4a38(); /* 0x2e4a38 */
extern int FUN_002f25d0(); /* 0x2f25d0 */
extern int FUN_002f2634(); /* 0x2f2634 */
extern int FUN_002f26f4(); /* 0x2f26f4 */
extern int FUN_002f27a0(); /* 0x2f27a0 */
extern int FUN_002f27f4(); /* 0x2f27f4 */
extern int FUN_002f284c(); /* 0x2f284c */
extern int FUN_002f80e4(); /* 0x2f80e4 */
extern int FUN_0030bcb4(); /* 0x30bcb4 */
extern int FUN_0030bd54(); /* 0x30bd54 */
extern int FUN_0030be4c(); /* 0x30be4c */
extern int FUN_0030bea4(); /* 0x30bea4 */
extern int FUN_0030bf0c(); /* 0x30bf0c */
extern int FUN_003131e8(); /* 0x3131e8 */
extern int FUN_003132b0(); /* 0x3132b0 */
extern int FUN_003132fc(); /* 0x3132fc */
extern int FUN_00313350(); /* 0x313350 */
extern int FUN_0031339c(); /* 0x31339c */
extern int FUN_003133c8(); /* 0x3133c8 */
extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_0027f3d4. */
/* Supplied declaration required: FUN_0029f0f4. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b7f0a. */


void FUN_002831f0(int param_1)

{
/* irregular: 1 goto(s); 63 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *pbVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v3 = DAT_0043da90;
  temp_v1 = FUN_002a0fac();
  pbVar4 = (unsigned char *)0x0;
  temp_v4 = 0;
  temp_v5 = 0;
  switch(param_1) {
  case 9:
    pbVar4 = (unsigned char *)(temp_v1 + 1);
    temp_v1 = temp_v3 + 0xe3c;
    temp_v3 = temp_v3 + 0x1dc;
    if ((*pbVar4 & 0x7f) == 0xb) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_00249950);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_0025779c);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x20) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_002f26f4);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_0021910c);
      }
    }
    if ((*pbVar4 & 0x7f) == 0xd) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_002dc6c4);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_001f5e38);
      }
    }
    if ((*pbVar4 & 0x7f) == 0xf) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_002f80e4);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_002c6ca4);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x11) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_002f25d0);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,8,FUN_00218fe8);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_0027f3d4(temp_v1,temp_v2,8,FUN_002f2634);
        return;
      }
      temp_v2 = FUN_0029f0f4(temp_v3);
      FUN_0027f3d4(temp_v1,temp_v2,8,FUN_0021904c);
      return;
    }
    break;
  case 10:
    temp_v5 = 0;
    pbVar4 = (unsigned char *)(temp_v1 + 2);
    temp_v6 = temp_v3 + 0x1db4;
    temp_v4 = 0;
    temp_v1 = FUN_0029f0f4(temp_v3 + 0x240);
    if (0 < temp_v1) {
      do {
        temp_v1 = temp_v4 * 2;
        temp_v4 = temp_v4 + 1;
        if (*(short *)(temp_v3 + temp_v1 + 0x1db4) != 0) {
          temp_v5 = temp_v5 + 1;
        }
        temp_v1 = FUN_0029f0f4(temp_v3 + 0x240);
      } while (temp_v4 < temp_v1);
    }
    if ((*pbVar4 & 0x7f) == 0xb) {
      if ((char)*pbVar4 < '\0') {
        FUN_002b7f0a(temp_v6,temp_v5,2,FUN_003132b0);
      }
      else {
        FUN_002b7f0a(temp_v6,temp_v5,2,FUN_002e4684);
      }
    }
    if ((*pbVar4 & 0x7f) == 0xe) {
      if ((char)*pbVar4 < '\0') {
        FUN_002b7f0a(temp_v6,temp_v5,2,FUN_0030be4c);
      }
      else {
        FUN_002b7f0a(temp_v6,temp_v5,2,FUN_002dcc78);
      }
    }
    if ((*pbVar4 & 0x7f) == 0xf) {
      if ((char)*pbVar4 < '\0') {
        FUN_002b7f0a(temp_v6,temp_v5,2,FUN_003131e8);
      }
      else {
        FUN_002b7f0a(temp_v6,temp_v5,2,FUN_002e446c);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x11) {
      if ((char)*pbVar4 < '\0') {
        FUN_002b7f0a(temp_v6,temp_v5,2,FUN_0030bcb4);
      }
      else {
        FUN_002b7f0a(temp_v6,temp_v5,2,FUN_002dc52c);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        FUN_0027f3d4(temp_v6,temp_v5,2,FUN_0030bd54);
        return;
      }
      FUN_0027f3d4(temp_v6,temp_v5,2,FUN_002dc5cc);
      return;
    }
    break;
  case 0xb:
    pbVar4 = (unsigned char *)(temp_v1 + 3);
    temp_v1 = temp_v3 + 0x147c;
    temp_v3 = temp_v3 + 0xb0;
    if ((*pbVar4 & 0x7f) == 0xc) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,2,FUN_002f284c);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,2,FUN_00219540);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x10) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,2,FUN_002e49ec);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,2,FUN_00206f30);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_0027f3d4(temp_v1,temp_v2,2,FUN_002e4a38);
        return;
      }
      temp_v2 = FUN_0029f0f4(temp_v3);
      FUN_0027f3d4(temp_v1,temp_v2,2,FUN_00206f7c);
      return;
    }
    break;
  case 0xd:
    pbVar4 = (unsigned char *)(temp_v1 + 4);
    temp_v1 = temp_v3 + 0x1cc4;
    temp_v3 = temp_v3 + 0x178;
    if ((*pbVar4 & 0x7f) == 0x21) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,2,FUN_0031339c);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,2,FUN_002e4968);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x10) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,2,FUN_00313350);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v1,temp_v2,2,FUN_002e491c);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_0027f3d4(temp_v1,temp_v2,2,FUN_003133c8);
        return;
      }
      temp_v2 = FUN_0029f0f4(temp_v3);
      FUN_0027f3d4(temp_v1,temp_v2,2,FUN_002e4998);
      return;
    }
    break;
  case 0x11:
  case 0x12:
    if (param_1 != 0x11) {
      if (param_1 == 0x12) {
        pbVar4 = (unsigned char *)(temp_v1 + 6);
        temp_v5 = temp_v3 + 0x1f6c;
        temp_v4 = temp_v3 + 0x308;
      }
    }
    else {
      pbVar4 = (unsigned char *)(temp_v1 + 5);
      temp_v5 = temp_v3 + 0x1e7c;
      temp_v4 = temp_v3 + 0x2a4;
    }
    if ((*pbVar4 & 0x7f) == 6) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002e47b8);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_00206dcc);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x11) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_003132fc);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002e4764);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x12) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_0030bea4);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002dccd0);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_0027f3d4(temp_v5,temp_v2,2,FUN_002f27a0);
        return;
      }
      temp_v2 = FUN_0029f0f4(temp_v4);
      FUN_0027f3d4(temp_v5,temp_v2,2,FUN_002193e0);
      return;
    }
    break;
  case 0x13:
    pbVar4 = (unsigned char *)(temp_v1 + 7);
    temp_v4 = temp_v3 + 0x205c;
    temp_v3 = temp_v3 + 0x36c;
    if ((*pbVar4 & 0x7f) == 6) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v2,2,FUN_002e47b8);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v2,2,FUN_00206dcc);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x1f) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v2,2,FUN_002f27f4);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v2,2,FUN_00219434);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x13) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v2,2,FUN_002e46d0);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v2,2,FUN_00206d38);
      }
    }
    temp_v0 = *pbVar4;
    goto joined_r0x00283f48;
  case 0x14:
  case 0x15:
  case 0x16:
    if (param_1 != 0x14) {
      if (param_1 != 0x15) {
        if (param_1 == 0x16) {
          pbVar4 = (unsigned char *)(temp_v1 + 10);
          temp_v5 = temp_v3 + 0x22a0;
          temp_v4 = temp_v3 + 0x498;
        }
      }
      else {
        pbVar4 = (unsigned char *)(temp_v1 + 9);
        temp_v5 = temp_v3 + 0x21b0;
        temp_v4 = temp_v3 + 0x434;
      }
    }
    else {
      pbVar4 = (unsigned char *)(temp_v1 + 8);
      temp_v5 = temp_v3 + 0x20c0;
      temp_v4 = temp_v3 + 0x3d0;
    }
    if ((*pbVar4 & 0x7f) == 4) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002dce58);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_001f6384);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x24) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002e48dc);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_00206ef0);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x25) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002e481c);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_00206e30);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x26) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002e489c);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_00206eb0);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x27) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002e4724);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_00206d8c);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x28) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002e485c);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_00206e70);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002f27a0);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_002b7f0a(temp_v5,temp_v2,2,FUN_002193e0);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x32) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v4);
        FUN_0027f3d4(temp_v5,temp_v2,2,0x30bf38);
        return;
      }
      temp_v2 = FUN_0029f0f4(temp_v4);
      FUN_0027f3d4(temp_v5,temp_v2,2,0x2dcd68);
      return;
    }
    break;
  case 0x17:
    temp_v0 = *(unsigned char *)(temp_v1 + 0xb);
    temp_v4 = temp_v3 + 0x2390;
    temp_v3 = temp_v3 + 0x4fc;
    if ((temp_v0 & 0x7f) == 0x33) {
      if ((char)temp_v0 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v2,2,FUN_0030bf0c);
      }
      else {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_002b7f0a(temp_v4,temp_v2,2,FUN_002dcd38);
      }
    }
    temp_v0 = *(unsigned char *)(temp_v1 + 0xb);
joined_r0x00283f48:
    if ((temp_v0 & 0x7f) == 3) {
      if ((char)temp_v0 < '\0') {
        temp_v2 = FUN_0029f0f4(temp_v3);
        FUN_0027f3d4(temp_v4,temp_v2,2,FUN_002f27a0);
        return;
      }
      temp_v2 = FUN_0029f0f4(temp_v3);
      FUN_0027f3d4(temp_v4,temp_v2,2,FUN_002193e0);
      return;
    }
  }
  return;
}
