/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c83c` (_code @ 0x10c83c, 0x8b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventTexCallIfIdle(...);
int FUN_0011a0d4(...);
int FUN_002bff38(...);
int rt_memcpy_w(...);

int FUN_002bcf10(...);
int wstrBufferPutChar(...);
int FUN_002bcf4c(int);
int FUN_002bcfc0(...);
int FUN_002bd06c(...);
int FUN_002bd0f8(...);
int FUN_002bd158(...);
int textFormatBuffer(...);
int FUN_002be650(...);
int libc_strcpy(...);
int FUN_002bff50(void);
int memClear(unsigned char [128], int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp130; /* 0x130: local_130 */
} param_6_stack;

extern unsigned char LAB_0010cc50; /* 0x10cc50 */
extern unsigned char LAB_0010cc64; /* 0x10cc64 */
extern unsigned char LAB_0010d0ec; /* 0x10d0ec */

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
extern int eventTexSelectJobsById(short);
extern int FUN_0011921c(short);
/* Supplied declaration required: eventTexCallIfIdle. */
/* Supplied declaration required: FUN_0011a0d4. */
extern unsigned int FUN_0011b454(void);
extern unsigned int FUN_002bcddc(unsigned short, unsigned int);
extern unsigned int FUN_002bce00(unsigned short);
extern unsigned int FUN_002bce30(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bcf10. */
/* Supplied declaration required: wstrBufferPutChar. */
/* Supplied declaration required: FUN_002bcf4c. */
/* Supplied declaration required: FUN_002bcfc0. */
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: FUN_002bd0f8. */
/* Supplied declaration required: FUN_002bd158. */
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002bff38. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int
FUN_0010c83c(int param_1,int param_2,unsigned int param_3,int *param_4,unsigned int param_5,
            unsigned int param_6)

{
/* irregular: 16 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11 [128];
  unsigned char temp_v12 [132];
  
  memClear(temp_v11,0x80);
  if (param_1 != 0xf874) {
    if (param_1 < 0xf874) {
      if (param_1 == 0xf844) {
        return 1;
      }
      if (param_1 >= 0xf844) {
        if (param_1 == 0xf870) {
          FUN_002bcf4c(*(unsigned short *)(param_2 + *param_4 * 2 + 2));
          FUN_002bcfc0();
          *param_4 = *param_4 + 1;
          wstrBufferPutChar(param_3,param_5,0x12f8,param_6);
          temp_v9 = 0;
          do {
            temp_v8 = temp_v9 * 2;
            temp_v9 = temp_v9 + 1;
            temp_v5 = temp_v11[temp_v8 + 1];
            temp_v0 = temp_v11[temp_v8];
            wstrBufferPutChar(param_3,param_5,romwright_piece_1_1(temp_v5,temp_v0),param_6);
          } while (romwright_piece_1_1(temp_v5,temp_v0) != 0);
          return 1;
        }
        if (param_1 == 0xf871) {
          temp_v6 = FUN_002bcf10(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 7);
          libc_strcpy(temp_v11,temp_v6);
          *param_4 = *param_4 + 1;
          wstrBufferPutChar(param_3,param_5,0x12f8,param_6);
          temp_v9 = 0;
          do {
            temp_v8 = temp_v9 * 2;
            temp_v9 = temp_v9 + 1;
            temp_v5 = temp_v11[temp_v8 + 1];
            temp_v0 = temp_v11[temp_v8];
            wstrBufferPutChar(param_3,param_5,romwright_piece_1_1(temp_v5,temp_v0),param_6);
          } while (romwright_piece_1_1(temp_v5,temp_v0) != 0);
          return 1;
        }
        if (param_1 != 0xf872) {
          if (param_1 != 0xf873) {
            return 0;
          }
          temp_v6 = FUN_002bcf10(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 7);
          FUN_002bd0f8(param_3,param_5,temp_v6,param_6);
        }
        else {
          temp_v6 = FUN_002bcf10(*(unsigned short *)(param_2 + *param_4 * 2 + 2) - 1);
          libc_strcpy(temp_v11,temp_v6);
          FUN_002bd158(temp_v11,temp_v12);
          FUN_002bd0f8(param_3,param_5,temp_v12,param_6);
        }
        *param_4 = *param_4 + 1;
        return 1;
      }
      if (param_1 == 0xf840) {
        return 1;
      }
      if (param_1 == 0xf841) {
        temp_v7 = (unsigned int)*(unsigned short *)(param_2 + *param_4 * 2 + 2);
        FUN_002be650(temp_v7,1);
        libc_strcpy(temp_v11,temp_v7);
        FUN_002bd158(temp_v11,temp_v12);
        FUN_002bd0f8(param_3,param_5,temp_v12,param_6);
        *param_4 = *param_4 + 1;
        return 1;
      }
      if (param_1 != 0xf842) {
        if (param_1 != 0xf843) {
          return 0;
        }
        temp_v1 = *(short *)(param_2 + *param_4 * 2 + 2);
        if (temp_v1 != 0) {
          if (temp_v1 != 1) {
            if (temp_v1 != 2) {
              *param_4 = *param_4 + 1;
              return 1;
            }
            textFormatBuffer(temp_v11,&LAB_0010cc64);
          }
          else {
            textFormatBuffer(temp_v11,&LAB_0010cc50);
          }
        }
        else {
          temp_v6 = FUN_002bd1fc();
          libc_strcpy(temp_v11,temp_v6);
        }
      }
      else {
        FUN_002bd06c(*(unsigned short *)(param_2 + *param_4 * 2 + 2));
        FUN_002bcfc0();
      }
      FUN_002bd0f8(param_3,param_5,temp_v11,param_6);
      *param_4 = *param_4 + 1;
      return 1;
    }
    switch(param_1) {
    default:
      return 0;
    case 0xf875:
      temp_v6 = FUN_002bcf10(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0xf);
      libc_strcpy(temp_v11,temp_v6);
      FUN_002bd158(temp_v11,temp_v12);
      FUN_002bd0f8(param_3,param_5,temp_v12,param_6);
      break;
    case 0xf876:
      temp_v6 = FUN_002bce00(*(unsigned short *)(param_2 + *param_4 * 2 + 2));
      FUN_002bcfc0(temp_v6,temp_v11);
      FUN_002bd0f8(param_3,param_5,temp_v11,param_6);
      break;
    case 0xf877:
      temp_v6 = FUN_002bcf10(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0x13);
      FUN_002bd0f8(param_3,param_5,temp_v6,param_6);
      break;
    case 0xf878:
      temp_v6 = FUN_002bcf10(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0x17);
      FUN_002bd0f8(param_3,param_5,temp_v6,param_6);
      break;
    case 0xf879:
      temp_v6 = FUN_002bcf10(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0x1f);
      FUN_002bd0f8(param_3,param_5,temp_v6,param_6);
      break;
    case 0xf87a:
      wstrBufferPutChar(param_3,param_5,*(unsigned short *)(param_2 + *param_4 * 2),param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v1 = *(short *)(param_2 + (temp_v9 + 1) * 2);
      wstrBufferPutChar(param_3,param_5,temp_v1,param_6);
      if (temp_v1 == 0) {
        FUN_002bff50();
        return 1;
      }
      temp_v9 = FUN_0011921c(temp_v1);
      if (temp_v9 != 0) {
        return 1;
      }
      temp_v9 = eventTexSelectJobsById(temp_v1);
      if (temp_v9 != 0) {
        return 1;
      }
      FUN_002bff38(2);
      return 1;
    case 0xf87b:
      wstrBufferPutChar(param_3,param_5,*(unsigned short *)(param_2 + *param_4 * 2),param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v10 = (unsigned int)*(unsigned short *)(param_2 + (temp_v9 + 1) * 2);
      wstrBufferPutChar(param_3,param_5,temp_v10,param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v4 = *(unsigned short *)(param_2 + (temp_v9 + 1) * 2);
      wstrBufferPutChar(param_3,param_5,temp_v4,param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v2 = *(unsigned short *)(param_2 + (temp_v9 + 1) * 2);
      wstrBufferPutChar(param_3,param_5,temp_v2,param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v3 = *(unsigned short *)(param_2 + (temp_v9 + 1) * 2);
      wstrBufferPutChar(param_3,param_5,temp_v3,param_6);
      temp_v7 = temp_v10;
      FUN_0011a0d4(temp_v10,temp_v4,temp_v2,temp_v3,0xffffffff);
      if (temp_v7 != 0) {
        return 1;
      }
      eventTexCallIfIdle(temp_v10,temp_v4,1);
      return 1;
    case 0xf87c:
      temp_v9 = *param_4 + 1;
      temp_v8 = *param_4 + 2;
      *param_4 = temp_v9;
      temp_v4 = *(unsigned short *)(param_2 + temp_v9 * 2);
      *param_4 = temp_v8;
      if (*(short *)(param_2 + temp_v8 * 2) != 0) {
        temp_v6 = FUN_0011b454();
        FUN_002bcfc0(temp_v6,temp_v11);
        FUN_002bd0f8(param_3,param_5,temp_v11,param_6);
        return 1;
      }
      temp_v6 = FUN_002bcddc(temp_v4,1);
      libc_strcpy(temp_v11,temp_v6);
      FUN_002bd158(temp_v11,temp_v12);
      FUN_002bd0f8(param_3,param_5,temp_v12,param_6);
      return 1;
    case 0xf87d:
      switch(*(unsigned short *)(param_2 + *param_4 * 2 + 2)) {
      case 0:
      case 2:
      case 7:
      case 0xe:
        temp_v6 = FUN_002bcf10(0x24);
        libc_strcpy(temp_v11,temp_v6);
        break;
      case 1:
      case 3:
      case 8:
      case 0xf:
        temp_v6 = FUN_002bcf10(0x25);
        libc_strcpy(temp_v11,temp_v6);
        break;
      case 4:
      case 9:
        temp_v6 = FUN_002bcf10(0x26);
        libc_strcpy(temp_v11,temp_v6);
        break;
      case 5:
      case 10:
        temp_v6 = FUN_002bcf10(0x27);
        libc_strcpy(temp_v11,temp_v6);
        break;
      case 6:
      case 0xb:
        temp_v6 = FUN_002bcf10(0x28);
        libc_strcpy(temp_v11,temp_v6);
        break;
      case 0xc:
      case 0x10:
        temp_v6 = FUN_002bcf10(0x29);
        libc_strcpy(temp_v11,temp_v6);
        break;
      case 0xd:
        temp_v6 = FUN_002bcf10(0x2a);
        libc_strcpy(temp_v11,temp_v6);
        break;
      default:
        rt_memcpy_w(temp_v11,&LAB_0010d0ec,0xb);
      }
      FUN_002bd0f8(param_3,param_5,temp_v11,param_6);
    }
  }
  else {
    temp_v6 = FUN_002bce30(*(unsigned short *)(param_2 + *param_4 * 2 + 2),1);
    libc_strcpy(temp_v11,temp_v6);
    FUN_002bd158(temp_v11,temp_v12);
    FUN_002bd0f8(param_3,param_5,temp_v12,param_6);
  }
  *param_4 = *param_4 + 1;
  return 1;
}

} /* extern "C" */
