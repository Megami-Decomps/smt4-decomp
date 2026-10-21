#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

typedef struct Widget {
    u8 unk00[0x0d];
    u8 shown;     /* 0x0d */
    u8 unk0e[0x66];
    u8 sub[0x10]; /* 0x74 */
    u8 subOn;     /* 0x84 */
    u8 unk85[0x763];
    int param;    /* 0x7e8 */
} Widget;

extern int FUN_004cfeb0(Widget *w, int a, int param, int b, int c, int d);
extern int FUN_004d05c4(void *sub, int a, int b, int c);

void widgetShow(Widget *w)
{
    FUN_004cfeb0(w, 10, w->param, 0, 1, 1);
    asdDebugHookPtrInt(w, 1);
    w->shown = 1;
    FUN_004d05c4(w->sub, 0x1f, 5, 10);
    w->subOn = 1;
}

} /* extern "C" */
