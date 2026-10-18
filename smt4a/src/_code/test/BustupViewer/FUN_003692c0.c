/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003692c0` (_code @ 0x3692c0, 0x5e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003695dc; /* 0x3695dc */
extern unsigned char LAB_003695e4; /* 0x3695e4 */
extern unsigned char LAB_003695ec; /* 0x3695ec */
extern unsigned char LAB_003695f4; /* 0x3695f4 */
extern unsigned char LAB_003695fc; /* 0x3695fc */
extern unsigned char LAB_00369604; /* 0x369604 */
extern unsigned char LAB_00369614; /* 0x369614 */
extern unsigned char LAB_00369624; /* 0x369624 */
extern unsigned char LAB_003698a8; /* 0x3698a8 */
extern unsigned char LAB_003698b0; /* 0x3698b0 */
extern unsigned char LAB_003698c0; /* 0x3698c0 */
extern unsigned char LAB_003698c8; /* 0x3698c8 */
extern unsigned char LAB_003698dc; /* 0x3698dc */
extern unsigned char LAB_003698ec; /* 0x3698ec */
extern unsigned char LAB_003698f8; /* 0x3698f8 */
extern unsigned char LAB_00369910; /* 0x369910 */
extern unsigned char LAB_00369918; /* 0x369918 */
extern unsigned char LAB_00369924; /* 0x369924 */
extern unsigned char LAB_00369930; /* 0x369930 */
extern int DAT_00588ff0; /* 0x588ff0 */
extern char s__V_V_V_V_V_V_V_V_V_V_005890d4[113]; /* 0x5890d4 */
extern unsigned char DAT_006199d8; /* 0x6199d8 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_0025cc78. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6dd0. */


unsigned int FUN_003692c0(void)

{
/* irregular: 13 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned char temp_v7 [256];
  unsigned char temp_v8 [268];
  
  temp_v0 = DAT_00588ff0;
  FUN_002e6dd0(temp_v7,0x100);
  FUN_002e6dd0(temp_v8,0x100);
  temp_v6 = 16.0f;
  temp_v5 = 17.0f;
  temp_v3 = 0;
  do {
    temp_v1 = *(int *)(temp_v0 + 0xc);
    switch(temp_v1) {
    case 0:
      switch(temp_v3) {
      case 2:
      case 3:
      case 5:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        break;
      default:
        goto LAB_0036945c;
      }
    case 1:
      switch(temp_v3) {
      case 2:
      case 3:
      case 5:
      case 7:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xf:
        break;
      default:
        goto LAB_0036945c;
      }
    case 2:
      if (temp_v3 != 5) {
        if ((int)temp_v3 < 5) {
          if (temp_v3 != 2 && temp_v3 != 3) goto LAB_0036945c;
        }
        else if (temp_v3 != 7 && temp_v3 != 0xf) goto LAB_0036945c;
      }
      break;
    case 3:
      switch(temp_v3) {
      case 4:
        if (*(char *)(*(int *)(DAT_00588ff0 + 0x50) + DAT_00588ff0 + 100) != '\0')
        goto LAB_0036945c;
        break;
      case 5:
        if (*(char *)(*(int *)(DAT_00588ff0 + 0x50) + DAT_00588ff0 + 100) == '\0')
        goto LAB_0036945c;
        break;
      case 6:
      case 7:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
        break;
      default:
        goto LAB_0036945c;
      }
      break;
    case 4:
      if (temp_v3 < 2 || temp_v3 == 7) goto LAB_0036945c;
      break;
    default:
LAB_0036945c:
      if (*(unsigned int *)(temp_v0 + 0x10) == temp_v3) {
        temp_v4 = 0xffff00ff;
      }
      else {
        temp_v4 = 0xffffffff;
      }
      switch(temp_v3) {
      case 0:
        if (temp_v1 == 0) {
          FUN_00100388(temp_v7,&LAB_003695e4);
        }
        else if (temp_v1 == 1) {
          FUN_00100388(temp_v7,&LAB_003695ec);
        }
        else if (temp_v1 == 2) {
          FUN_00100388(temp_v7,&LAB_003695f4);
        }
        else if (temp_v1 == 3) {
          FUN_00100388(temp_v7,&LAB_003695fc);
        }
        else {
          FUN_00100388(temp_v7,&LAB_003695dc);
        }
        break;
      case 1:
        if (*(int *)(temp_v0 + 0x14) == 0) {
LAB_00369690:
          FUN_00100388(temp_v7,&LAB_003698c0);
        }
        else if ((temp_v1 == 0 || temp_v1 == 3) || temp_v1 == 4) {
          FUN_00100388(temp_v7,&LAB_00369614);
        }
        else {
          FUN_00100388(temp_v7,&LAB_00369604);
        }
        break;
      case 2:
        temp_v4 = *(unsigned int *)(temp_v0 + 0x50);
        goto LAB_0036973c;
      case 3:
        if (*(char *)(*(int *)(temp_v0 + 0x50) + temp_v0 + 100) == '\0') {
          FUN_00100388(temp_v7,&LAB_003698a8);
        }
        else {
          FUN_00100388(temp_v7,&LAB_00369624);
        }
        break;
      case 4:
      case 10:
        temp_v2 = *(int *)(temp_v0 + 0x18);
        if (temp_v1 == 3) {
          temp_v2 = *(int *)(temp_v0 + *(int *)(temp_v0 + 0x50) * 4 + 0x54);
        }
        if (temp_v3 == 10) {
          temp_v2 = *(int *)(temp_v0 + 0x2c);
        }
        if (temp_v2 == 0) goto LAB_00369690;
        if (temp_v2 < 0x12d) {
          if (temp_v2 < 200) {
            FUN_00100388(temp_v7,&LAB_003698dc);
          }
          else {
            FUN_00100388(temp_v7,&LAB_003698c8,temp_v2 - 199);
          }
        }
        else {
          FUN_00100388(temp_v7,&LAB_003698b0,temp_v2 - 300);
        }
        break;
      case 5:
        FUN_00100388(temp_v7,&LAB_003698ec,
                     *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x50) * 4 + 0x54));
        FUN_001527d8(*(unsigned int *)(temp_v0 + 0xa0),temp_v4);
        FUN_0025cc78(*(unsigned int *)(temp_v0 + 0xa0),0x76,(int)temp_v5,0x65);
        break;
      case 6:
      case 0xb:
        temp_v4 = *(unsigned int *)(temp_v0 + 0x1c);
        if (temp_v3 == 0xb) {
          temp_v4 = *(unsigned int *)(temp_v0 + 0x30);
        }
        goto LAB_0036973c;
      case 7:
        temp_v4 = *(unsigned int *)(temp_v0 + 0x20);
        goto LAB_0036973c;
      case 8:
      case 9:
      case 0xc:
      case 0xd:
        temp_v4 = 0;
        if (temp_v3 == 8) {
          if (temp_v1 == 3) {
            temp_v4 = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x50) * 4 + 0x68);
          }
          else {
            temp_v4 = *(unsigned int *)(temp_v0 + 0x24);
          }
        }
        else if (temp_v3 == 9) {
          if (temp_v1 == 3) {
            temp_v4 = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x50) * 4 + 0x78);
          }
          else {
            temp_v4 = *(unsigned int *)(temp_v0 + 0x28);
          }
        }
        else if (temp_v3 == 0xc) {
          temp_v4 = *(unsigned int *)(temp_v0 + 0x34);
        }
        else if (temp_v3 == 0xd) {
          temp_v4 = *(unsigned int *)(temp_v0 + 0x38);
        }
LAB_0036973c:
        FUN_00100388(temp_v7,&LAB_003698f8,temp_v4);
        break;
      case 0xe:
        temp_v5 = temp_v5 + temp_v6;
        if (temp_v1 == 1) {
          temp_v1 = 0x588ff4;
LAB_0036981c:
          temp_v1 = *(int *)(temp_v1 + *(int *)(temp_v0 + 0x3c) * 4);
        }
        else {
          if (temp_v1 == 2) {
            temp_v1 = 0x58905c;
            goto LAB_0036981c;
          }
          temp_v1 = 0;
        }
        FUN_002e6dd0(&DAT_006199d8,0x80);
        if (temp_v1 < 100) {
          FUN_00100388(&DAT_006199d8,&LAB_00369918,
                       *(unsigned int *)(s__V_V_V_V_V_V_V_V_V_V_005890d4 + temp_v1 * 4));
        }
        else {
          FUN_00100388(&DAT_006199d8,&LAB_00369910,
                       *(unsigned int *)(s__V_V_V_V_V_V_V_V_V_V_005890d4 + (temp_v1 - 100) * 4));
        }
        FUN_002e342c(temp_v8,&DAT_006199d8);
        FUN_00100388(temp_v7,&LAB_00369924,temp_v8);
        break;
      case 0xf:
        FUN_00100388(temp_v7,&LAB_00369930,
                     (int)(*(float *)(temp_v0 + *(int *)(temp_v0 + 0x50) * 4 + 0x88) * 100.0f));
      }
      temp_v5 = temp_v5 + temp_v6;
    }
    temp_v3 = temp_v3 + 1;
    if ((int)temp_v3 >= 0x10) {
      return 0;
    }
  } while( 1 );
}
