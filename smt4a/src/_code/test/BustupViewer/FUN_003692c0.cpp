/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003692c0` (_code @ 0x3692c0, 0x5e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "text/TextDraw.h"

extern "C" {

int textFormatBuffer(...);
int libc_strcpy(unsigned char [268], unsigned char *);
int rt_aeabi_memclr(...);

extern int g_bustupViewer; /* 0x588ff0 */
extern char s__V_V_V_V_V_V_V_V_V_V_005890d4[113]; /* 0x5890d4 */
extern unsigned char DAT_006199d8; /* 0x6199d8 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_0025cc78. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: rt_aeabi_memclr. */


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
  
  temp_v0 = g_bustupViewer;
  rt_aeabi_memclr(temp_v7,0x100);
  rt_aeabi_memclr(temp_v8,0x100);
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
        if (*(char *)(*(int *)(g_bustupViewer + 0x50) + g_bustupViewer + 100) != '\0')
        goto LAB_0036945c;
        break;
      case 5:
        if (*(char *)(*(int *)(g_bustupViewer + 0x50) + g_bustupViewer + 100) == '\0')
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
          textFormatBuffer(temp_v7,"<2D>");
        }
        else if (temp_v1 == 1) {
          textFormatBuffer(temp_v7,"<3D>");
        }
        else if (temp_v1 == 2) {
          textFormatBuffer(temp_v7,"<3D_2>");
        }
        else if (temp_v1 == 3) {
          textFormatBuffer(temp_v7,"<DOT>");
        }
        else {
          textFormatBuffer(temp_v7,"<SWIN>");
        }
        break;
      case 1:
        if (*(int *)(temp_v0 + 0x14) == 0) {
LAB_00369690:
          textFormatBuffer(temp_v7,"<None>");
        }
        else if ((temp_v1 == 0 || temp_v1 == 3) || temp_v1 == 4) {
          textFormatBuffer(temp_v7,"<BG_2D_%03d>");
        }
        else {
          textFormatBuffer(temp_v7,"<BG_3D_%03d>");
        }
        break;
      case 2:
        temp_v4 = *(unsigned int *)(temp_v0 + 0x50);
        goto LAB_0036973c;
      case 3:
        if (*(char *)(*(int *)(temp_v0 + 0x50) + temp_v0 + 100) == '\0') {
          textFormatBuffer(temp_v7,"<ENEMY>");
        }
        else {
          textFormatBuffer(temp_v7,"<NPC>");
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
            textFormatBuffer(temp_v7,"<CHARID_%03d>");
          }
          else {
            textFormatBuffer(temp_v7,"<CHARID_BOSS_%03d>",temp_v2 - 199);
          }
        }
        else {
          textFormatBuffer(temp_v7,"<CHARID_B%03d>",temp_v2 - 300);
        }
        break;
      case 5:
        textFormatBuffer(temp_v7,"<%03d>",
                     *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x50) * 4 + 0x54));
        FUN_001527d8(*(unsigned int *)(temp_v0 + 0xa0),temp_v4);
        FUN_0025cc78((const void *)*(unsigned int *)(temp_v0 + 0xa0),0x76,(int)temp_v5,0x65,1.0f);
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
        textFormatBuffer(temp_v7,"<%d>",temp_v4);
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
        rt_aeabi_memclr(&DAT_006199d8,0x80);
        if (temp_v1 < 100) {
          textFormatBuffer(&DAT_006199d8,"FRONT_%s",
                       *(unsigned int *)(s__V_V_V_V_V_V_V_V_V_V_005890d4 + temp_v1 * 4));
        }
        else {
          textFormatBuffer(&DAT_006199d8,"BACK_%s",
                       *(unsigned int *)(s__V_V_V_V_V_V_V_V_V_V_005890d4 + (temp_v1 - 100) * 4));
        }
        libc_strcpy(temp_v8,&DAT_006199d8);
        textFormatBuffer(temp_v7,"<%s>",temp_v8);
        break;
      case 0xf:
        textFormatBuffer(temp_v7,"<%d%%>",
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

} /* extern "C" */
