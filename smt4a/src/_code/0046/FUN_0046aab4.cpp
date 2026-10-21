/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046aab4` (_code @ 0x46aab4, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [32], unsigned char *);
int uiSetFloatPair(void);
int lookupNameEntry(int, unsigned char [32], unsigned char [16]);
int FUN_0036b824(unsigned int);
int controllerSetDestination(unsigned int, unsigned char [16]);

extern unsigned char LAB_0046abdc; /* 0x46abdc */
extern unsigned char LAB_0046abe8; /* 0x46abe8 */
extern unsigned char LAB_0046abf4; /* 0x46abf4 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: uiSetFloatPair. */
extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: lookupNameEntry. */
/* Supplied declaration required: FUN_0036b824. */
/* Supplied declaration required: controllerSetDestination. */


void FUN_0046aab4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [32];
  unsigned char temp_v4 [16];
  
  if (*(char *)(param_1 + 0xa58) == '\0') {
    if (*(char *)(param_1 + 0x1a) == '\x01') {
      temp_v0 = FUN_00152f54();
      uiSetFloatPair();
      FUN_0036b824(temp_v0);
    }
    *(unsigned char *)(param_1 + 0xa58) = 1;
    temp_v2 = 0;
    if (temp_v2 < *(int *)(param_1 + 0xabc)) {
      do {
        textFormatBuffer(temp_v3,&LAB_0046abdc);
        if (temp_v2 != 7) {
          if (temp_v2 == 8) {
            textFormatBuffer(temp_v3,&LAB_0046abf4);
          }
        }
        else {
          textFormatBuffer(temp_v3,&LAB_0046abe8);
        }
        if (*(char *)(param_1 + 0x1a) != '\x02') {
          temp_v1 = *(int *)(*(int *)(*(int *)(param_1 + 0xcdc) + 0x18) + 4);
        }
        else {
          temp_v1 = *(int *)(*(int *)(param_1 + 0xce8) + 4);
          if ((*(unsigned int *)(temp_v1 + 4) & 1) != 0) {
            *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) & 0xfffffffe;
          }
        }
        lookupNameEntry(temp_v1,temp_v3,temp_v4);
        temp_v1 = param_1 + temp_v2 * 4;
        controllerSetDestination(*(unsigned int *)(*(int *)(temp_v1 + 0xa10) + 4),temp_v4);
        controllerSetDestination(*(unsigned int *)(*(int *)(temp_v1 + 0xa34) + 4),temp_v4);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(param_1 + 0xabc));
    }
  }
  return;
}

} /* extern "C" */
