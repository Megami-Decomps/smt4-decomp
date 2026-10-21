/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e4bc` (_code @ 0x21e4bc, 0x28c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025be44(void);
int FUN_002a0428(unsigned int, int);
int textFormatBuffer(unsigned char [128], unsigned char *, int);
int libc_strcpy(int, int);
int VectorSignedToFloat(int, int);

extern unsigned char LAB_0021e74c; /* 0x21e74c */
extern int g_mapObj; /* 0x447e70 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int dataTableGetRecordFortyFive(void);
/* Supplied declaration required: FUN_0025be44. */
extern unsigned int asdMdlManagerCreateSecondList(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a0428. */
extern int FUN_002adee0(unsigned int);
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_strcpy. */


unsigned int FUN_0021e4bc(void)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar6;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  unsigned char temp_v5 [128];
  
  temp_v0 = *(short *)(g_mapObj + 8);
  if (temp_v0 != 10) {
    if (temp_v0 != 0xb) {
      if (temp_v0 != 0xc) {
        if (temp_v0 == 99) {
          return 1;
        }
      }
      else {
        temp_v1 = (int)*(short *)(g_mapObj + 10);
        FUN_0025be44();
        temp_v2 = g_mapObj + *(short *)(g_mapObj + 0xc) * 0x48;
        temp_v3 = FUN_002adee0(*(unsigned int *)(temp_v2 + 0x3c));
        if (temp_v3 != 0) {
          FUN_002a0428(*(unsigned int *)(temp_v2 + 0x3c),1);
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x18) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x1c) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x20) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x30) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x24) = temp_v4;
          if (*(int *)(temp_v2 + 0x38) == 6) {
            temp_v0 = *(short *)(temp_v1 + 0xe);
          }
          else {
            temp_v0 = *(short *)(temp_v1 + 8);
          }
          temp_v4 = VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x28) = temp_v4;
          temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v2 + 0x2c) = temp_v4;
          *(int *)(g_mapObj + 0x10) = *(int *)(g_mapObj + 0x10) + 1;
          *(unsigned char *)(temp_v2 + 0x14) = 1;
          *(unsigned char *)(temp_v2 + 0x15) = 1;
          *(unsigned char *)(temp_v2 + 0x16) = 1;
          *(int *)(temp_v2 + 0x58) = (int)*(short *)(g_mapObj + 10);
          if (*(char *)(temp_v1 + 0x10) != '\0') {
            libc_strcpy(temp_v2 + 0x40,temp_v1 + 0x10);
          }
          temp_v1 = g_mapObj;
          *(short *)(g_mapObj + 10) = *(short *)(g_mapObj + 10) + 1;
          *(unsigned short *)(temp_v1 + 8) = 10;
        }
      }
    }
    else {
      temp_v1 = (int)*(short *)(g_mapObj + 10);
      FUN_0025be44();
      temp_v2 = g_mapObj + *(short *)(g_mapObj + 0xc) * 0x48;
      *(int *)(temp_v2 + 0x38) = (int)*(short *)(temp_v1 + 4);
      *(unsigned char *)(temp_v2 + 0x40) = 0;
      textFormatBuffer(temp_v5,&LAB_0021e74c,(int)*(short *)(temp_v1 + 4));
      temp_v4 = asdMdlManagerCreateSecondList(temp_v5,7);
      *(unsigned int *)(temp_v2 + 0x3c) = temp_v4;
      *(unsigned short *)(g_mapObj + 8) = 0xc;
    }
    return 0;
  }
  psVar6 = (short *)(int)*(short *)(g_mapObj + 10);
  temp_v1 = dataTableGetRecordFortyFive();
  if ((int)psVar6 < temp_v1) {
    do {
      psVar2 = psVar6;
      FUN_0025be44();
      temp_v1 = g_mapObj;
      if ((((-1 < *psVar2) && (*psVar2 == *(short *)(g_mapObj + 4))) &&
          (psVar2[1] == *(short *)(g_mapObj + 6))) && (psVar2[2] < 100)) {
        temp_v2 = 0;
        *(short *)(g_mapObj + 10) = (short)(int)psVar6;
LAB_0021e550:
        if (*(char *)(temp_v1 + temp_v2 * 0x48 + 0x14) != '\0') {
          temp_v2 = temp_v2 + 1;
          if (temp_v2 < 0x18) goto LAB_0021e550;
          temp_v2 = -1;
        }
        *(short *)(temp_v1 + 0xc) = (short)temp_v2;
        if ((short)temp_v2 != -1) {
          *(unsigned short *)(temp_v1 + 8) = 0xb;
          return 0;
        }
        *(unsigned short *)(temp_v1 + 8) = 99;
        return 1;
      }
      psVar6 = (short *)((int)psVar6 + 1);
      temp_v1 = dataTableGetRecordFortyFive();
    } while ((int)psVar6 < temp_v1);
  }
  *(unsigned short *)(g_mapObj + 8) = 99;
  return 1;
}

} /* extern "C" */
