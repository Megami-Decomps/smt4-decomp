/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001af968` (_code @ 0x1af968, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b5bd4(unsigned int, int, int);
int FUN_001bdaa8(unsigned int, int, unsigned short *);

/* stack frame of param_1: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char DAT_006446e9; /* 0x6446e9 */

/* Supplied declaration required: FUN_001b5bd4. */
extern unsigned int FUN_001bd5f8(void);
/* Supplied declaration required: FUN_001bdaa8. */


void FUN_001af968(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  
  if ((char)param_1[3] != '\0') {
    if (*(unsigned char *)((int)param_1 + 0xd) < 2) {
      if (*(unsigned char *)((int)param_1 + 0xd) < 2) {
        temp_v1 = 0;
        if (*param_1 != 0) {
          temp_v1 = param_1[2];
        }
        if (*param_1 != 0 && temp_v1 != 0) {
          temp_v4 = 0;
          temp_v3 = 1;
          temp_v0 = *(char *)((int)param_1 + 0xd);
          temp_v2 = FUN_001bd5f8();
          FUN_001bdaa8(temp_v2,(int)temp_v0,&temp_v3);
          *(unsigned char *)((int)param_1 + 0xe) = 0;
          if (*(char *)((int)param_1 + 0xe) == '\0') {
            *(unsigned char *)((int)param_1 + 0xf) = DAT_006446e9;
          }
        }
      }
      temp_v0 = *(char *)((int)param_1 + 0xd);
      temp_v2 = FUN_001bd5f8();
      FUN_001b5bd4(temp_v2,1,(int)temp_v0);
      *(unsigned char *)((int)param_1 + 0xd) = 0xff;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(unsigned char *)(param_1 + 3) = 0;
  }
  return;
}

} /* extern "C" */
