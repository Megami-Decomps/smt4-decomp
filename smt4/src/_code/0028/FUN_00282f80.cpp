/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282f80` (_code @ 0x282f80, 0xdcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027f3dc(...);
int FUN_0029ee54(...);
int FUN_002b7bca(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001f5f20(...); /* 0x1f5f20 */
extern int FUN_001f646c(...); /* 0x1f646c */
extern int FUN_00206e9c(...); /* 0x206e9c */
extern int FUN_00206ef0(...); /* 0x206ef0 */
extern int FUN_00206f30(...); /* 0x206f30 */
extern int FUN_00206f94(...); /* 0x206f94 */
extern int FUN_00206fd4(...); /* 0x206fd4 */
extern int FUN_00207014(...); /* 0x207014 */
extern int FUN_00207054(...); /* 0x207054 */
extern int FUN_00207094(...); /* 0x207094 */
extern int FUN_002070e0(...); /* 0x2070e0 */
extern int FUN_002190e4(...); /* 0x2190e4 */
extern int FUN_00219148(...); /* 0x219148 */
extern int FUN_00219208(...); /* 0x219208 */
extern int FUN_002194dc(...); /* 0x2194dc */
extern int FUN_00219530(...); /* 0x219530 */
extern int FUN_0021963c(...); /* 0x21963c */
extern int FUN_002497f8(...); /* 0x2497f8 */
extern int FUN_00257568(...); /* 0x257568 */
extern int FUN_002c6d30(...); /* 0x2c6d30 */
extern int FUN_002dc594(...); /* 0x2dc594 */
extern int FUN_002dc634(...); /* 0x2dc634 */
extern int FUN_002dc72c(...); /* 0x2dc72c */
extern int FUN_002dcce0(...); /* 0x2dcce0 */
extern int FUN_002dcd38(...); /* 0x2dcd38 */
extern int FUN_002dcda0(...); /* 0x2dcda0 */
extern int FUN_002dcec0(...); /* 0x2dcec0 */
extern int FUN_002e44e0(...); /* 0x2e44e0 */
extern int FUN_002e46f8(...); /* 0x2e46f8 */
extern int FUN_002e4744(...); /* 0x2e4744 */
extern int FUN_002e4798(...); /* 0x2e4798 */
extern int FUN_002e47d8(...); /* 0x2e47d8 */
extern int FUN_002e482c(...); /* 0x2e482c */
extern int FUN_002e4890(...); /* 0x2e4890 */
extern int FUN_002e48d0(...); /* 0x2e48d0 */
extern int FUN_002e4910(...); /* 0x2e4910 */
extern int FUN_002e4950(...); /* 0x2e4950 */
extern int FUN_002e4990(...); /* 0x2e4990 */
extern int FUN_002e49dc(...); /* 0x2e49dc */
extern int FUN_002e4a0c(...); /* 0x2e4a0c */
extern int FUN_002e4a60(...); /* 0x2e4a60 */
extern int FUN_002e4aac(...); /* 0x2e4aac */
extern int FUN_002f261c(...); /* 0x2f261c */
extern int FUN_002f2680(...); /* 0x2f2680 */
extern int FUN_002f2740(...); /* 0x2f2740 */
extern int FUN_002f27ec(...); /* 0x2f27ec */
extern int FUN_002f2840(...); /* 0x2f2840 */
extern int FUN_002f2898(...); /* 0x2f2898 */
extern int FUN_002f8120(...); /* 0x2f8120 */
extern int FUN_0030bce8(...); /* 0x30bce8 */
extern int FUN_0030bd88(...); /* 0x30bd88 */
extern int FUN_0030be80(...); /* 0x30be80 */
extern int FUN_0030bed8(...); /* 0x30bed8 */
extern int FUN_0030bf40(...); /* 0x30bf40 */
extern int FUN_00313184(...); /* 0x313184 */
extern int FUN_0031324c(...); /* 0x31324c */
extern int FUN_00313298(...); /* 0x313298 */
extern int FUN_003132ec(...); /* 0x3132ec */
extern int FUN_00313338(...); /* 0x313338 */
extern int FUN_00313364(...); /* 0x313364 */
extern int g_camp; /* 0x43da90 */

/* Supplied declaration required: FUN_0027f3dc. */
/* Supplied declaration required: FUN_0029ee54. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */


void FUN_00282f80(int param_1)

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
  
  temp_v3 = g_camp;
  temp_v1 = FUN_002a0d0c();
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
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_002497f8);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_00257568);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x20) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_002f2740);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_00219208);
      }
    }
    if ((*pbVar4 & 0x7f) == 0xd) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_002dc72c);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_001f5f20);
      }
    }
    if ((*pbVar4 & 0x7f) == 0xf) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_002f8120);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_002c6d30);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x11) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_002f261c);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,8,FUN_002190e4);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_0027f3dc(temp_v1,temp_v2,8,FUN_002f2680);
        return;
      }
      temp_v2 = FUN_0029ee54(temp_v3);
      FUN_0027f3dc(temp_v1,temp_v2,8,FUN_00219148);
      return;
    }
    break;
  case 10:
    temp_v5 = 0;
    pbVar4 = (unsigned char *)(temp_v1 + 2);
    temp_v6 = temp_v3 + 0x1db4;
    temp_v4 = 0;
    temp_v1 = FUN_0029ee54(temp_v3 + 0x240);
    if (0 < temp_v1) {
      do {
        temp_v1 = temp_v4 * 2;
        temp_v4 = temp_v4 + 1;
        if (*(short *)(temp_v3 + temp_v1 + 0x1db4) != 0) {
          temp_v5 = temp_v5 + 1;
        }
        temp_v1 = FUN_0029ee54(temp_v3 + 0x240);
      } while (temp_v4 < temp_v1);
    }
    if ((*pbVar4 & 0x7f) == 0xb) {
      if ((char)*pbVar4 < '\0') {
        FUN_002b7bca(temp_v6,temp_v5,2,FUN_0031324c);
      }
      else {
        FUN_002b7bca(temp_v6,temp_v5,2,FUN_002e46f8);
      }
    }
    if ((*pbVar4 & 0x7f) == 0xe) {
      if ((char)*pbVar4 < '\0') {
        FUN_002b7bca(temp_v6,temp_v5,2,FUN_0030be80);
      }
      else {
        FUN_002b7bca(temp_v6,temp_v5,2,FUN_002dcce0);
      }
    }
    if ((*pbVar4 & 0x7f) == 0xf) {
      if ((char)*pbVar4 < '\0') {
        FUN_002b7bca(temp_v6,temp_v5,2,FUN_00313184);
      }
      else {
        FUN_002b7bca(temp_v6,temp_v5,2,FUN_002e44e0);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x11) {
      if ((char)*pbVar4 < '\0') {
        FUN_002b7bca(temp_v6,temp_v5,2,FUN_0030bce8);
      }
      else {
        FUN_002b7bca(temp_v6,temp_v5,2,FUN_002dc594);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        FUN_0027f3dc(temp_v6,temp_v5,2,FUN_0030bd88);
        return;
      }
      FUN_0027f3dc(temp_v6,temp_v5,2,FUN_002dc634);
      return;
    }
    break;
  case 0xb:
    pbVar4 = (unsigned char *)(temp_v1 + 3);
    temp_v1 = temp_v3 + 0x147c;
    temp_v3 = temp_v3 + 0xb0;
    if ((*pbVar4 & 0x7f) == 0xc) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,2,FUN_002f2898);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,2,FUN_0021963c);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x10) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,2,FUN_002e4a60);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,2,FUN_00207094);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_0027f3dc(temp_v1,temp_v2,2,FUN_002e4aac);
        return;
      }
      temp_v2 = FUN_0029ee54(temp_v3);
      FUN_0027f3dc(temp_v1,temp_v2,2,FUN_002070e0);
      return;
    }
    break;
  case 0xd:
    pbVar4 = (unsigned char *)(temp_v1 + 4);
    temp_v1 = temp_v3 + 0x1cc4;
    temp_v3 = temp_v3 + 0x178;
    if ((*pbVar4 & 0x7f) == 0x21) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,2,FUN_00313338);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,2,FUN_002e49dc);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x10) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,2,FUN_003132ec);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v1,temp_v2,2,FUN_002e4990);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_0027f3dc(temp_v1,temp_v2,2,FUN_00313364);
        return;
      }
      temp_v2 = FUN_0029ee54(temp_v3);
      FUN_0027f3dc(temp_v1,temp_v2,2,FUN_002e4a0c);
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
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002e482c);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_00206f30);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x11) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_00313298);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002e47d8);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x12) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_0030bed8);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002dcd38);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_0027f3dc(temp_v5,temp_v2,2,FUN_002f27ec);
        return;
      }
      temp_v2 = FUN_0029ee54(temp_v4);
      FUN_0027f3dc(temp_v5,temp_v2,2,FUN_002194dc);
      return;
    }
    break;
  case 0x13:
    pbVar4 = (unsigned char *)(temp_v1 + 7);
    temp_v4 = temp_v3 + 0x205c;
    temp_v3 = temp_v3 + 0x36c;
    if ((*pbVar4 & 0x7f) == 6) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v2,2,FUN_002e482c);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v2,2,FUN_00206f30);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x1f) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v2,2,FUN_002f2840);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v2,2,FUN_00219530);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x13) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v2,2,FUN_002e4744);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v2,2,FUN_00206e9c);
      }
    }
    temp_v0 = *pbVar4;
    goto joined_r0x00283cd8;
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
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002dcec0);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_001f646c);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x24) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002e4950);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_00207054);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x25) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002e4890);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_00206f94);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x26) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002e4910);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_00207014);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x27) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002e4798);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_00206ef0);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x28) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002e48d0);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_00206fd4);
      }
    }
    if ((*pbVar4 & 0x7f) == 3) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002f27ec);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_002b7bca(temp_v5,temp_v2,2,FUN_002194dc);
      }
    }
    if ((*pbVar4 & 0x7f) == 0x32) {
      if ((char)*pbVar4 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v4);
        FUN_0027f3dc(temp_v5,temp_v2,2,0x30bf6c);
        return;
      }
      temp_v2 = FUN_0029ee54(temp_v4);
      FUN_0027f3dc(temp_v5,temp_v2,2,0x2dcdd0);
      return;
    }
    break;
  case 0x17:
    temp_v0 = *(unsigned char *)(temp_v1 + 0xb);
    temp_v4 = temp_v3 + 0x2390;
    temp_v3 = temp_v3 + 0x4fc;
    if ((temp_v0 & 0x7f) == 0x33) {
      if ((char)temp_v0 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v2,2,FUN_0030bf40);
      }
      else {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_002b7bca(temp_v4,temp_v2,2,FUN_002dcda0);
      }
    }
    temp_v0 = *(unsigned char *)(temp_v1 + 0xb);
joined_r0x00283cd8:
    if ((temp_v0 & 0x7f) == 3) {
      if ((char)temp_v0 < '\0') {
        temp_v2 = FUN_0029ee54(temp_v3);
        FUN_0027f3dc(temp_v4,temp_v2,2,FUN_002f27ec);
        return;
      }
      temp_v2 = FUN_0029ee54(temp_v3);
      FUN_0027f3dc(temp_v4,temp_v2,2,FUN_002194dc);
      return;
    }
  }
  return;
}

} /* extern "C" */
