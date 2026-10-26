#include "common.h"
/* Writes an optional command prefix followed by the fixed pair of command words. */
extern "C" u32 *FUN_003572e8(u32 *output,u32 includePrefix) { if(includePrefix!=0) {*output++=0;*output++=0x200080;*output++=0;*output++=0;}*output++=0x13000;*output++=0xF0080;return output; }
