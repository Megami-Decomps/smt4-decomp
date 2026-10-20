/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026fe0c` (_code @ 0x26fe0c, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0049fd14; /* 0x49fd14 */
extern unsigned int DAT_0049fd18; /* 0x49fd18 */
extern unsigned int DAT_0049fd1c; /* 0x49fd1c */
extern unsigned int DAT_0049fd20; /* 0x49fd20 */
extern unsigned int DAT_0049fd24; /* 0x49fd24 */
extern unsigned int DAT_0049fd28; /* 0x49fd28 */
extern unsigned int DAT_0049fd2c; /* 0x49fd2c */
extern unsigned int DAT_0049fd30; /* 0x49fd30 */
extern unsigned int DAT_0049fd34; /* 0x49fd34 */

extern int dataTable23Type1CountWithAoc(void);
extern char *FUN_0027d748(int);
extern char *gameGetMapBlock(void);


void FUN_0026fe0c(void)

{
  char temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  pcVar2 = (char *)gameGetMapBlock();
  temp_v0 = *pcVar2;
  if (temp_v0 == '\0') {
    temp_v2 = 0;
    DAT_0049fd14 = 1;
    DAT_0049fd18 = 2;
    DAT_0049fd1c = 0;
    temp_v1 = dataTable23Type1CountWithAoc();
    if (0 < temp_v1) {
      do {
        pcVar2 = (char *)FUN_0027d748(temp_v2);
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
          if ((unsigned char)pcVar2[3] == 0xff) {
            DAT_0049fd20 = 0xffffffff;
            return;
          }
          DAT_0049fd20 = (unsigned int)(unsigned char)pcVar2[3];
          return;
        }
        temp_v2 = temp_v2 + 1;
        temp_v1 = dataTable23Type1CountWithAoc();
      } while (temp_v2 < temp_v1);
    }
    DAT_0049fd20 = 0xffffffff;
    return;
  }
  if (temp_v0 == '\x01') {
    DAT_0049fd14 = (unsigned int)(unsigned char)pcVar2[1];
    DAT_0049fd18 = (unsigned int)(unsigned char)pcVar2[2];
    DAT_0049fd1c = 0xffffffff;
    DAT_0049fd20 = *(unsigned int *)(pcVar2 + 0xdd8);
    DAT_0049fd24 = *(unsigned int *)(pcVar2 + 4);
    DAT_0049fd28 = *(unsigned int *)(pcVar2 + 8);
    DAT_0049fd2c = *(unsigned int *)(pcVar2 + 0xc);
    DAT_0049fd30 = *(unsigned int *)(pcVar2 + 0x10);
    DAT_0049fd34 = *(unsigned int *)(pcVar2 + 0x14);
    return;
  }
  if (temp_v0 == '\x02') {
    DAT_0049fd14 = (unsigned int)(unsigned char)pcVar2[1];
    DAT_0049fd18 = (unsigned int)(unsigned char)pcVar2[2];
    DAT_0049fd1c = 0xffffffff;
    DAT_0049fd20 = *(unsigned int *)(pcVar2 + 0xdd8);
    DAT_0049fd24 = *(unsigned int *)(pcVar2 + 4);
    DAT_0049fd28 = *(unsigned int *)(pcVar2 + 8);
    DAT_0049fd2c = *(unsigned int *)(pcVar2 + 0xc);
    return;
  }
  if (temp_v0 == '\x03') {
    DAT_0049fd14 = (unsigned int)(unsigned char)pcVar2[1];
    DAT_0049fd18 = (unsigned int)(unsigned char)pcVar2[2];
    DAT_0049fd20 = 0xffffffff;
  }
  return;
}

} /* extern "C" */
