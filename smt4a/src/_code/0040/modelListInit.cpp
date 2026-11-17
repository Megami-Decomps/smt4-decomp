#include "Model/MoriModelContent.h"

extern "C" {
extern u8 _ZTV9Obj4207d0[];

/* Constructs a model content in place: no file, resource or body yet, unit request settings. */
MoriModelContent *modelListInit(void *storage)
{
    MoriModelContent *content = static_cast<MoriModelContent *>(storage);
    content->body = NULL;
    content->binding = NULL;
    /* The vtable pointer, written as this C-style constructor stores it. */
    *reinterpret_cast<u8 **>(content) = _ZTV9Obj4207d0 + 8;
    content->resource = NULL;
    content->file = NULL;
    content->requestMode = 0;
    content->requestFirst = 0x10000;
    content->requestSecond = 0x10000;
    return content;
}

}
