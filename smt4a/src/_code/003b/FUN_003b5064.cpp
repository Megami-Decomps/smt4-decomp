/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5064` (_code @ 0x3b5064, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int g_mapSelection; /* 0x5f1c98 */
extern unsigned int DAT_005f1c9c; /* 0x5f1c9c */
extern unsigned int DAT_005f1ca0; /* 0x5f1ca0 */
extern unsigned int DAT_005f1ca4; /* 0x5f1ca4 */
extern unsigned int DAT_005f1ca8; /* 0x5f1ca8 */
extern unsigned int DAT_005f1cac; /* 0x5f1cac */
extern unsigned int DAT_005f1cb0; /* 0x5f1cb0 */
extern unsigned int DAT_005f1cb4; /* 0x5f1cb4 */
extern unsigned int DAT_005f1cb8; /* 0x5f1cb8 */

extern char *gameFlagsGetBlock(void);
extern char *dataTableGetRecord23(int);
extern int dataTable23Type1CountWithAoc(void);


void FUN_003b5064(void)

{
  char temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  pcVar2 = (char *)gameFlagsGetBlock();
  temp_v0 = *pcVar2;
  if (temp_v0 == '\0') {
    temp_v2 = 0;
    g_mapSelection = 1;
    DAT_005f1c9c = 2;
    DAT_005f1ca0 = 0;
    temp_v1 = dataTable23Type1CountWithAoc();
    if (0 < temp_v1) {
      do {
        pcVar2 = (char *)dataTableGetRecord23(temp_v2);
        temp_v0 = *pcVar2;
        temp_v3 = temp_v0 == '\x01';
        if (temp_v3) {
          temp_v0 = pcVar2[1];
        }
        temp_v4 = temp_v3 && temp_v0 == '\x02';
        if (temp_v3 && temp_v0 == '\x02') {
          temp_v4 = pcVar2[2] == '\0';
        }
        if (temp_v4) {
          DAT_005f1ca4 = (unsigned int)(unsigned char)pcVar2[3];
          return;
        }
        temp_v2 = temp_v2 + 1;
        temp_v1 = dataTable23Type1CountWithAoc();
      } while (temp_v2 < temp_v1);
    }
    DAT_005f1ca4 = 0xffffffff;
    return;
  }
  if (temp_v0 == '\x01') {
    g_mapSelection = (unsigned int)(unsigned char)pcVar2[1];
    DAT_005f1c9c = (unsigned int)(unsigned char)pcVar2[2];
    DAT_005f1ca0 = 0xffffffff;
    DAT_005f1ca4 = *(unsigned int *)(pcVar2 + 0xe0c);
    DAT_005f1ca8 = *(unsigned int *)(pcVar2 + 4);
    DAT_005f1cac = *(unsigned int *)(pcVar2 + 8);
    DAT_005f1cb0 = *(unsigned int *)(pcVar2 + 0xc);
    DAT_005f1cb4 = *(unsigned int *)(pcVar2 + 0x10);
    DAT_005f1cb8 = *(unsigned int *)(pcVar2 + 0x14);
    return;
  }
  if (temp_v0 != '\x02') {
    if (temp_v0 == '\x03') {
      g_mapSelection = (unsigned int)(unsigned char)pcVar2[1];
      DAT_005f1c9c = (unsigned int)(unsigned char)pcVar2[2];
      DAT_005f1ca4 = 0xffffffff;
    }
    return;
  }
  g_mapSelection = (unsigned int)(unsigned char)pcVar2[1];
  DAT_005f1c9c = (unsigned int)(unsigned char)pcVar2[2];
  DAT_005f1ca0 = 0xffffffff;
  DAT_005f1ca4 = *(unsigned int *)(pcVar2 + 0xe0c);
  DAT_005f1ca8 = *(unsigned int *)(pcVar2 + 4);
  DAT_005f1cac = *(unsigned int *)(pcVar2 + 8);
  DAT_005f1cb0 = *(unsigned int *)(pcVar2 + 0xc);
  return;
}

} /* extern "C" */
