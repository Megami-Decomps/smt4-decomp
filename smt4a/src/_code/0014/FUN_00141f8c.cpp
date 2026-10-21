/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141f8c` (_code @ 0x141f8c, 0x8e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventTexCallIfIdle(...);
int FUN_00154bbc(...);
int messageMainSetMode(...);
int rt_memcpy_w(...);

int textFormatBuffer(unsigned char [128], unsigned char *);
int wstrBufferPutChar(...);
int FUN_0014f2a8(...);
int uiGetTableEntry(...);
int FUN_0015f858(unsigned int, int);
int FUN_0016432c(int);
int FUN_001654f0(...);
int FUN_001654f8(...);
int FUN_001695a0(void);
int FUN_00180118(...);
int libc_strcpy(...);
int sysMemClear(unsigned char [128], int);

/* stack frame of param_6: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp128; /* 0x128: local_128 */
    unsigned int sp130; /* 0x130: local_130 */
} param_6_stack;

extern unsigned char LAB_001423a0; /* 0x1423a0 */
extern unsigned char LAB_001423b4; /* 0x1423b4 */
extern unsigned char LAB_00142870; /* 0x142870 */

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bd84(unsigned short);
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: wstrBufferPutChar. */
/* Supplied declaration required: FUN_0014f2a8. */
/* Supplied declaration required: uiGetTableEntry. */
extern int FUN_001527e4(short);
extern int FUN_00153588(short);
/* Supplied declaration required: eventTexCallIfIdle. */
/* Supplied declaration required: FUN_00154bbc. */
extern unsigned int FUN_00156850(unsigned short, unsigned int);
extern unsigned int FUN_00156868(void);
extern unsigned int FUN_0015687c(void);
extern int saveSlotFindSelected(void);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_0016432c. */
/* Supplied declaration required: FUN_001654f0. */
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: messageMainSetMode. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int
FUN_00141f8c(int param_1,int param_2,unsigned int param_3,int *param_4,unsigned int param_5,
            unsigned int param_6)

{
/* irregular: 16 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [128];
  unsigned char temp_v10 [132];
  
  sysMemClear(temp_v9,0x80);
  if (param_1 != 0xf875) {
    if (param_1 < 0xf875) {
      if (param_1 == 0xf870) {
        FUN_0016432c(*(unsigned short *)(param_2 + *param_4 * 2 + 2));
        FUN_001654f8();
        *param_4 = *param_4 + 1;
        wstrBufferPutChar(param_3,param_5,0x12f8,param_6);
        temp_v7 = 0;
        do {
          temp_v6 = temp_v7 * 2;
          temp_v7 = temp_v7 + 1;
          temp_v0 = romwright_piece_1_1(temp_v9[temp_v6 + 1],temp_v9[temp_v6]);
          wstrBufferPutChar(param_3,param_5,temp_v0,param_6);
        } while (temp_v0 != 0);
        return 1;
      }
      if (param_1 < 0xf870) {
        switch(param_1) {
        case 0xf840:
        case 0xf844:
          return 1;
        case 0xf841:
          temp_v4 = (unsigned int)*(unsigned short *)(param_2 + *param_4 * 2 + 2);
          FUN_0015f858(temp_v4,1);
          libc_strcpy(temp_v9,temp_v4);
          FUN_001654f0(temp_v9,temp_v10);
          FUN_0014f2a8(param_3,param_5,temp_v10,param_6);
          *param_4 = *param_4 + 1;
          return 1;
        case 0xf842:
          FUN_00180118(*(unsigned short *)(param_2 + *param_4 * 2 + 2));
          FUN_001654f8();
          break;
        case 0xf843:
          temp_v0 = *(short *)(param_2 + *param_4 * 2 + 2);
          if (temp_v0 != 0) {
            if (temp_v0 != 1) {
              if (temp_v0 != 2) {
                *param_4 = *param_4 + 1;
                return 1;
              }
              textFormatBuffer(temp_v9,&LAB_001423b4);
            }
            else {
              textFormatBuffer(temp_v9,&LAB_001423a0);
            }
          }
          else {
            temp_v5 = FUN_0015687c();
            libc_strcpy(temp_v9,temp_v5);
          }
          break;
        default:
          return 0;
        }
        FUN_0014f2a8(param_3,param_5,temp_v9,param_6);
        *param_4 = *param_4 + 1;
        return 1;
      }
      if (param_1 == 0xf871) {
        temp_v5 = uiGetTableEntry(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 7);
        libc_strcpy(temp_v9,temp_v5);
        *param_4 = *param_4 + 1;
        wstrBufferPutChar(param_3,param_5,0x12f8,param_6);
        temp_v7 = 0;
        do {
          temp_v6 = temp_v7 * 2;
          temp_v7 = temp_v7 + 1;
          temp_v0 = romwright_piece_1_1(temp_v9[temp_v6 + 1],temp_v9[temp_v6]);
          wstrBufferPutChar(param_3,param_5,temp_v0,param_6);
        } while (temp_v0 != 0);
        return 1;
      }
      if (param_1 != 0xf872) {
        if (param_1 != 0xf873) {
          if (param_1 != 0xf874) {
            return 0;
          }
          temp_v5 = FUN_0014bf3c(*(unsigned short *)(param_2 + *param_4 * 2 + 2),0);
          libc_strcpy(temp_v9,temp_v5);
          FUN_001654f0(temp_v9,temp_v10);
          FUN_0014f2a8(param_3,param_5,temp_v10,param_6);
        }
        else {
          temp_v5 = uiGetTableEntry(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 7);
          FUN_0014f2a8(param_3,param_5,temp_v5,param_6);
        }
      }
      else {
        temp_v5 = uiGetTableEntry(*(unsigned short *)(param_2 + *param_4 * 2 + 2) - 1);
        libc_strcpy(temp_v9,temp_v5);
        FUN_001654f0(temp_v9,temp_v10);
        FUN_0014f2a8(param_3,param_5,temp_v10,param_6);
      }
    }
    else {
      switch(param_1) {
      default:
        return 0;
      case 0xf876:
        temp_v5 = FUN_0014bd84(*(unsigned short *)(param_2 + *param_4 * 2 + 2));
        FUN_001654f8(temp_v5,temp_v9,0);
        FUN_0014f2a8(param_3,param_5,temp_v9,param_6);
        break;
      case 0xf877:
        temp_v5 = uiGetTableEntry(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0x13);
        FUN_0014f2a8(param_3,param_5,temp_v5,param_6);
        break;
      case 0xf878:
        temp_v5 = uiGetTableEntry(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0x17);
        FUN_0014f2a8(param_3,param_5,temp_v5,param_6);
        break;
      case 0xf879:
        temp_v5 = uiGetTableEntry(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0x1f);
        FUN_0014f2a8(param_3,param_5,temp_v5,param_6);
        break;
      case 0xf87a:
        wstrBufferPutChar(param_3,param_5,*(unsigned short *)(param_2 + *param_4 * 2),param_6);
        temp_v7 = *param_4;
        *param_4 = temp_v7 + 1;
        temp_v0 = *(short *)(param_2 + (temp_v7 + 1) * 2);
        wstrBufferPutChar(param_3,param_5,temp_v0,param_6);
        if (temp_v0 == 0) {
          FUN_001695a0();
          return 1;
        }
        temp_v7 = FUN_00153588(temp_v0);
        if (temp_v7 != 0) {
          return 1;
        }
        temp_v7 = FUN_001527e4(temp_v0);
        if (temp_v7 != 0) {
          return 1;
        }
        messageMainSetMode(2);
        return 1;
      case 0xf87b:
        wstrBufferPutChar(param_3,param_5,*(unsigned short *)(param_2 + *param_4 * 2),param_6);
        temp_v7 = *param_4;
        *param_4 = temp_v7 + 1;
        temp_v8 = (unsigned int)*(unsigned short *)(param_2 + (temp_v7 + 1) * 2);
        wstrBufferPutChar(param_3,param_5,temp_v8,param_6);
        temp_v7 = *param_4;
        *param_4 = temp_v7 + 1;
        temp_v3 = *(unsigned short *)(param_2 + (temp_v7 + 1) * 2);
        wstrBufferPutChar(param_3,param_5,temp_v3,param_6);
        temp_v7 = *param_4;
        *param_4 = temp_v7 + 1;
        temp_v1 = *(unsigned short *)(param_2 + (temp_v7 + 1) * 2);
        wstrBufferPutChar(param_3,param_5,temp_v1,param_6);
        temp_v7 = *param_4;
        *param_4 = temp_v7 + 1;
        temp_v2 = *(unsigned short *)(param_2 + (temp_v7 + 1) * 2);
        wstrBufferPutChar(param_3,param_5,temp_v2,param_6);
        temp_v4 = temp_v8;
        FUN_00154bbc(temp_v8,temp_v3,temp_v1,temp_v2,0xffffffff);
        if (temp_v4 != 0) {
          return 1;
        }
        eventTexCallIfIdle(temp_v8,temp_v3,1);
        return 1;
      case 0xf87c:
        temp_v7 = *param_4 + 1;
        temp_v6 = *param_4 + 2;
        *param_4 = temp_v7;
        temp_v3 = *(unsigned short *)(param_2 + temp_v7 * 2);
        *param_4 = temp_v6;
        if (*(short *)(param_2 + temp_v6 * 2) == 0) {
          temp_v5 = FUN_00156850(temp_v3,1);
          libc_strcpy(temp_v9,temp_v5);
          FUN_001654f0(temp_v9,temp_v10);
          FUN_0014f2a8(param_3,param_5,temp_v10,param_6);
          return 1;
        }
        temp_v5 = FUN_00156868();
        FUN_001654f8(temp_v5,temp_v9,0);
        FUN_0014f2a8(param_3,param_5,temp_v9,param_6);
        return 1;
      case 0xf87d:
        switch(*(unsigned short *)(param_2 + *param_4 * 2 + 2)) {
        case 0:
        case 2:
        case 7:
        case 0xe:
          temp_v5 = uiGetTableEntry(0x24);
          libc_strcpy(temp_v9,temp_v5);
          break;
        case 1:
        case 3:
        case 8:
        case 0xf:
          temp_v5 = uiGetTableEntry(0x25);
          libc_strcpy(temp_v9,temp_v5);
          break;
        case 4:
        case 9:
          temp_v5 = uiGetTableEntry(0x26);
          libc_strcpy(temp_v9,temp_v5);
          break;
        case 5:
        case 10:
          temp_v5 = uiGetTableEntry(0x27);
          libc_strcpy(temp_v9,temp_v5);
          break;
        case 6:
        case 0xb:
          temp_v5 = uiGetTableEntry(0x28);
          libc_strcpy(temp_v9,temp_v5);
          break;
        case 0xc:
        case 0x10:
          temp_v5 = uiGetTableEntry(0x29);
          libc_strcpy(temp_v9,temp_v5);
          break;
        case 0xd:
          temp_v5 = uiGetTableEntry(0x2a);
          libc_strcpy(temp_v9,temp_v5);
          break;
        default:
          rt_memcpy_w(temp_v9,&LAB_00142870,0xb);
        }
        FUN_0014f2a8(param_3,param_5,temp_v9,param_6);
        break;
      case 0xf87e:
        temp_v7 = saveSlotFindSelected();
        if (temp_v7 == 0) {
          temp_v9[0] = 0;
        }
        else {
          FUN_00180118(*(unsigned short *)(temp_v7 + 0x62));
          FUN_001654f8();
        }
        FUN_0014f2a8(param_3,param_5,temp_v9,param_6);
        return 1;
      }
    }
  }
  else {
    temp_v5 = uiGetTableEntry(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0xf);
    libc_strcpy(temp_v9,temp_v5);
    FUN_001654f0(temp_v9,temp_v10);
    FUN_0014f2a8(param_3,param_5,temp_v10,param_6);
  }
  *param_4 = *param_4 + 1;
  return 1;
}

} /* extern "C" */
