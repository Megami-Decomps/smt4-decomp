#include "common.h"
extern "C" {
const char *FUN_002be650(u32 id);
s32 textFormatBuffer(char *buffer,const char *format,...);
extern char DAT_004c5344[];
/* Look up an item name, formatting its numeric fallback when absent. */
const char *itemGetNameOrFallback(u32 id) { const char *name=FUN_002be650(id); if (name==NULL) { textFormatBuffer(DAT_004c5344,"\x83\x41\x83\x43\x83\x65\x83\x80\x96\xbc%d",id); name=DAT_004c5344; } return name; }
}
