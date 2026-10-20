/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d350c` (_code @ 0x1d350c, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00266f30(void);
int FUN_00266fac(int);
int FUN_00287a78(void);
int FUN_00287aec(void);
int libc_strcpy(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_00447e58; /* 0x447e58 */
extern unsigned char g_gameState; /* 0x49f91c */

/* Supplied declaration required: FUN_00266f30. */
/* Supplied declaration required: FUN_00266fac. */
/* Supplied declaration required: FUN_00287a78. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: libc_strcpy. */


void FUN_001d350c(void)

{
/* irregular: irregular input(s): in_s0; 6 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  float temp_v3;
  int temp_v4;
  float temp_v5;
  unsigned long long temp_v6;
  
  temp_v2 = -1;
  temp_v6 = (unsigned long long)in_s0;
  temp_v5 = 0.0f;
  if (*(char *)(DAT_00447e58 + 0xe3c) == '\0') {
    FUN_00266fac(0);
    *(unsigned char *)(DAT_00447e58 + 0xe0c) = 0;
    if ((*(signed char *)((unsigned char *)&g_gameState + 0x18)) == '\0') {
      temp_v1 = 0;
      do {
        if (*(char *)(DAT_00447e58 + temp_v1 * 0x38 + 0xc) != '\0') {
          temp_v3 = (float)temp_v6;
          FUN_00287aec();
          if ((int)temp_v3 < 0x42b40000) {
            temp_v4 = (int)temp_v6;
            FUN_00287a78();
            if ((temp_v4 < 0x428c0000) && ((temp_v2 == -1 || (temp_v3 < temp_v5)))) {
              temp_v2 = temp_v1;
              temp_v5 = temp_v3;
            }
          }
        }
        temp_v4 = DAT_00447e58;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x40);
      if (temp_v2 != -1) {
        temp_v1 = DAT_00447e58 + temp_v2 * 0x38;
        *(unsigned char *)(DAT_00447e58 + 0xe0c) = 1;
        *(int *)(temp_v4 + 0xe10) = temp_v2;
        *(int *)(temp_v4 + 0xe14) = (int)*(short *)(temp_v1 + 0x12);
        temp_v1 = (int)*(short *)(temp_v1 + 0x14);
        FUN_00266f30();
        temp_v2 = DAT_00447e58;
        pcVar2 = (char *)(temp_v1 + 8);
        if (pcVar2 != (char *)0x0) {
          temp_v0 = *pcVar2;
          if (temp_v0 == '0') {
            pcVar2 = (char *)(unsigned int)*(unsigned char *)(temp_v1 + 9);
          }
          if (temp_v0 != '0' || pcVar2 != (char *)0x0) {
            libc_strcpy(DAT_00447e58 + 0xe1c,temp_v1 + 8);
            return;
          }
        }
        *(unsigned char *)(DAT_00447e58 + 0xe1c) = 0;
        *(unsigned char *)(temp_v2 + 0xe1d) = 0;
      }
    }
  }
  return;
}

} /* extern "C" */
