#include "common.h"
struct ModelList { const void *vtable; u32 first,second,third,resource,state,scaleX,scaleY; };
extern "C" {
extern u8 _ZTV9Obj4207c0[];
/* Initializes the model list and its unit fixed-point scales. */
ModelList *FUN_0040ac08(ModelList *list) { list->first=0;list->second=0;list->vtable=_ZTV9Obj4207c0+40;list->third=0;list->resource=0;list->state=0;list->scaleX=0x10000;list->scaleY=0x10000;return list; }
}
