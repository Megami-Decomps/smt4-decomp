/* NON_MATCHING: compiler moves the copy size before forming the destination address. */
#include "common.h"
extern "C" {
struct JobTextWork { u8 unk00[0x8C]; char text[256]; };
JobTextWork *jobGetWork(u32 job);
char *strncpy(char *destination,const char *source,u32 size);
/* Copy a bounded string into the selected job work. */
char *jobSetText(u32 job,const char *text) { return strncpy(jobGetWork(job)->text,text,256); }
}
