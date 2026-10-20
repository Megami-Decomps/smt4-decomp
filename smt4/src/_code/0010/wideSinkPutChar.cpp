#include "common.h"

extern "C" {

/* Output cursor of a UTF-16 string builder: writes at cur while cur < end. */
typedef struct WideSink {
    /* 0x0 */ u16 *cur;
    /* 0x4 */ u16 *end;
} WideSink;

/* Appends one UTF-16 character to the sink if there is room. */
void wideSinkPutChar(u16 ch, WideSink *sink)
{
    u16 *cur;
    u16 *end = sink->end;

    cur = sink->cur;
    if (cur < end) {
        sink->cur = cur + 1;
        *cur = ch;
    }
}

} /* extern "C" */
