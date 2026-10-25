/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00441f84` (_code @ 0x441f84, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(unsigned int *);
int FUN_00442800(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp140; /* 0x140: local_140 */
} void_stack;

extern unsigned char LAB_004420e4; /* 0x4420e4 */
extern unsigned char DAT_00589380; /* 0x589380 */
extern int DAT_00589384; /* 0x589384 */
extern unsigned int DAT_00589388; /* 0x589388 */
extern unsigned int DAT_005c0a98; /* 0x5c0a98 */
extern unsigned int DAT_0062d28c; /* 0x62d28c */
extern unsigned int DAT_0062d298; /* 0x62d298 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

extern unsigned int FUN_0016f864(void);
extern unsigned int FUN_0016f988(unsigned int *, unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
extern unsigned int libc_strlen(unsigned char *);
extern int FUN_00442280(void);
extern unsigned int FUN_00442724(unsigned char *);
/* Supplied declaration required: FUN_00442800. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00441f84(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4 [8];
  unsigned int temp_v5;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
  temp_v0 = FUN_00442280();
  if (temp_v0 != 0) {
    temp_v2 = 0xd8a0c7f9;
  }
  else {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
    temp_v3 = DAT_00589384 == 0;
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
    if (!temp_v3) {
      temp_v2 = 0;
      DAT_00589384 = DAT_00589384 + 1;
    }
    else {
      temp_v2 = FUN_0016f864();
      if (-1 < (int)temp_v2) {
        temp_v1 = libc_strlen(&LAB_004420e4);
        temp_v2 = FUN_0016f988(&DAT_005c0a98,&LAB_004420e4,temp_v1,0);
        if (-1 < (int)temp_v2) {
          DAT_00589384 = DAT_00589384 + 1;
          FUN_00442800(0xb0101c8);
          nn_os_CriticalSection_Initialize(&DAT_0062d28c);
          DAT_00589380 = 0;
          nn_os_CriticalSection_Initialize(&DAT_0062d298);
          nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d2a4);
          temp_v3 = DAT_00589384 == 0;
          nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
          if ((temp_v3) && (temp_v0 = FUN_00442280(), temp_v0 == 0)) {
            temp_v2 = 0xd8a0c7f8;
          }
          else {
            temp_v2 = FUN_00442724(temp_v4);
          }
          if ((temp_v2 & 0x80000000) == 0) {
            DAT_00589388 = temp_v5;
          }
        }
      }
    }
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d2a4);
  return temp_v2;
}

} /* extern "C" */
